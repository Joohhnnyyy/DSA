import java.util.Scanner;

public class code1 {

  public static int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
      if (arr[i] == target) {
        return i;
      }
    }
    return -1;
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter the size of the array:");
    int n = sc.nextInt();
    int arr[] = new int[n];

    System.out.println("Enter the elements of the array:");
    for (int i = 0; i < n; i++) {
      arr[i] = sc.nextInt();
    }
    System.out.println("The elements of the array are:");
    for (int i = 0; i < n; i++) {
      System.out.print(arr[i] + " ");
    }
    System.out.println();
    System.out.println("Enter the target element to search:");
    int target = sc.nextInt();
    int result = linearSearch(arr, n, target);
    if ( result != -1){
      System.out.println("Element found at index: " + result);
    } else {
      System.out.println("Element not found in the array.");
    }
    sc.close();

  }
}
