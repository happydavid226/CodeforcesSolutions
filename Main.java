import java.util.*;
public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            HashSet<Integer> st = new HashSet<>();
            for(int i = 0; i < n; i++){
                int x = sc.nextInt();
                st.add(x);
            }
            n = st.size();
            System.out.println(n*2-1);
        }
    }
}