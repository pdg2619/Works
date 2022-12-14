import java.io.*;
import java.util.*;

class Main {
    static List<String> readLinesFromFile(String filename) throws 
    IOException {
        List<String> lines = new ArrayList<String>();

        File file = new File("ej-list.txt");
        BufferedReader r = new BufferedReader(
         new InputStreamReader(new FileInputStream(file), "UTF-8"));
        String line;
        while ((line = r.readLine()) != null) {
            lines.add(line);
        }
        r.close();

        return lines;

    }

    public static void main(String[] args) throws IOException {
        List<String> lines = readLinesFromFile("ej-list.txt");
        System.out.println("行数: " + lines.size());        
    }
}