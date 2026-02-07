import java.util.Scanner;

public class code3 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter the size of the array:");
    int n = sc.nextInt();
    int arr[] = new int[n];
    for (int i = 0; i < arr.length; i++) {
      arr[i] = sc.nextInt();
    }

    System.out.println("Extremes values in the array are:");
    int left = 0;
    int right = n-1;
    while (left < right){
      System.out.println(arr[left] + " " + arr[right]);
      left++;
      right--;
      if( left == right){
        System.out.println(arr[left]);
      }
    }
    sc.close();



  }

}
