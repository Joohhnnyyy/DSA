import java.util.ArrayList;
public class code5{
  public static int Unique(ArrayList<Integer> arr){
    int ans = 0;
    for(int i = 0 ; i < arr.size() ;i++){
      ans = ans ^ arr.get(i);
    }
    return ans;
  }
  public static void main(String[] args) {
    ArrayList<Integer> arr = new ArrayList<>();
    arr.add(1);
    arr.add(2);
    arr.add(3);
    arr.add(4);
    arr.add(1);
    arr.add(2);
    arr.add(3);
    System.out.println(Unique(arr));
  }
}