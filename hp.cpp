#include <bits/stdc++.h>
using namespace std;

bool comp(tuple<int, int, int> a, tuple<int, int, int> b){
	int c = get<2>(a), d= get<2>(b);
	return c < d ;
}

void init(vector<int>& Parent){
	for(int i = 0; i < Parent.size(); i++) Parent[i] = i;
}

int findSet(int Node, vector<int>& Parent){
	if(Node == Parent[Node]){return Node; }
	return findSet(Parent[Node], Parent);
}

bool isSameSet(int Node1, int Node2, vector<int>& Parent){
	if(findSet(Node1, Parent)== findSet(Node2, Parent)) return true;
	return false;
}

vector<tuple<int, int, int>> uniteMin(vector<int>& Parent, vector<tuple<int, int, int>>& EdgeList){
	vector<tuple<int, int, int>> MinimumSpanningTree;
	sort(EdgeList.begin(), EdgeList.end(), comp);
	for(int i = 0; i < EdgeList.size(); i++ ){
		int node1 = get<0>(EdgeList[i]), node2 = get<1>(EdgeList[i]);
		if(isSameSet(node1, node2, Parent)) continue;
		Parent[findSet(node1, Parent)] = Parent[findSet(node2, Parent)];
		MinimumSpanningTree.push_back({node1, node2, get<2>(EdgeList[i])});
	}
	return MinimumSpanningTree;
}

vector<tuple<int, int, int>> uniteMax( vector<int>& Parent, vector<tuple<int, int, int>>& EdgeList){
	vector<tuple<int, int, int>> MaximumSpanningTree;
	sort(EdgeList.rbegin(), EdgeList.rend(), comp);
	for(int i = 0; i < EdgeList.size(); i++ ){
		int node1 = get<0>(EdgeList[i]), node2 = get<1>(EdgeList[i]);
		if(isSameSet(node1, node2, Parent)) continue;
		Parent[findSet(node1, Parent)] = Parent[findSet(node2, Parent)];
		MaximumSpanningTree.push_back({node1, node2, get<2>(EdgeList[i])});
	}
	return MaximumSpanningTree;
}


int main(){
	int numberOfEdges, numberOfNodes;
        cin >> numberOfNodes >> numberOfEdges;
	vector<tuple<int, int, int>> EdgeList;
	for(int i = 0; i < numberOfEdges; i++){
		int a, b,c; cin >> a >> b >> c;
		EdgeList.push_back({a, b, c});
	}
	vector<int> Parent; Parent.resize(numberOfNodes);
	init(Parent);
	vector<tuple<int,int, int>> MaximumSpanningTree = uniteMax(Parent, EdgeList);
	init(Parent);
	vector<tuple<int,int, int>> MinimumSpanningTree = uniteMin(Parent, EdgeList);

	cout << "Minimum Spanning Tree\n";
	for(auto [a, b, c] : MinimumSpanningTree){
		cout << a << " " << b << " " << c << "\n";
	}
	cout << "\n";
	cout << "Maximum Spanning Tree\n";
	for(auto [a, b, c] : MaximumSpanningTree){
		cout << a << " " << b << " " << c << "\n";
	}
	return 0;
}
