import java.util.Random;

enum ZenerCard {
  CIRCLE,
  PLUS,
  WAVE,
  RECTANGLE,
  STAR
}

class Main {
    public static final String[] CARD_STRS = {
        "⊙",
        "∔",
        "∭",
        "⊡",
        "⋇"
    };

    public static void main(String[] args) {
        ZenerCard[] cards = { ZenerCard.CIRCLE, ZenerCard.PLUS, ZenerCard.WAVE, ZenerCard.RECTANGLE, ZenerCard.STAR };

        shuffleCards(cards);

        for (int i = 0; i < cards.length; i++) {
            ZenerCard c = cards[i];
            int zci = c.ordinal(); // ※ ordinalメソッドで列挙型の定義の中での順番(0〜)を取り出すことができる
            System.out.print("[ " + CARD_STRS[zci] + " ] ");
        }
        System.out.println();
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
}