/**
 *  8 bit is 1 byte and vice versa
 *
 *  Understanding bits
 *
 *  bits are just number that is either 1 or 0
 *
 *  so range defines that these number occupy this amount of bits
 *
 *
 * #####################################################
 *  Signed
 * #####################################################
 *
 *  signed 8 bit contain one sign bit and 7 magnitude i,e value bit
 *
 *  range: -128 to 127
 *
 *  why 127 not 128 because it has -1 to stop the range
 *
 *  -1 is called sentinel value # refer types.c ;50 line
 *
 *  #####################################################
 *
 *
 *
 *
 * #######################################################
 *  Unsigned
 * #######################################################
 *
 *  unsigned 8 bit is non negative and positive large value
 *
 *  why this contain large value
 *  due to the compiler understand the value is neither positive nor negative
 *
 *  range: -255 to 255
 *
 * #######################################################
 *
 *  
 *  truth here is 
 *
 *  int can also store the char 'A'
 *  and char also store the char 'A'
 *
 *  mostly assigning to char
 *  because
 *
 *  ######################################################
 *  Char
 *  ######################################################
 *
 *  char is just the storage that contain 8 bit value range
 *
 *  signed bit contain value from -128 to 127
 *  unsigned bit contain value from 0 to 255 // this is usually all ascii value are inside this limit
 *
 *  so i can store number range from -128 to 127 in signed Char
 *  and number from 0 to 255 in unsigned char
 *
 *  also im not specifying the default range for char because it depends upon complier some may use default as signed || unsiged
 *
 *  :)
 *  
 **/
