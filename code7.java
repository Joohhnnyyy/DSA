import java.util.ArrayList;
import java.util.Arrays;

public class code7 {
  public static void main(String[] args) {
    ArrayList<Integer> arr = new ArrayList<>(Arrays.asList(10,20,30,40,50));
    for(int i = 0; i < arr.size(); i++) {
      for(int j = i+1 ; j <arr.size() ; j++){
        System.out.println(arr.get(i) + " " + arr.get(j));
      }
      
    }
  }
  
}
