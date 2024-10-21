#ifndef SENECA_DMA_H
namespace seneca {
   struct Contact{
      char
         m_name[21],
         m_lastname[31];
      long long
         m_phoneNumber;
   };

   /// <summary>
   /// Receives an unknown number of double numbers from the console and prints them in reverse order.
   void reverse();
   /// </summary>


   /// <summary>
   /// Creates a Contact compound type dynamically and gets its content from the console, then returns its address.
   /// </summary>
   Contact* getContact();
   /// <returns>Contact*: The address of the dynamically allocated Contact</returns>


   /// <summary>
   /// Prints a Contact in a line
   /// </summary>
   void display(Contact& contact);
   /// <param name="C">const reference of the Contact to be printed</param>
 

   /// <summary>
   /// Receives the address of a dynamically allocated Contact and removes it from memory.
   /// </summary>
   void deallocate(Contact* contact);
   /// <param name="C">Contact*: The address of the Contact to be deallocated</param>
 

   /// <summary>
   /// Empties the content of the Contact received by reference by setting the name and last name to empty strings and the phone number to zero.
   /// </summary>
   void setEmpty(Contact& contact);
   /// <param name="C">Contact&: Reference of a Contact to be emptied</param>


}
#endif // !SENECA_DMA_H

