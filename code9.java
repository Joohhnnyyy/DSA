import java.util.ArrayList;
import java.util.Arrays;
public class code9 {

  public static void swap(ArrayList <Integer> arr , int i ,int j){
    int temp = arr.get(i);
    arr.set(i, arr.get(j));
    arr.set(j, temp);
  }
  public static void main(String[] args) {
    ArrayList<Integer> arr = new ArrayList<>(Arrays.asList(0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1));
    int start = 0 ,end = arr.size() - 1;
    while(start < end){
      if(arr.get(start) == 0){
        start++;
      }
      else if ( arr.get(end) == 1){
        end--;
      }
      else{
        swap(arr, start, end);
        start++;
        end--;
      }
      
      
    }
    for(int i = 0 ; i < arr.size() ; i++){
      System.out.print(arr.get(i) + " ");
    }
    System.out.println();
  }
  
}
