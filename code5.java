
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class code5{
  public static void main(String[] args) {
    ArrayList<Integer> arr = new ArrayList<>(Arrays.asList(1,2,4,2,1,3,6,5,5,6,4));
    int XorOfAll = 0;
    for(int i : arr){
      XorOfAll = XorOfAll ^ i;
    }
    System.out.println(XorOfAll);

    
  }
}