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
   
6) Detect Loop in linked list?
   
   SlowNode = head;
   FastNode = head;
   
   while((FastNode- != NULL) && (FastNode->next != NULL))
   {
      SlowNode = SlowNode->next;
      FastNode = FastNode->next->next;
      
      if(slowNode == FastNode)
      {
         /*Cycle Detected*/
         break;
      }
   }
   
   FastNode = head;
   iLen = 1;
   while(slowNode != FastNode)
   {
      SlowNode = SlowNode->next;
      FastNode = FastNode->next;
      iLen++;
   }

7) Find Nth node from end of the list?
   NthNode = head;
   
  while(head != NULL)
  {
     if(count < N)
     {
        count++;
     }
     else
     {
        NthNode = NthNode->next;
     }
     head = head->next;
  }

8) Convert string to integer?
   while(a[i] != NULL)
   {
      num += ((a[i] - 48) * Place);
      place *= 10;
   }

9) Implement circular queue using array?
   
   void enqueue()
   {
      if((front == -1) && (rear == 1))
      {
         front = 0;
         rear = 0;
         arr[rear] = data;
      }
      else if(((rear + 1) % MAX) == front)
      {
         Queue full;
      }
      else
      {
         rear = ((rear + 1) % MAX);
         arr[rear] = data;         
      }
   }

   void dequeue()
   {
      if((front == -1) && (rear == -1))
      {
         queue empty;
      }
      else
      {
         read = arr[front];
         
         if(front == rear)
         {
            front = -1;
            rear = -1;
         }
         else
         {
            front = ((front+1) % MAX);
         }
      }
   }

10) Implement circular queue using linked list?
   
   void enqueue()
   {
      if(q->front == NULL)
      {
         q->front = temp;
      }
      else
      {
         q->rear->link = temp;       
      }
   
      q->rear = temp;
      q->rear->link = q->front;
   }

   void dequeue()
   {
      if(q->front == NULL)
      {
            return queue is empty
      }
      else
      {
           read q->front->data;
            if(q->front == q->rear)
            {
               q->front = NULL;
               q->rear = NULL;
            }
            else
            {
               q->front = q->front->link;
               q->rear->link = q->front;
            }
         
           if()
      }
   }
   
