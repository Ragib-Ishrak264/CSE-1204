import java.util.*;
public class Topic2 
{
    public static void main(String[] args) 
    {
    ArrayList<String> ax = new ArrayList<>();
    ax.add("Rose");
    ax.add("Lilie");
    ax.add("Carnation");
    ax.add("Daisie");
    ax.add("Tulip");

    System.out.println("Initial Array: "+ax);

    ax.add(1,"Peonie");
    System.out.println("After Insertion: "+ ax);

    ax.remove("Lilie");
    System.out.println("After Deletion: "+ ax);

    String search = "Tulip";
    if(ax.contains(search))
    {
        System.out.println(search+"found in the list");
    }
    else
    {
        System.out.println(search + "not found");
    }

    Collections.sort(ax);
    System.out.println("Sorted list"+ ax);

    ax.clear();
    System.out.println("After Clearing: "+ ax);
    }
    
}
