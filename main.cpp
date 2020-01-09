/*
 
 Chapter 2 Part 5 Task:
 User-Defined Types
 
 1) write 10 user-defined types, each with a random number of member variables
    try to make the member variables have names that are related to the user-defined type.
 
 2) give the member variables relevant data types
 
 3) add a couple member functions.  
    make the function parameter list for those member functions use some of your User-Defined Types
 
 4) make 2 of the 10 user-defined types be nested class
 
 5) One of your UDTs should only use UDTs for its member variable types.   
     No primitives allowed!
 
 6) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Wait for my code review.
 */

/*
 example:
 */
struct CarWash            //1) a U.D.T. with a random number of member variables
{
    int numSponges = 3;
    double amountOfSoapUsedPerCar = 2.6; //2) relevant data types
    unsigned int numCarsProcessed = 0;
    
    struct Car                             //4) nested class
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        //2) relevant data types
    };
    
    void washAndWaxCar( Car car );         //3) member function with a user-defined type as the parameter.  The user-defined type parameter happens to be the nested class.
    
    Car myCar;  //5) a member variable whose type is a UDT.
};


/*
 1)
 */
struct guitarChords
{
    int numStrings = 12;
    double getNumFrets = 2.0;
    unsigned int lengthOfNeck = 0;
    
    struct guitar
    {
        bool isElectricGuitar = true;
        float inTune = 440.0f;
    };
    void tuneAndPlayGuitar(guitar Guitar);
    guitar bassGuitar;
};
/*
 2)
 */
struct Component
{
    int isVoltage = 5000;
    double powerOut = 0.2;
    unsigned int amountOfPower = 0;

    struct DCUnit
    {
        bool connectsToComputer = true;
        float hasCable = 3.0f;
    };

    void plugIn(DCUnit dcUnit);
    DCUnit speaker;
};
/*
 3)
 */
class neuroScience
{
    int brainScience = 860000000;
    double truthTeller = 10.10;
    unsigned int dreamState = 0;

    struct neuroPath
    {
        bool isSmart = false;
        float genericThought = 500.0f;
    };
    void sleep(neuroPath NeuroPath);
    neuroPath wormHole;
};
/*
 4)
 */
class dogBreed
{
    int pitBull = 1;
    int terrier = 5;
    double mixedBreed = 5.0;
    float bigDog = 1.7f;
    unsigned int age = 0;

    struct dog
    {
        bool isApuppy = false;
        float litter = 100.0f;
    };
    void walkDog(dog Dog);
    dog Napolean;
};
/*
 5)
 */
struct hammer
{
    int slam = 333;
    double swing = 2.0;
    float steel = 13.3f;
    float sledge = 77.0f;
    unsigned int force = 0;

    struct hammerOn
    {
        bool isAshredder = true;
        float master = 0.0f;
        void missedWork();
        void noWerk();
    };
    void always(hammerOn HammerOn);
    hammerOn Wall;

    struct toolType
    {
        int nails = 10;
        double screws = 2.2;
        float electricHammer = 440.0f;
    };

    void notEnoughTools(toolType ToolType);
    toolType metal;
};
/*
 6)
 */
struct treeComponent
{
    int value = 5000000;
    int tree = 10000000;
    float purposeFunction = 808.1f;
    double process = 4.2;

    struct configure
    {
        int classWithin  = 1;
        bool treeIsBuilt = false;
        float submit = 14.0f;

    };
    void comp(treeComponent TreeComponent);
    configure valueTree;
};

/*
 7)
 */
class mainApp
{
    void localNetwork();
    void blackBox();

    bool appIsRunning;
    bool menuWorks = true;

    class DBG
    {
        char tp = 'D';
        char dp = 'B';
        char cp = 'G';
        float generate(int localNetwork = 0.0, double blackBox = 15.45);

    };
    unsigned int webBased = true;
    int manuals = 3;

    DBG main;

    private:
    void crashing(mainApp MainApp);
};
/*
 8)
 */
class newUnderstanding
{
    void building();

    char time = 'N';
    char to = 'E';
    char build = 'W';

    int x = 25;
    int y = 25;

    private:

    class TestFunctions
    {
        float multiply(int x = 25, int y = 25);
        float add(char time, char to, char build);
        bool compilesCorrect = true;
    };
    void overloading(newUnderstanding NewUnderstanding);
};
/*
 9)
 */
struct newPlug
{
    newPlug();
    ~newPlug();
    void run();

    bool plugIn = true;
    char generic;
    float purchase(int number = 1, double integer = 2.0);

    struct basicDesign
    {
        bool hasAdapter = false;
        void hazard(newPlug NewPlug);
    };
    void safteyUse(basicDesign BasicDesign);
    basicDesign socket;
};
/*
 10)
 */
struct didItBreak
{
    bool brokenCompiler = true;
    float unknown(int didNot = 1, double did = 200.2);
    unsigned int trying = 10;

    class learn
    {
        bool isLearning = true;
        float crazyStuff(double check = 1.0, double status = 500.1, double wonder = 30.3, int val = 44, int UDT = 77);
    };
    void checkStatus(didItBreak DidItBreak);
    learn newThings;
};



#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
