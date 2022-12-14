import java.util.Random;
import java.io.*;

enum ZenerCard {
    CIRCLE("⊙"),
    PLUS("∔"),
    WAVE("∭"),
    RECTANGLE("⊡"),
    STAR("⋇");

    public final String str;

    private ZenerCard(String str) {
        this.str = str;
    }
}

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // Zenerカード2組分（それぞれのカードを２枚ずつ）用意する
        ZenerCard[] cards = new ZenerCard[ZenerCard.values().length * 2]; // 要素がnullなら取り除かれたカード
        for (int i = 0; i < cards.length; i++) {
            cards[i] = ZenerCard.values()[i/2];
        }

        // カードをシャッフルする
        shuffleCards(cards);

        System.out.println("**** 神経衰弱ゲーム ****");
        System.out.println();
        while (true) {
            // 伏せたカードを表示する
            printCards(cards, -1, -1);

            // カードが残っていなければ終了
            int cardRemains = 0;
            for (int i = 0; i < cards.length; i++) {
                if (cards[i] != null) {
                    cardRemains++;
                }
            }
            if (cardRemains == 0) {
                System.out.println("あがり！");
                break; // while true
            }

            // カードを２枚選んでもらう
            System.out.println("表に向けるカードを２枚選んでください");
            System.out.println("1枚目(1〜" + cards.length + "): ");
            int selected1 = Integer.parseInt(br.readLine()) - 1;
            System.out.println("2枚目(1〜" + cards.length + "): ");
            int selected2 = Integer.parseInt(br.readLine()) - 1;

            if (! (0 <= selected1 && selected1 < 10 && 0 <= selected2 && selected2 < 10)) {
                continue;
            }
            
            if (cards[selected1] == null || cards[selected2] == null) {
                continue;
              }

            if (selected1 == selected2) {
                continue;
              }
            
            

            // 選んだカードを表向きにしてカードを表示する
            printCards(cards, selected1, selected2);

            // 選んだカードが等しければ取り除く
            if (cards[selected1].ordinal() == cards[selected2].ordinal()) {
                System.out.println("あたり！");
                cards[selected1] = null;
                cards[selected2] = null;
            }
            else {
                System.out.println("残念！");
            }
            System.out.println();
        }
    }

    public static void shuffleCards(ZenerCard[] cards) {
        Random rand = new Random();
        for (int i = 0; i < cards.length; i++) {
            int r = rand.nextInt(cards.length); // ※ 0〜(カード枚数-1)の数字をランダムに作成する
            ZenerCard t = cards[r];
            cards[r] = cards[i];
            cards[i] = t;
        }
    }

    public static void printCards(ZenerCard[] cards, int selected1, int selected2) {
        for (int i = 0; i < cards.length; i++) {
            if (cards[i] == null) {
                System.out.print((i + 1) + "       ");
            }
            else if (i == selected1 || i == selected2) {
                System.out.print((i + 1) + "[ " + cards[i].str + " ] ");
            }
            else {
                System.out.print((i + 1) + "[ .. ] ");
            }
        }
        System.out.println();
    }
}