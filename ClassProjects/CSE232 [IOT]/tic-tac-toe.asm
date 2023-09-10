.MODEL SMALL
.STACK 100H
.DATA      

;initial values
A1 DB '-'
A2 DB '-'
A3 DB '-'
B1 DB '-'
B2 DB '-'
B3 DB '-'
C1 DB '-'
C2 DB '-'
C3 DB '-'   

;printing 
SPACES DB '          $'
SDS DB 32,179,32,'$'      ;prints ' | ' 
NEWLINE DB 13,10,'$'  
NEWLINES DB 13,10,10,10,10,10,'$'   ;five new lines
DASHES DB 13,10,'          -----------         |          -----------$'
COORDINATES DB 13,10,'          TIC-TAC-TOE         |          COORDINATES$'   
CORD0 DB 13,10,'                              |                     $'   
CORD1 DB '          |           1 | 2 | 3 $'
CORD2 DB '          |           4 | 5 | 6 $'
CORD3 DB '          |           7 | 8 | 9 $'
                    

;messages   
WELCOME DB '                    Welcome to TIC-TAC-TOE$'          
EXIT_INSTRUCTION DB 13,10,'Enter 0 to exit.$'                
INSTRUCTION1 DB 13,10,'(PLAYER 1) Enter a coordinate to play (1-9): $'    
INSTRUCTION2 DB 13,10,'(PLAYER 2) Enter a coordinate to play (1-9): $'
INV_INPUT DB 13,10,10,'Input must be a number between 1-9. Try again.$'
OVERWRITE DB 13,10,10,'Coordinate is not empty. Try again.$'  
GAME_OVER_MSG DB 13,10,10,'Game Over. Nobody wins.$' 
OP2 DB 13,10,'Enter any other key to play again.$'


;LOGIC    
MOVE DB 'o'     ;move sign
FILLED DB 0     ;how many positions filled

.CODE
 MAIN PROC
     MOV AX,@DATA
     MOV DS,AX  
     
     ;WELCOME MESSAGE
     MOV AH,9   
     LEA DX,NEWLINE
     INT 21H
     LEA DX,WELCOME
     INT 21H
     
     INITIALIZE:
     MOV A1,'-'
     MOV A2,'-'
     MOV A3,'-'
     MOV B1,'-'
     MOV B2,'-'
     MOV B3,'-'
     MOV C1,'-'
     MOV C2,'-'
     MOV C3,'-'     
     
     MOV BL,'x'
     
     MOV FILLED,0
      
    
     ;;;;;;;;;;;      
      
     ; 0 | 0 | 0
     ;-----------
     ; 0 | 0 | 0
     ;-----------
     ; 0 | 0 | 0
     ;;;;;;;;;;;
     
     
     ;PRINTING THE GAME SCREEN
     
     GAME_SCR:   
     MOV AH,9    
     LEA DX,NEWLINES
     INT 21H       
     LEA DX,COORDINATES
     INT 21H   
     LEA DX,CORD0  
     INT 21H
     INT 21H
     LEA DX,NEWLINE    
     INT 21H
     
     
     ;ROW 1
     MOV AH,9
     LEA DX,SPACES
     INT 21H
     
     MOV AH,2
     MOV DL,32
     INT 21H
     MOV DL,A1
     INT 21H   
     MOV AH,9
     LEA DX,SDS
     INT 21H  
     MOV AH,2
     MOV DL,A2
     INT 21H
     MOV AH,9
     LEA DX,SDS
     INT 21H
     MOV AH,2  
     MOV DL,A3
     INT 21H  
      
     MOV AH,9  
     LEA DX,CORD1
     INT 21H
     LEA DX,DASHES
     INT 21H 
     LEA DX,NEWLINE
     INT 21H         
     
     ;ROW 2
     MOV AH,9
     LEA DX,SPACES
     INT 21H
     
     MOV AH,2
     MOV DL,32
     INT 21H
     MOV DL,B1
     INT 21H   
     MOV AH,9
     LEA DX,SDS
     INT 21H  
     MOV AH,2
     MOV DL,B2
     INT 21H
     MOV AH,9
     LEA DX,SDS
     INT 21H
     MOV AH,2  
     MOV DL,B3
     INT 21H   
      
     MOV AH,9
     LEA DX,CORD2
     INT 21H
     LEA DX,DASHES
     INT 21H 
     LEA DX,NEWLINE
     INT 21H    
     
     ;ROW 3
     MOV AH,9
     LEA DX,SPACES
     INT 21H
     
     MOV AH,2
     MOV DL,32
     INT 21H
     MOV DL,C1
     INT 21H   
     MOV AH,9
     LEA DX,SDS
     INT 21H  
     MOV AH,2
     MOV DL,C2
     INT 21H
     MOV AH,9
     LEA DX,SDS
     INT 21H
     MOV AH,2  
     MOV DL,C3
     INT 21H 
      
     MOV AH,9  
     LEA DX,CORD3
     INT 21H
     LEA DX,NEWLINE
     INT 21H          
     ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;  
     
     ;CHECK IF FILLED
     CMP FILLED,9   
     ;
     ;
     ;Check win conditions here.
     ;
     ;
     JGE GAME_OVER
     
     
     ;GAME STARTS HERE
                  
     Start_game:            
     LEA DX, NEWLINES
     MOV AH,9
     INT 21H  
     LEA DX,EXIT_INSTRUCTION
     INT 21H
     CMP BL,'o'
     JE IN2
     LEA DX, INSTRUCTION1
     INT 21H 
     jmp Input
     IN2:
     LEA DX, INSTRUCTION2
     INT 21H     
     
     
           
              
              
              
     ;INPUT STARTS HERE
          
     Input:         
     MOV AH,1
     INT 21H
     MOV DL,AL  
      
     CMP DL,'0'     ;jump to label according to input
     JE EXIT
     CMP DL,'1'
     JE CN1
     CMP DL,'2'
     JE CN2        
     CMP DL,'3'
     JE CN3
     CMP DL,'4'
     JE CN4
     CMP DL,'5'
     JE CN5
     CMP DL,'6'
     JE CN6
     CMP DL,'7'
     JE CN7
     CMP DL,'8'
     JE CN8
     CMP DL,'9'
     JE CN9
     
     JE INVALID_MSG ;in case of no valid input
     

     CN1: 
     CMP A1,'-'
     JNE OVERWRITE_MSG
     MOV A1,BL  
     JMP SWITCH
     CN2:
     CMP A2,'-'
     JNE OVERWRITE_MSG 
     MOV A2,BL  
     JMP SWITCH
     CN3:            
     CMP A3,'-'
     JNE OVERWRITE_MSG
     MOV A3,BL  
     JMP SWITCH
     CN4:            
     CMP B1,'-'
     JNE OVERWRITE_MSG
     MOV B1,BL  
     JMP SWITCH
     CN5:            
     CMP B2,'-'
     JNE OVERWRITE_MSG
     MOV B2,BL  
     JMP SWITCH
     CN6:            
     CMP B3,'-'
     JNE OVERWRITE_MSG
     MOV B3,BL  
     JMP SWITCH 
     CN7:            
     CMP C1,'-'
     JNE OVERWRITE_MSG
     MOV C1,BL  
     JMP SWITCH 
     CN8:            
     CMP C2,'-'
     JNE OVERWRITE_MSG
     MOV C2,BL  
     JMP SWITCH 
     CN9:            
     CMP C3,'-'
     JNE OVERWRITE_MSG
     MOV C3,BL  
     JMP SWITCH  
     
     
     INVALID_MSG:
     MOV AH,9
     LEA DX,INV_INPUT
     INT 21H
     JMP GAME_SCR        

     OVERWRITE_MSG:
     MOV AH,9
     LEA DX,OVERWRITE
     INT 21H
     JMP GAME_SCR
     
     SWITCH:  
     INC FILLED
     XCHG BL,MOVE  
     JMP GAME_SCR     
     
     GAME_OVER:
     MOV AH,9
     LEA DX,NEWLINES
     INT 21H
     LEA DX,GAME_OVER_MSG
     INT 21H 
     LEA DX,NEWLINE
     INT 21H
     LEA DX,EXIT_INSTRUCTION
     INT 21H
     LEA DX,OP2
     INT 21H 
     LEA DX,NEWLINE
     INT 21H
     
     MOV AH,1
     INT 21H
     CMP AL,'0'  
     JNE INITIALIZE     
     JMP EXIT
             
             
    
    EXIT:
    MOV AH,4CH
    INT 21H 
    MAIN ENDP
 END MAIN
   
  
