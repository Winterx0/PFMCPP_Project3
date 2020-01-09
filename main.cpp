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
struct GuitarChords
{
    int numStrings = 12;
    double getNumFrets = 2.0;
    unsigned int lengthOfNeck = 0;
    
    struct Guitar
    {
        bool isElectricGuitar = true;
        float inTune = 440.0f;
    }; FIXME see style guide line spacing
    void tuneAndPlayGuitar(Guitar guitar);
    Guitar bassGuitar;
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
class NeuroScience FIXME don't use 'class' yet.  use 'struct'
{
    int brainScience = 860000000;
    double truthTeller = 10.10;
    unsigned int dreamState = 0;

    struct NeuroPath
    {
        bool isSmart = false;
        float genericThought = 500.0f;
    }; FIXME see style guide line spacing
    void sleep(NeuroPath neuroPath);
    NeuroPath wormHole;
};
/*
 4)
 */
class DogBreed FIXME don't use 'class' yet.  use 'struct'
{
    int pitBull = 1;
    int terrier = 5;
    double mixedBreed = 5.0;
    float bigDog = 1.7f;
    unsigned int age = 0;

    struct Dog
    {
        bool isApuppy = false;
        float litter = 100.0f;
    }; FIXME see style guide line spacing
    void walkDog(Dog dog);
    Dog Napolean;
};
/*
 5)
 */
struct Hammer
{
    int slam = 333;
    double swing = 2.0;
    float steel = 13.3f;
    float sledge = 77.0f;
    unsigned int force = 0;

    struct HammerOn
    {
        bool isAshredder = true;
        float master = 0.0f;
        void missedWork();
        void noWerk();
    }; FIXME see style guide line spacing
    void always(HammerOn hammerOn);
    HammerOn Wall;

    struct ToolType
    {
        int nails = 10;
        double screws = 2.2;
        float electricHammer = 440.0f;
    };

    void notEnoughTools(ToolType toolType);
    ToolType metal;
};
/*
 6)
 */
struct TreeComponent
{
    int value = 5000000;
    int tree = 10000000;
    float purposeFunction = 808.1f;
    double process = 4.2;

    struct Configure
    {
        int classWithin  = 1;
        bool treeIsBuilt = false;
        float submit = 14.0f;
		FIXME remove blank lines
    }; FIXME see style guide line spacing
    void comp(TreeComponent treeComponent);
    Configure valueTree;
};

/*
 7)
 */
class MainApp FIXME don't use 'class' yet.  use 'struct'
{
    void localNetwork();
    void blackBox();

    bool appIsRunning;
    bool menuWorks = true;

    class DBG FIXME don't use 'class' yet.  use 'struct'
    {
        char tp = 'D';
        char dp = 'B';
        char cp = 'G';
        float generate(int localNetwork = 0.0, double blackBox = 15.45);
FIXME remove blank lines
    }; FIXME see style guide line spacing
    unsigned int webBased = true;
    int manuals = 3;

    DBG main;

    private: FIXME no private members yet
    void crashing(MainApp mainApp);
};
/*
 8)
 */
class NewUnderstanding FIXME don't use 'class' yet.  use 'struct'
{
    void building();

    char time = 'N';
    char to = 'E';
    char build = 'W';

    int x = 25;
    int y = 25;

    private: FIXME no private members yet

    class TestFunctions FIXME don't use 'class' yet.  use 'struct'
    {
        float multiply(int x = 25, int y = 25);
        float add(char time, char to, char build);
        bool compilesCorrect = true;
    }; FIXME see style guide line spacing
    void overloading(NewUnderstanding newUnderstanding);
};
/*
 9)
 */
struct NewPlug
{
    NewPlug();
    ~NewPlug();
    void run();

    bool plugIn = true;
    char generic;
    float purchase(int number = 1, double integer = 2.0);

    struct BasicDesign
    {
        bool hasAdapter = false;
        void hazard(NewPlug newPlug);
    }; FIXME see style guide line spacing
    void safteyUse(BasicDesign basicDesign);
    BasicDesign socket;
};
/*
 10)
 */
struct DidItBreak
{
    bool brokenCompiler = true;
    float unknown(int didNot = 1, double did = 200.2);
    unsigned int trying = 10;

    class Learn FIXME don't use 'class' yet.  use 'struct'
    {
        bool isLearning = true;
        float crazyStuff(double check = 1.0, double status = 500.1, double wonder = 30.3, int val = 44, int UDT = 77);
    }; FIXME see style guide line spacing
    void checkStatus(DidItBreak didItBreak);
    Learn newThings;
};



#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
