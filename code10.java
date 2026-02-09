import java.util.ArrayList;
import java.util.Arrays;

public class code10 {

  public static void Swap( ArrayList<Integer> arr , int i , int j){
    int temp = arr.get(i) ;
    arr.set(i,arr.get(j)) ;
    arr.set(j,temp) ;
  }
  public static void main(String[] args) {
    ArrayList<Integer> arr = new ArrayList<>(Arrays.asList(1,0,1,1,0,1,1,0,1));
    int start = 0 ;
    int end = arr.size() - 1 ;
    while(start < end){
      if( arr.get(start) == 0){
        start++;
      }
      else if( arr.get(end) == 1){
        end--;

      }
      else{
        Swap(arr,start,end) ;
        start++;
        end--;
      }
    }

    for( int i : arr){
      System.out.print(i + " ");
    }

  }
}
