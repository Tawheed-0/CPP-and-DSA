// You can throw anything e.g int , float , string  and also your own classes.

// writing throw after function prototype is optional but is good for program reading.
// e.g
// int division (int a,int b) throw(int)       //throw(int ) is optional
// {
//     -
//     -
//     -
// }

// we can have more than one catch blocks for 1 try block.
// e.g
// try{
//     -
//     -
// }
// catch(int e){
//     -
//     -
//     -
// }
// catch(float e){
//     -
//     -
//     -
// }
// catch(...){
//     -
//     -
//     -
// }


// -> The last block is known as catch all block it is used if we don't know the datatype which is going to be throwen .(...) it is known as elipse . Having multiple catch blocks is better rather than having this catch all block bcz it can give different messages to the user according to the type of error but by using catch all block we are able to give single msg to every type of error.

// -> Catch All block must be the last  block otherwise other catch blocks after  it will get not-reachable bcz it will catch every type of data.

// ->  we can also have try blocks inside try blocks i.e nested try blocks.

// -> Also one of the important point to remember if the catch blocks are of type class and the classes are in inheritance than the child class catch block must be written first. That is very important .