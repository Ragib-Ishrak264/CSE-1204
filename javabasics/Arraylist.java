import java.util.ArrayList;
import java.util.Collections;
public class Arraylist 
{
    public static void main(String[] args)
    {
        ArrayList<String> ax = new ArrayList<>();
        ax.add("Rose");
        ax.add("Lilie");
        ax.add("Carnation");
        ax.add("Daisie");
        ax.add("Tulip");
        System.out.println(ax);
        ax.add(1,"Peonie");
        System.out.println(ax);
        ax.remove("Lilie");
        System.out.println(ax);
        System.out.println(ax.contains("Tulip"));
        Collections.sort(ax);
        System.out.println(ax);
    }
    
}
