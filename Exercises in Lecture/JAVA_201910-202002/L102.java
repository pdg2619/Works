import java.io.*;
import java.util.*;

// www.jdoodle.comを利用するときの注意:
// Mainクラスは「public」を付けて定義してください

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // 1. すべての行を読み込む
        List<String> lines = new ArrayList<String>(); // 行のリスト
        String line;
        while ((line = br.readLine()) != null) {
            lines.add(line);
        }

        // 2. 各カラムの幅（最大文字数）を求める
        // 最初の行からカラムの個数を求める
        String FirstLine = lines.get(0);
        String[] values = FirstLine.split(",", -1);
        // 幅を格納する変数を用意する
        int countOfColumns = values.length;
        int [] columnWidths = new int[countOfColumns];
        // それぞれの行について
        for (String l2 : lines){
            // それぞれのカラムについて
            String[] v2 = l2.split(",", -1);
            for(int i = 0; i < v2.length; i++) {
                String v = v2[i];
                // もしカラムの幅（最大文字数）を更新する
                if(columnWidths[i] < v.length()){
                columnWidths[i] = v.length();
                }
            }
        }

        // 3. それぞれの行について、各カラムを幅にあわせて出力する
        for (String l2 : lines){
            String[] v2 = l2.split(",", -1);
            for(int i = 0; i < v2.length; i++) {
                String v = v2[i];
                
                System.out.print("|");
                System.out.print(v);
                for (int c = v.length(); c < columnWidths[i]; c++) {
                    System.out.print(" ");
                }
            }
            System.out.println("|");
            
        }
    }
}