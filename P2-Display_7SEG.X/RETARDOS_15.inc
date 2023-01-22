PSECT udata_acs
contador1:  DS 1	    ;reserva 1 byte en acces ram
contador2:  DS 1 
    
PSECT code  

Delay_10us:		    ; 2Tcy -- Call		   
    MOVLW   	1	    ; 1Tcy
    MOVWF   contador1,0	    ; 1Tcy    
Delay_Loop:
    Nop			    ; k*Tcy  
    DECFSZ  contador1,1,0   ; (k-1)+ 3Tcy 
    GOTO    Delay_Loop	    ; (k-1)+2Tcy 
    RETURN
 
Delay_25us:		    ; 2Tcy -- Call		   
    MOVLW   	5	    ; 1Tcy
    MOVWF   contador1,0	    ; 1Tcy    
Delay_Loop1:
    Nop			    ; k*Tcy  
    DECFSZ  contador1,1,0   ; (k-1)+ 3Tcy 
    GOTO    Delay_Loop	    ; (k-1)+2Tcy 
    RETURN		    ; 2Tcy 1

Delay_50us:		    ; 2Tcy -- Call		   
    MOVLW   	11	    ; 1Tcy
    MOVWF   contador1,0	    ; 1Tcy    
Delay_Loop2:
    Nop			    ; k*Tcy  
    DECFSZ  contador1,1,0   ; (k-1)+ 3Tcy 
    GOTO    Delay_Loop	    ; (k-1)+2Tcy 
    RETURN		    ; 2Tcy 
 
Delay_100us:		    ; 2Tcy -- Call		   
    MOVLW   	24	    ; 1Tcy
    MOVWF   contador1,0	    ; 1Tcy    
Delay_Loop3:
    Nop			    ; k*Tcy  
    DECFSZ  contador1,1,0   ; (k-1)+ 3Tcy 
    GOTO    Delay_Loop	    ; (k-1)+2Tcy 
    RETURN		    ; 2Tcy 
    
Delay_250us:		    ; 2Tcy -- Call		   
    MOVLW   	61	    ; 1Tcy
    MOVWF   contador1,0	    ; 1Tcy    
Delay_Loop4:
    Nop			    ; k*Tcy  
    DECFSZ  contador1,1,0   ; (k-1)+ 3Tcy 
    GOTO    Delay_Loop	    ; (k-1)+2Tcy 
    RETURN		    ; 2Tcy 
   
Delay_500us:		    ; 2Tcy -- Call		   
    MOVLW   	124	    ; 1Tcy
    MOVWF   contador1,0	    ; 1Tcy    
Delay_Loop5:
    Nop			    ; k*Tcy  
    DECFSZ  contador1,1,0   ; (k-1)+ 3Tcy 
    GOTO    Delay_Loop	    ; (k-1)+2Tcy 
    RETURN		    ; 2Tcy 
    
Delay_1ms:		    ; 2Tcy -- Call		   
    MOVLW   	249	    ; 1Tcy
    MOVWF   contador1,0	    ; 1Tcy    
Delay_Loop6:
    Nop			    ; k*Tcy  
    DECFSZ  contador1,1,0   ; (k-1)+ 3Tcy 
    GOTO    Delay_Loop	    ; (k-1)+2Tcy 
    RETURN		    ; 2Tcy 
 
Delay_5ms:		    ; 2Tcy -- Call
    MOVLW   5		    ; 1Tct
    MOVWF   contador2,0	    ; 1Tcy
;   T = (6 + 4k)us	    1Tcy = 1us
Ext_Loop:		   
    MOVLW   	249	    ; 1Tcy
    MOVWF   contador1,0	    ; 1Tcy    
Int_Loop:
    Nop			    ; k*Tcy  
    DECFSZ  contador1,1,0   ; (k-1)+ 3Tcy 
    GOTO    Int_Loop	    ; (k-1)+2Tcy 
    DECFSZ  contador2,1,0   ; (k-1)+ 3Tcy 
    GOTO    Ext_Loop	    ; (k-1)+2Tcy 
    RETURN		    ; 2Tcy
  
 Delay_10ms:		    ; 2Tcy -- Call
    MOVLW   10	    ; 1Tct
    MOVWF   contador2,0	    ; 1Tcy
;   T = (6 + 4k)us	    1Tcy = 1us
Ext_Loop1:		   
    MOVLW   	249	    ; 1Tcy
    MOVWF   contador1,0	    ; 1Tcy    
Int_Loop1:
    Nop			    ; k*Tcy  
    DECFSZ  contador1,1,0   ; (k-1)+ 3Tcy 
    GOTO    Int_Loop	    ; (k-1)+2Tcy 
    DECFSZ  contador2,1,0   ; (k-1)+ 3Tcy 
    GOTO    Ext_Loop	    ; (k-1)+2Tcy 
    RETURN		    ; 2Tcy 

Delay_25ms:		    ; 2Tcy -- Call
    MOVLW   25	    ; 1Tct
    MOVWF   contador2,0	    ; 1Tcy
;   T = (6 + 4k)us	    1Tcy = 1us
Ext_Loop2:		   
    MOVLW   	249	    ; 1Tcy
    MOVWF   contador1,0	    ; 1Tcy    
Int_Loop2:
    Nop			    ; k*Tcy  
    DECFSZ  contador1,1,0   ; (k-1)+ 3Tcy 
    GOTO    Int_Loop	    ; (k-1)+2Tcy 
    DECFSZ  contador2,1,0   ; (k-1)+ 3Tcy 
    GOTO    Ext_Loop	    ; (k-1)+2Tcy 
    RETURN		    ; 2Tcy 
    
Delay_50ms:		    ; 2Tcy -- Call
    MOVLW   50    ; 1Tct
    MOVWF   contador2,0	    ; 1Tcy
;   T = (6 + 4k)us	    1Tcy = 1us
Ext_Loop3:		   
    MOVLW   	249	    ; 1Tcy
    MOVWF   contador1,0	    ; 1Tcy    
Int_Loop3:
    Nop			    ; k*Tcy  
    DECFSZ  contador1,1,0   ; (k-1)+ 3Tcy 
    GOTO    Int_Loop	    ; (k-1)+2Tcy 
    DECFSZ  contador2,1,0   ; (k-1)+ 3Tcy 
    GOTO    Ext_Loop	    ; (k-1)+2Tcy 
    RETURN		    ; 2Tcy 

Delay_100ms:		    ; 2Tcy -- Call
    MOVLW   100		    ; 1Tct
    MOVWF   contador2,0	    ; 1Tcy
;   T = (6 + 4k)us	    1Tcy = 1us
Ext_Loop4:		   
    MOVLW   	249	    ; 1Tcy
    MOVWF   contador1,0	    ; 1Tcy    
Int_Loop4:
    Nop			    ; k*Tcy  
    DECFSZ  contador1,1,0   ; (k-1)+ 3Tcy 
    GOTO    Int_Loop	    ; (k-1)+2Tcy 
    DECFSZ  contador2,1,0   ; (k-1)+ 3Tcy 
    GOTO    Ext_Loop	    ; (k-1)+2Tcy 
    RETURN		    ; 2Tcy 
    
Delay_250ms:
    MOVLW   249		    ; 2Tcy -- Call
    MOVWF   contador2,0	    ; 1Tcy
;   T = (6 + 4k)us	    1Tcy = 1us
Ext_Loop5:		   
    MOVLW   	249	    ; 1Tcy
    MOVWF   contador1,0	    ; 1Tcy
Int_Loop5:
    Nop			    ; k*Tcy
    DECFSZ  contador1,1,0   ; (k-1)+ 3Tcy
    GOTO    Int_Loop	    ; (k-1)+2Tcy
    DECFSZ  contador2,1,0
    GOTO    Ext_Loop	  
    RETURN		    ; 2Tcy