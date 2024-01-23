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


1. SkippingRope
   - action: Swings rhythmically
     - `skippingRope.swingRhythmically()`
   - action: Slaps the ground
     - `skippingRope.slapsGround()`
   - action: Creates a loop in the air
     - `skippingRope.createLoop()`

2. BuzzingBee
   - action: Collects nectar from flowers
     - `buzzingBee.collectsNectar()`
   - action: Flies from blossom to blossom
     - `buzzingBee.fliesToBlossom()`
   - action: Buzzes around a hive
     - `buzzingBee.buzzesAroundHive()`

3. RunningShoe
   - action: Pounds the pavement
     - `runningShoe.poundsPavement()`
   - action: Flexes with each step
     - `runningShoe.flexesWithStep()`
   - action: Treads lightly on the trail
     - `runningShoe.treadsLightly()`

4. QuackingDuck
   - action: Dips into the pond
     - `quackingDuck.dipsIntoPond()`
   - action: Waddles along the bank
     - `quackingDuck.waddlesAlongBank()`
   - action: Flaps its wings
     - `quackingDuck.flapsWings()`

5. RollingBall
   - action: Moves smoothly across the floor
     - `rollingBall.moveSmoothly()`
   - action: Bounces off obstacles
     - `rollingBall.bouncesOffObstacles()`
   - action: Spins in place
     - `rollingBall.spinInPlace()`

6. WavingFlag
   - action: Flutters in the breeze
     - `wavingFlag.fluttersInBreeze()`
   - action: Ripples in the wind
     - `wavingFlag.ripplesInWind()`
   - action: Stands tall on the pole
     - `wavingFlag.standsTallOnPole()`

7. PurringCat
   - action: Curls up contentedly
     - `purringCat.curlsUpContentedly()`
   - action: Nuzzles against a person
     - `purringCat.nuzzlesAgainstPerson()`
   - action: Grooms its fur
     - `purringCat.groomsFur()`

8. JugglingBall
   - action: Soars through the air
     - `jugglingBall.soarsThroughAir()`
   - action: Bounces on the ground
     - `jugglingBall.bouncesOnGround()`
   - action: Spins between hands
     - `jugglingBall.spinsBetweenHands()`

9. HoppingFrog
   - action: Leaps from lily pad to lily pad
     - `hoppingFrog.leapsFromLilyPad()`
   - action: Croaks in the marsh
     - `hoppingFrog.croaksInMarsh()`
   - action: Snaps at passing insects
     - `hoppingFrog.snapsAtInsects()`

10. ChirpingBird
    - action: Sings melodiously in the morning
      - `chirpingBird.singMelodiously()`
    - action: Flies from branch to branch
      - `chirpingBird.flyBetweenBranches()`
    - action: Builds a nest with twigs
      - `chirpingBird.buildsNest()`



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
