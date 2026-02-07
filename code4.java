import java.util.Scanner;

public class code4 {

  public static void swap(int arr[], int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter the size of the array:");
    int n = sc.nextInt();
    int arr[] = new int[n];


    for(int i = 0 ;  i < arr.length ; i++){
      arr[i] = sc.nextInt();
    }

    System.out.println("Reversed array is:");
    int left = 0 ; int right = arr.length -1;
    while(left < right){
      swap(arr,left, right);
      left++;
      right--;
    }
    for(int i = 0 ; i < n ; i++){
      System.out.print(arr[i] + " ");
    }
    sc.close();


}
}
