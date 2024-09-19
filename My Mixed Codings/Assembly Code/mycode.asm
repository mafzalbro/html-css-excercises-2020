.model small
.stack 100h
.data

.code
main proc
    mov DL, 65
    mov CX, 26
    mov AH, 2
    
    lab:
    int 21h
    inc dl
    dec cx
     
    
    jnz lab
end main