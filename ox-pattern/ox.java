
public class ox {
  public static void main(String[] args){
    int n = 5;
    for(int i = 1; i <= n; i++){
      for(int j = 1; i <= n; j++){

        if(i == (n/2)+1 || j == (n/2)+1){
          System.out.println("X ");
        }
        else{
          System.out.println("O ");
        }
      }
      System.out.println();
    }
  }
}
