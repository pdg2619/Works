import java.io.*;

// www.jdoodle.comを利用するときの注意:
// Mainクラスは「public」を付けて定義してください

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        String queryString = args[0];

        int lineNumber = 0;
        String line;
        while ((line = br.readLine()) != null) {
            lineNumber++;
            
            int pos = line.indexOf(queryString);
            if (pos >= 0 ){
            String t1 = line.substring(0, pos);
            String t2 = line.substring(pos, line.length());
            System.out.println(lineNumber + " " + t1 + "⇨" + t2);
            }
        }
    }
}