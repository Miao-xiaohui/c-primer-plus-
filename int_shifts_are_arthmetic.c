int int_shifts_are_arithmetic()
{ int flag=~0;
  return !((flag>>sizeof(int)-1)^~0);//the ideas is tomake sure code could run fluently in each computer 
                                     //so sizeof and ~ are used to do this
				     //after the Check whether the operation result is the same as the original data after the displacement operation
}
