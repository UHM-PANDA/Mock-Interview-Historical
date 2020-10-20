import java.util.*;

class Main {

    public static void main(String args[]) {

    }

    public static boolean isWellFormed(String string) {
        
        ArrayList<String> leftCharacters = new ArrayList<String>();
        Hashtable<String, String> lookup = new Hashtable<String, String>();
        h.put('(', ')');
        h.put('{', '}');
        h.put('[', ']');

        for (String character : string) {
            if (lookup.containsKey(character)) {
                leftCharacters.add(character);
            } else if (lookup.isEmpty() || lookup.get(leftCharacters.remove(leftCharacters.size() - 1)) != character) {
                return false;
            }
        }

        return leftCharacters.isEmpty();
    }

}
