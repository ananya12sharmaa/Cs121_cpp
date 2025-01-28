# Cs121_cpp
imports certain standard libraries
name space pollution

tedious=rewriting the classes of a library in the same 
using name space standard. 
explicitly call out.
cout=counsel output
"<<" data flowing in and out. << flow to the output
">>" directly data in a string
dont have to specify what data is coming in unlike c
stack stuff with strings and userinput, strings
do complex output easy
">>" endl is end line.
unlike python which itsle puts us to a next line.
&a means refernce to x.
depending upon the language, we need to realise the differnce between pass by value and pass by reference
in C++, passing the value doesnt change the original value. passing by reference does.!
python compares 2 variables a==b, do they have the same value? 
in c++ the meaning is if they are pointing to same thing.

overloaded for stringa, = operator !we will prgram our owns in future!
different variables, same contant
documentation is horrific of random in c++
c std io , use random


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Jan 28, 2025 Wednesday
printLane()
given a horse number and the array of horses
loop from zero to TRACK_LENGTH
  if the current loop index is equal to horsevalue
    print the horse id
  otherwise
    print a
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
advance()
given a horse number and the array of horses
roll a 0 or 1 value, put it in coin
add coin to the horse;s position value in the array:

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
main()
make an array 5 0 values, call it horses
set keepGoing true

while keepgoing:
-run through each horse in array:
--advance that horse
--print that horse's lane
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
isWinner():
-result=false
given a hors eno. and the array of horse
if the current horses value is equal to the TRACK_LENGTH
-result=true
-print "Horse{id}won!"
return result
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

