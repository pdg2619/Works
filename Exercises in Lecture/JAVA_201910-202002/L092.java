import java.io.*;
import java.util.Collections;

interface Formatter {
    public String heading(String text); // 見出し
    public String item(String text); // 箇条書き
    public String plainText(String text); // 通常のテキスト
}

class TerminalFormatter implements Formatter {
    public static final int WIDTH = 38;

    public String heading(String text) {
        // 1行目は入力となったテキスト、２行目には1行目と同じ文字数の「=」を並べる
        return "\n" + text + "\n" + String.join("", Collections.nCopies(text.length(), "=")) + "\n";
    }

    public String item(String text) {
        // 1行目は「 * 」で始まり、入力となったテキストの(WIDTH-3)文字目まで。
        // 入力となったテキストがそれよも長いなら、2行目以降に「   」で始まり、(WIDTH-3)文字を取り出したものを並べていく
        String s = text;

        int w = WIDTH - 3;
        if (s.length() < w) {
            w = s.length();
        }
        String r = " * " + s.substring(0, w) + "\n";
        s = s.substring(w);

        while (s.length() > 0) {
            w = WIDTH - 3;
            if (s.length() < w) {
                w = s.length();
            }
            r += "   " + s.substring(0, w) + "\n";
            s = s.substring(w);
        }

        return r;
    }

    public String plainText(String text) {
        // 入力となったテキストをWIDTH文字ずつ区切って行にしたものを並べていく
        String s = text;

        int w = WIDTH;
        if (s.length() < w) {
            w = s.length();
        }
        String r = s.substring(0, w) + "\n";
        s = s.substring(w);

        while (s.length() > 0) {
            w = WIDTH;
            if (s.length() < w) {
                w = s.length();
            }
            r += s.substring(0, w) + "\n";
            s = s.substring(w);
        }

        return r;
    }
}

// ※1
class HTMLFormatter implements Formatter {
    public String heading(String text) {
        // 入力となったテキストを「<h1>」と「</h1>」に挟んだ行を出力する
        return "<h1>" + text + "</h1>" + "\n";
    }

    public String item(String text) {
        // 入力となったテキストを、「<ul><li>」と「</li></ul>」に挟んだ行を出力する
        return "<ul>" + "<li>" + text + "</li>" + "</ul>" + "\n";
    }

    public String plainText(String text) {
        // 入力となったテキストを、「<p>」と「</p>」に挟んだ行を出力する
        return "<p>" + text + "</p>" + "\n";
    }
}

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // Formatter f = new TerminalFormatter();
        Formatter f = new HTMLFormatter(); // ※2

        String line;
        while ((line = br.readLine()) != null) { // 行を読み込む
            if (line.startsWith("* ")) { // 箇条書きか
                String itemText = line.substring(2);
                System.out.println(f.item(itemText));
            }
            else if (line.startsWith("# ")) { // 見出しか
                String headingText = line.substring(2);
                System.out.println(f.heading(headingText));
            }
            else { // 通常のテキスト
                System.out.println(f.plainText(line));
            }
        }
    }
}