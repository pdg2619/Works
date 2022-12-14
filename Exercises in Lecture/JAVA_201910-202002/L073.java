import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

          boolean inputAccepted = false;
          while (! inputAccepted) {  
            System.out.println("実行しますか(y/n)?");
            String s = br.readLine();

            switch (s) {
              case "y" :
              case "yes" : 
              case "Y" :
              case "Yes" : 
              case "YES": 
              System.out.println("実行しました。");
              inputAccepted = true;
                break;
              case "n" :
              case "no" :
              case "N" :
              case "No" :
              case "NO" :
              System.out.println("中止しました。");
              inputAccepted = true;
                break;
            }
          }
    }
}