1) Convert decimal to hex?
   while(decNum != 0)
   {
     reminder = (decNum % 16);
     if(reminder < 10)
     {
       arrcHexNum[i] = reminder + 48;
     }
     else
     {
       arrcHexNum[i] = reminder + 65;
     }
     i++;
     decNum /= 16;
   }

    for(j = i-1; j >= 0; j--)
    {
      printf("%c", arrcHexNum[j]);
    }
  
2) Convert decimal to octal?
   while(decNum != 0)
   {
     Octal += (decNum % 8) * i;
     i *= 10;
     decNum /= 8;
   }

3) Convert decimal to binary?
   while(decNum != 0)
   {
      binary += (decNum % 2) * i;
      i *= 10;
      decNum /= 2;
   }
  
4) How to reverse single linked list?
   while(head != NULL)
        {
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;   
        }
        
        head = prev;

5) How to find the middle node of the linked list?
   SlowNode = head;
   FastNode = head;
   
   while((FastNode- != NULL) && (FastNode->next != NULL))
   {
      SlowNode = SlowNode->next;
      FastNode = FastNode->next->next;
   }
   
