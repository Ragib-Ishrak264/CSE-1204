public class Titanic {
    String directorName;
    String featuredsong;
    public static int count=0;
    Titanic()
    {

    }
    Titanic(String name, String song)
    {
        directorName = name;
        featuredsong = song;
        count++;
    }

    void showDetails()
    {
        System.out.println("Director Name: "+directorName);
        System.out.println("Featuerd Song: "+ featuredsong);
    }
    void infoBlock()
    {
        System.out.println("Titanic sank in the North Atlantic Occaen on !5th April 1912 after striking an iceberg");
    }
    public static void main(String[] args)
    {
        Titanic t = new Titanic("James Cameron","My Heart Will Go On");
        t.infoBlock();
        t.showDetails();
        Romantic r = new Romantic();
        // r.showDetails();

        System.out.println("Object created: "+Titanic.count);
    }
}
class Romantic extends Titanic
{
    //super(Titanic);
    Romantic()
    {
    super.showDetails();
    count++;
    }
}



