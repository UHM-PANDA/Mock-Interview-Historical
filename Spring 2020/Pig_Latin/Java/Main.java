import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.*;

class Main {
    public static void main(String[] args) {
        System.out.println(pigLatin("Everyone thinks that smiling will solve the problems of the world"));
        System.out.println(pigLatinBruteForce("Everyone thinks that smiling will solve the problems of the world"));
    }
    
    public static String pigLatin(String sentence) {
        Matcher matcher;
        int index;

        String[] words = sentence.split(" ");
        String result = "";
        Pattern pattern = Pattern.compile("[aeiouAEIOU]");

        for (String word: words) {
            matcher = pattern.matcher(word);
            if (matcher.find()) {
                result += ((index = word.indexOf(matcher.group(0))) != 0) ? word.substring(index) + word.substring(0, index) + "ay " : word + "way "; 
            }
        }
        return result.substring(0, result.length() - 1);
    }

    public static String pigLatinBruteForce(String sentence) {
        String result = "";
        String[] words = sentence.split(" ");
        Hashtable<String, Boolean> vowels = new Hashtable<String, Boolean>();

        int j;

        vowels.put("a", true);
        vowels.put("e", true);
        vowels.put("i", true);
        vowels.put("o", true);
        vowels.put("u", true);
        vowels.put("A", true);
        vowels.put("E", true);
        vowels.put("I", true);
        vowels.put("O", true);
        vowels.put("U", true);

        for (int i = 0; i < words.length; i++) {
            if (vowels.containsKey(String.valueOf(words[i].charAt(0)))) {
                result += words[i] + "way ";
            } else {
                for (j = 0; j < words[i].length() && !vowels.containsKey(String.valueOf(words[i].charAt(j))); j++);
                result += words[i].substring(j) + words[i].substring(0, j) + "ay ";
            }
        }
        return result.substring(0, result.length() - 1);
    }
}
