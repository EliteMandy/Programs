// import java.util.Scanner;
// public class chef{
//     public static void main(String[] args){
//     Scanner scan = new Scanner(System.in);
//     int t = scan.nextInt();
//     for (int i = 0; i<t;i++){
//         int X = scan.nextInt();
//         int Y = scan.nextInt();
//         if(X>=Y){
//             System.out.println(Y);
//         }
//         if(X<Y){
//             System.out.println(X);
//         }
//     }
//     }
// }
// import java.util.Scanner;
// public class chef{
//     public static void main(String[] args){
//     Scanner scan = new Scanner(System.in);
//     int t = scan.nextInt();
//     for (int i = 0; i<t;i++){
//         int X = scan.nextInt();
//         int Y = scan.nextInt();
//         if(X>=Y){
//             System.out.println(4*X + Y);
//         }
//         if(X<=Y){
//             System.out.println(4*Y+X);
//         }

//     }
//     }    
// }
// import java.util.Scanner;
// public class chef{
//     public static void main(String[] args){
//     Scanner scan = new Scanner(System.in);
//     int T = scan.nextInt();
//     for(int i = 0; i<T;i++){
//         int X = scan.nextInt();
//         if(X>20){
//             System.out.println("HOT");
//         }
//         else{
//             System.out.println("COLD");
//         }

//     }
//     }    
// }
import java.util.Scanner;
public class chef{
    public static void main(String[] args){
    Scanner scan = new Scanner(System.in);
    int T = scan.nextInt();
    for(int i = 0; i<T;i++){
        int a = scan.nextInt();
        int b = scan.nextInt();
        int c = scan.nextInt();
        int d = scan.nextInt();
        if(a>=b && c>=d){
            int A = a+c;
            System.out.println(A);
        }
        else if(b>=a && d>=c){
            int B = b+d;
            System.out.println(B);
        }
    }
    }    
}
