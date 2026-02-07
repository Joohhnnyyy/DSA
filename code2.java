import java.util.Scanner;

public class code2 {

  public static int maxValue(int arr[], int n) {
    int maxValue = Integer.MIN_VALUE;
    for (int i = 0; i < n; i++) {
      if (arr[i] > maxValue) {
        maxValue = arr[i];
      }
    }
    return maxValue;
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter the size of the array:");
    int n = sc.nextInt();
    int arr[] = new int[n];
    for (int i = 0; i < n; i++) {
      arr[i] = sc.nextInt();
    }
    int result = maxValue(arr, n);
    System.out.println("The maximum value in the array is: " + result);
    sc.close();
  }

}
