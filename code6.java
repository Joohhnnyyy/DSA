import java.util.ArrayList;
import java.util.Arrays;

public class code6 {
  public static void main(String[] args) {

    ArrayList<Integer> arr1 = new ArrayList<>(
        Arrays.asList(1, 2, 3, 4, 5)
    );

    ArrayList<Integer> arr2 = new ArrayList<>(
        Arrays.asList(1, 2, 3, 6, 7, 8, 9, 10)
    );

    ArrayList<Integer> arr3 = new ArrayList<>();

    for (int i = 0; i < arr1.size(); i++) {
      if (arr2.contains(arr1.get(i))) {
        arr3.add(arr1.get(i));
      }
    }

    for (int i : arr3) {
      System.out.println(i);
    }
  }
}
