/*
 Chapter 2 - Part 8 - continuation of CH2_P06, after PR and Merge
 Constructors tasks

 On a new branch:

 1) Add a constructor for each User-Defined-Type.
 
 2) Instantiate a few of your user-defined types in the main function at the bottom of that file, and call some of those member functions.
 
 3) make them print out something interesting via std::cout
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Wait for my code review.
 
 example:
 */

#include <iostream>
namespace Example {
struct UDT  // my user defined type
{
    int a; //a member variable
    UDT() { a = 0; }             //3) the constructor
    void printThing()            //1) the member function
    {
        std::cout << "UDT::printThing() " << a << std::endl;  //5) printing out something interesting
    }
};

int main()
{
    UDT foo;              //4) instantiating a UDT in main()
    foo.printThing();     //4) calling a member function of the instance that was instantiated.
    
    return 0;
}
}
 
struct Foot
{
    int leftFootLength = 9;
    int rightFootLength = 9;
    int speed = 2;
    int distance;
    int move;
    int howFast();

    void stepForward(int setSpeed);
    void stepSize(int setSpeed); 
};

void Foot::stepForward(int setSpeed)
{
    move = leftFootLength * setSpeed + speed;
}

void Foot::stepSize(int setSpeed)
{
    distance = rightFootLength * setSpeed + speed;
}

int Foot::howFast()
{
    return move + distance;
}

struct Person
{
    int leg();
    int age;
    int height;
    float weight;
    float IQ;
    unsigned int meyersBriggsScore;

    Foot left;
    Foot right;

    void run(int setSpeed, bool startWithLeftFoot);

    int pathTraveled;
};

void Person::run(int setSpeed, bool startWithLeftFoot)
{
    if(startWithLeftFoot == true)
    {
        left.stepForward(setSpeed);
    }
    else
    {
        right.stepForward(setSpeed);
    }

    pathTraveled += left.move + right.move;
}

int Person::leg()
{
    return pathTraveled;
}
 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Wait for my code review.
 */


/*
 1)
 */
struct GuitarChords
{
    int tone;
    int numStrings = 12;
    double getNumFrets = 2.0;
    unsigned int lengthOfNeck;
    
    struct Guitar
    {
        int steelNeck;
        float inTune { 440.0f };
        float tuneKey { 4.0f };
        bool isElectricGuitar = true;
        
        Guitar() { steelNeck = 0; }
        void printGuitar() 
        {
            std::cout << "Guitar " << "Key: " << steelNeck + tuneKey << "  " << "Hz: " << inTune << std::endl;
        }
    };

    GuitarChords() { tone = 0; }
    void printGuitarChords()
    {
        std::cout << "Guitar " << tone + numStrings << " String Ibanez" << std::endl;
    }

    void tuneAndPlayGuitar(int steelNeck, bool isElectricGuitar, float inTune, float tuneKey);

    int ready;
    int play();
};

void GuitarChords::tuneAndPlayGuitar(int steelNeck, bool isElectricGuitar, float inTune, float tuneKey)
{
    if(isElectricGuitar)
    {
        lengthOfNeck *= numStrings * tone + ready * getNumFrets * 0.5;
    }
    else
    {
        steelNeck *= lengthOfNeck + inTune * tuneKey + 2;
    }
}

int GuitarChords::play()
{
    return {};
}
 
/*
 2)
 */
struct Component
{
    int current;
    int isVoltage = 5000;
    double powerOut = 0.2;
    double powerIn = 0.4;
    unsigned int amountOfPower = 0;

    struct DCUnit
    {
        int box;
        float hasCable { 3.0f };
        bool connectsToComputer = true;
        
        DCUnit() { box = 0; }
        void printDCUnit()
        {
            std::cout << "DC Unit " << box + hasCable << " USB" << std::endl;
        }
    };
    
    Component() { current = 0; }
    void printComponent()
    {
        std::cout << "Component " << current + isVoltage << " watts"<< std::endl;
    }

    void plugIn( bool connectsToComputer, float hasCable);

    int shielded;
    int unshielded();
};

void Component::plugIn(bool connectsToComputer, float hasCable)
{
    if(connectsToComputer)
    {
        amountOfPower *= isVoltage * powerOut / powerIn + 100 * current;
    }
    else
    {
        hasCable *= amountOfPower / 2;
    }

    shielded *= hasCable + isVoltage * 4;
}

int Component::unshielded()
{
    return {};
}
/*
 3)
 */
struct NeuroScience
{
    int neurons;
    int brainScience = 860000000;
    double truthTeller = 10.10;
    unsigned int dreamState = 0;

    struct NeuroPath
    {
        int neuroPlasticity;
        float genericThought { 500.0f };
        bool isSmart = false;
        
        NeuroPath() { neuroPlasticity = 0; }
        void printNeuroPath()
        {
            std::cout << "Neuro Path " << neuroPlasticity + genericThought << "% Cognitive Function" << std::endl;
        }
    };
    
    NeuroScience() { neurons = 0; }
    void printNeuroScience()
    {
        std::cout << "Neuro Science " << neurons + brainScience << " Neurons" << std::endl;
    }

    void sleep(bool isSmart, float genericThought);

    int synapse;
    int cellCount();

};

void NeuroScience::sleep(bool isSmart, float genericThought)
{
    if(isSmart)
    {
        dreamState *= brainScience * truthTeller + neurons;
    }
    else
    {
        genericThought *= 100;
    }

    synapse *= dreamState * genericThought;
}

int NeuroScience::cellCount()
{
    return {};
}
/*
 4)
 */
struct DogBreed
{
    int pupper;
    int pitBull = 1;
    int terrier = 5;
    unsigned int age = 0;
    double mixedBreed = 5.0;
    float bigDog { 1.7f };

    struct Dog
    {
        int manyPuppies;
        float litter { 100.0f };
        bool isApuppy = false;
        
        Dog() { manyPuppies = 0; }
        void printDog()
        {
            std::cout << "Dog " << manyPuppies + litter << "% Chihuahua" << std::endl;
        }    
    };
    
    DogBreed() { pupper = 0; }
    void printDogBreed()
    {
        std::cout << "Dog Breed " << pupper + pitBull * mixedBreed << " puppies" << std::endl;
    }

    void walkDog( bool isApuppy, float litter );

    int barks();
    int woof;
};

void DogBreed::walkDog(bool isApuppy, float litter)
{
    if(isApuppy)
    {
        age *= pitBull + mixedBreed * pupper + woof;
    }
    else
    {
        age *= terrier + bigDog * litter;
    }
}

int DogBreed::barks()
{
    return {};
}
/*
 5)
 */
struct Hammer
{
    int wall; 
    int slam = 333;
    double swing = 2.0;
    double hit = 2.6;
    float steel { 13.3f };
    float sledge { 77.0f };
    unsigned int force = 0;
    unsigned int heavyDuty;

    struct HammerOn
    {
        int ham;
        float master { 0.0f };
        bool isAshredder = true;
        
        HammerOn() { ham = 0; }             //3) the constructor
        void printHammerOn()            //1) the member function
        {
            std::cout << "Hammer On " << ham + 100 << "% Man O War" << std::endl;      //5) printing out something interesting
        }    
    };
    
    Hammer() { heavyDuty = 0; }             //3) the constructor
    void printHammer()            //1) the member function
    {
        std::cout << "Hammmer " << heavyDuty + sledge * steel / slam << " Hz of Thunder"<< std::endl;  //5) printing out something interesting
    }

    void always( bool isAshredder, float master );

    int build();

    struct ToolType
    {
        int blocks;
        int nails = 10;
        double screws = 2.2;
        double staples = 1.0;
        float electricHammer { 440.0f };
        
        ToolType() { blocks = 0; }
        void printToolType()
        {
            std::cout << "Tool Type " << blocks + nails << " nails" << std::endl; 
        }
        
        int bricks;
    };   

    void notEnoughTools(int blocks, int nails, double staples, double screws, float electricHammer);

    int breakIt();
};

void Hammer::always(bool isAshredder, float master)
{
    if(isAshredder)
    {
        force *= swing + hit * slam + wall;
    }
    else
    {
        force *= steel + sledge * slam + wall;
    }

    master *= force * heavyDuty + 1;
}

int Hammer::build()
{
    return {};
}

void Hammer::notEnoughTools(int blocks, int nails, double staples, double screws, float electricHammer)
{
    if(bool hammerHits = true)
    {
        blocks *= nails + screws * staples;
    }
    else
    {
        blocks *= nails + electricHammer;
    }
}

int Hammer::breakIt()
{
    return {};
}
/*
 6)
 */
struct TreeComponent
{
    int test;
    int value = 5000000;
    int tree = 10000000;
    float purposeFunction { 808.1f };
    double process = 4.2;

    struct Configure
    {
        int nestTest;
        int classWithin  = 1;
        float submit { 14.0f };
        bool treeIsBuilt = false;
        
        Configure() { nestTest = 0; }             //3) the constructor
        void printConfigure()            //1) the member function
        {
            std::cout << "Configure " << nestTest + classWithin * submit << " arrays" << std::endl;  //5) printing out something interesting
        }    
        
    };
    
    TreeComponent() { test = 0; }
    void printTreeComponent()
    {
        std::cout << "Tree Component " << test + value * tree << std::endl;
    }    

    void structure( int nestTest, int classWithin, bool treeIsBuilt,  float submit);

    int valueTree;
    int internally;
    int setUp();
};

void TreeComponent::structure( int nestTest, int classWithin, bool treeIsBuilt,  float submit)
{
    if(treeIsBuilt)
    {
        valueTree *= value + purposeFunction;
    }
    else
    {
        valueTree *= tree + process;
    }

    test *= submit * nestTest + classWithin * internally;
}

int TreeComponent::setUp()
{
    return {};
}

/*
 7)
 */
struct MainApp
{
    float blackBox { 3.0f };
    float localNetwork { 2.0f };
    unsigned int webBased = true;
    int manuals = 3;
    int byteFill;
    int reTry;

    struct DBG
    {
        int d;
        float generate(int localWeb = 0.0, double staticMem = 15.45);
        bool menuWorks = true;
        
        DBG() { d = 0; }
        void printDBG()
        {
            std::cout << "DBG " << d + 1 << " error" << std::endl;
        }
        
    };
    
    MainApp() { reTry = 0; }
    void printMainApp()
    {
        std::cout << "Main App " << reTry + manuals * blackBox * localNetwork << " MB" << std::endl;
    }    

    void crashing(bool menuWorks, float generate);

    int newest();
};

void MainApp::crashing(bool menuWorks, float generate)
{
    if(menuWorks)
    {
        reTry *= blackBox + 6;
    }
    else
    {
        reTry *= localNetwork + 8;
    }

    webBased *= byteFill + manuals * generate;
}

int MainApp::newest()
{
    return {};
}
/*
 8)
 */
struct NewUnderstanding
{
    int x = 25;
    int y = 25;
    int w;
    int z();
    
    char time = 'N';
    char to = 'E';
    char build = 'W';
    char the = '~';
    char block = '!';

    struct TestFunctions
    {
        int t;
        float multiply(int x = 25, int y = 25);
        float add(char time, char to, char build, char the, char block);
        bool compilesCorrect = true;
        
        TestFunctions() { t = 0; }
        void printTestFunctions()
        {
            std::cout << "Test Functions " << t << "% accuracy" << std::endl;
        }    
    };
    
    NewUnderstanding() { w = 0; }
    void printNewUnderstanding()
    {
        std::cout << "New Understanding " << w + x * y << "%" << std::endl;
    }

    void overloading(float multiply, float add, bool compilesCorrect);
    
};

void NewUnderstanding::overloading(float multiply, float add, bool compilesCorrect)
{
    if(compilesCorrect)
    {
        x *= multiply + 1;
    }
    else
    {
        y *= add + 2;
    }
}

int NewUnderstanding::z()
{
    return {};
}
/*
 9)
 */
struct NewPlug
{
    int toolUse;
    int getTools = 5;
    int generics;
    float purchase(int number = 1, double integer = 2.0);

    struct BasicDesign
    { 
        int hazard;
        int b;
        bool hasAdapter = false;
        
        BasicDesign() { b = 0; }
        void printBasicDesign()
        {
            std::cout << "Basic Design " << b + 2 << " sockets" << std::endl;
        }       
    };
    
    NewPlug() { toolUse = 0; }
    void printNewPlug()
    {
        std::cout << "New Plug " << toolUse + getTools << " watts" << std::endl;
    }

    void safteyUse(bool hasAdapter, int hazard, float purchase);
    int workFlow();
};

void NewPlug::safteyUse(bool hasAdapter, int hazard, float purchase)
{
    if(hasAdapter)
    {
        hazard *= getTools * purchase + 1;
    }
    else
    {
        hazard *= getTools * generics;
    }

    toolUse *= getTools * generics * purchase + 3;
}

int NewPlug::workFlow()
{
    return {};
}
/*
 10)
 */
struct DidItBreak
{
    float unknown(int didNot = 1, double did = 200.2);
    unsigned int trying = 10;
    int makeHappen;
    int doStuff;
    int needThings();

    struct Learn
    {
        int l;
        bool brokenCompiler = true;
        bool isLearning = true;
        float crazyStuff(double check = 1.0, double status = 500.1, double wonder = 30.3, int val = 44, int UDT = 77);
        
        Learn() { l = 0; }
        void printLearn()
        {
            std::cout << "Learn " << l + 10 << " new things" << std::endl;
        }        
        
        short knowledge;
    };
    
    DidItBreak() { makeHappen = 0; }
    void printDidItBreak()
    {
        std::cout << "Did It Break " << makeHappen + 100 << "% did" << std::endl;
    }    

    void doubleFunction(bool brokenCompiler, float unknown);
    void checkStatus(bool isLearning, float crazyStuff);
};

void DidItBreak::doubleFunction(bool brokenCompiler, float unknown)
{
    if(brokenCompiler)
    {
        makeHappen *= unknown + 1;
    }
    else
    {
        trying *= unknown + 2;
    }
}

void DidItBreak::checkStatus(bool isLearning, float crazyStuff)
{
    if(isLearning)
    {
        doStuff *= crazyStuff + 1;
    }
    else
    {
        doStuff *= crazyStuff + 2;
    }
}

int DidItBreak::needThings()
{
    return {};
}



#include <iostream>
int main()
{
    std::cout << "Print:" << std::endl;
    
    GuitarChords guitarChords;
    guitarChords.printGuitarChords();
    
    GuitarChords::Guitar guitar;
    guitar.printGuitar();
    
    Component component;
    component.printComponent();
    
    Component::DCUnit dcunit;
    dcunit.printDCUnit();
    
    NeuroScience neuroScience;
    neuroScience.printNeuroScience();
    
    NeuroScience::NeuroPath neuroPath;
    neuroPath.printNeuroPath();
    
    DogBreed dogBreed;
    dogBreed.printDogBreed();
    
    DogBreed::Dog dog;
    dog.printDog();
    
    Hammer hammer;
    hammer.printHammer();
    
    Hammer::HammerOn hammerOn;
    hammerOn.printHammerOn();
    
    Hammer::ToolType toolType;
    toolType.printToolType();
    
    TreeComponent treeComponent;
    treeComponent.printTreeComponent();
    
    TreeComponent::Configure configure;
    configure.printConfigure();
    
    MainApp mainApp;
    mainApp.printMainApp();
    
    MainApp::DBG dbg;
    dbg.printDBG();
    
    NewUnderstanding newUnderstanding;
    newUnderstanding.printNewUnderstanding();
    
    NewUnderstanding::TestFunctions testFunctions;
    testFunctions.printTestFunctions();
    
    NewPlug newPlug;
    newPlug.printNewPlug();
    
    NewPlug::BasicDesign basicDesign;
    basicDesign.printBasicDesign();
    
    DidItBreak didItBreak;
    didItBreak.printDidItBreak();
    
    DidItBreak::Learn learn;
    learn.printLearn();
}
