#if false
/*
 PFM::C++ For Musicians Task 
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


    // 1)
    // Noun: skippingRope
    // action 1: Swings rhythmically
    skippingRope.swingRhythmically();

    // action 2: Slaps the ground
    skippingRope.slapsGround();

    // action 3: Creates a loop in the air
    skippingRope.createLoop();

    // 2)
    // Noun: buzzingBee
    // action 1: Collects nectar from flowers
    buzzingBee.collectsNectar();

    // action 2: Flies from blossom to blossom
    buzzingBee.fliesToBlossom();

    // action 3: Buzzes around a hive
    buzzingBee.buzzesAroundHive();

    // 3)
    // Noun: runningShoe
    // action 1: Pounds the pavement
    runningShoe.poundsPavement();

    // action 2: Flexes with each step
    runningShoe.flexesWithStep();

    // action 3: Treads lightly on the trail
    runningShoe.treadsLightly();

    // 4)
    // Noun: quackingDuck
    // action 1: Dips into the pond
    quackingDuck.dipsIntoPond();

    // action 2: Waddles along the bank
    quackingDuck.waddlesAlongBank();

    // action 3: Flaps its wings
    quackingDuck.flapsWings();

    // 5)
    // Noun: rollingBall
    // action 1: Moves smoothly across the floor
    rollingBall.moveSmoothly();

    // action 2: Bounces off obstacles
    rollingBall.bouncesOffObstacles();

    // action 3: Spins in place
    rollingBall.spinInPlace();

    // 6)
    // Noun: wavingFlag
    // action 1: Flutters in the breeze
    wavingFlag.fluttersInBreeze();

    // action 2: Ripples in the wind
    wavingFlag.ripplesInWind();

    // action 3: Stands tall on the pole
    wavingFlag.standsTallOnPole();

    // 7)
    // Noun: purringCat
    // action 1: Curls up contentedly
    purringCat.curlsUpContentedly();

    // action 2: Nuzzles against a person
    purringCat.nuzzlesAgainstPerson();

    // action 3: Grooms its fur
    purringCat.groomsFur();

    // 8)
    // Noun: Basketball
    // Action 1: Soars towards the hoop
    basketball.soarsTowardsTheHoop();

    // Action 2: Bounces off the backboard
    basketball.bouncesOffTheBackboard();

    // Action 3: Spins mid-air from a dunk
    basketball.spinsMidAirFromADunk();


    // 9)
    // Noun: hoppingFrog
    // action 1: Leaps from lily pad to lily pad
    hoppingFrog.leapsFromLilyPad();

    // action 2: Croaks in the marsh
    hoppingFrog.croaksInMarsh();

    // action 3: Snaps at passing insects
    hoppingFrog.snapsAtInsects();

    // 10)
    // Noun: chirpingBird
    // action 1: Sings melodiously in the morning
    chirpingBird.singMelodiously();

    // action 2: Flies from branch to branch
    chirpingBird.flyBetweenBranches();

    // action 3: Builds a nest with twigs
    chirpingBird.buildsNest();




#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
