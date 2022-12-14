import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        Map<String, String> addressTable = new HashMap<String, String>(); // アドレス帳
        while (true) {
            String line = br.readLine();
            if(line.equals("*")){
              Set<String> keys = addressTable.keySet();
              for(String names : keys){
                System.out.println(names);
              }
            }
            else{
              int pos = line.indexOf(" ");
              if (pos >= 0) { // もし入力した行にスペースがあるなら
                // 最初のスペースの前までを名前、それ以降を住所とする
                String name = line.substring(0, pos);
                String address = line.substring(pos + 1, line.length()); // 

                // アドレス帳に追加する
                addressTable.put(name, address);

                System.out.println("Addded new entry: " + name);
              }
              else {
                // 入力された名前を検索する
                String name = line;
                String address = addressTable.get(name); // 住所を求める   
                  if (addressTable.containsKey("null")) {
                  System.out.println("Not Found");
                  }
                  else{
                  System.out.println("Name: " + name);
                  System.out.println("Address: " + address);
                  }
                }
              }                      
            }
        }
    }
