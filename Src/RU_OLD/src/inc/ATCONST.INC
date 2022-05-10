
CONST
       tnNoTable                                      = -3;

CONST
       cmValid                                        = 0;
CONST
       cmQuit                                         = 1;
CONST
       cmError                                        = 2;
CONST
       cmMenu                                         = 3;
CONST
       cmClose                                        = 4;
CONST
       cmZoom                                         = 5;
CONST
       cmResize                                       = 6;
CONST
       cmNext                                         = 7;
CONST
       cmPrev                                         = 8;
CONST
       cmHelp                                         = 9;
CONST
       cmOK                                           = 10;
CONST
       cmCancel                                       = 11;
CONST
       cmYes                                          = 12;
CONST
       cmNo                                           = 13;
CONST
       cmDefault                                      = 14;

CONST
       cmCut                                          = 20;
CONST
       cmCopy                                         = 21;
CONST
       cmPaste                                        = 22;
CONST
       cmUndo                                         = 23;
CONST
       cmClear                                        = 24;
CONST
       cmTile                                         = 25;
CONST
       cmCascade                                      = 26;

CONST
       cmAqaStartGenTest                              = 31;
CONST
       cmAqaFinishGenTest                             = 32;
CONST
       cmAqaStartExecTest                             = 33;
CONST
       cmAqaFinishExecTest                            = 34;
CONST
       cmAqaToDo                                      = 35;
CONST
       cmAqaContinueExecTest                          = 36;
CONST
       cmAqaStartDebugTest                            = 39;
CONST
       cmAqaReport                                    = 40;
CONST
       cmAqaMarkRec                                   = 41;
CONST
       cmAqaMarkAll                                   = 42;
CONST
       cmAqaUnMarkAll                                 = 43;
CONST
       cmAqaInvertMark                                = 44;
CONST
       cmAqaInvertMarkAll                             = 45;
CONST
       cmDownloadScript                               = 46;
CONST
       cmAqaGoToDebugger                              = 47;
CONST
       cmSetData                                      = 48;
CONST
       cmResetData                                    = 49;

CONST
       cmReceivedFocus                                = 50;
CONST
       cmReleasedFocus                                = 51;
CONST
       cmScrollBarChanged                             = 53;
CONST
       cmScrollBarClicked                             = 54;
CONST
       cmSelectWindowNum                              = 55;
CONST
       cmListItemSelected                             = 56;
CONST
       cmScrollBarStoped                              = 57;
CONST
       cmScrollBarSized                               = 58;
CONST
       cmListItemFocused                              = 59;
CONST
       cmRecordHistory                                = 60;
CONST
       cmGrabDefault                                  = 61;
CONST
       cmReleaseDefault                               = 62;
CONST
       cmTabRecordHistory                             = 63;

CONST
       cmColorForegroundChanged                       = 71;
CONST
       cmColorBackgroundChanged                       = 72;
CONST
       cmColorSet                                     = 73;
CONST
       cmNewColorItem                                 = 74;
CONST
       cmNewColorIndex                                = 75;

CONST
       cmSave                                         = 80;
CONST
       cmSaveAs                                       = 81;
CONST
       cmFind                                         = 82;
CONST
       cmReplace                                      = 83;
CONST
       cmSearchAgain                                  = 84;

CONST
       cmButtonEvent                                  = 95;
CONST
       cmTopMenu                                      = 96;
CONST
       cmEnableHelpLine                               = 97;
CONST
       cmDisableHelpLine                              = 98;
CONST
       cmSysMenu                                      = 99;
CONST
       cmRealDoneEmbed                                = 100;  

CONST
       cmHotKeys                                      = 300;

CONST
       cmFileOpen                                     = 301;
CONST
       cmFileReplace                                  = 302;
CONST
       cmFileClear                                    = 303;
CONST
       cmFileInit                                     = 304;
CONST
       cmChangeDir                                    = 305;
CONST
       cmRevert                                       = 306;
CONST
       cmFileFocused                                  = 307;
CONST
       cmFileDoubleClicked                            = 308;


CONST
       cmGetValues                                    = 340;
CONST
       cmCheckRecord                                  = 341;
CONST
       cmSetOption                                    = 342;
CONST
       cmListRecords                                  = 343;
CONST
       cmInsert                                       = 344;
CONST
       cmSelectView                                   = 345;
CONST
       cmClearOption                                  = 346;
CONST
       cmPick                                         = 347;
CONST
       cmGetFirst                                     = 348;
CONST
       cmGetLast                                      = 349;
CONST
       cmGetRow                                       = 350;
CONST
       cmDefaultRows                                  = 351;
CONST
       cmScroll                                       = 352;
CONST
       cmPass                                         = 353;
CONST
       cmSetPos                                       = 354;
CONST
       cmPosUp                                        = 355;
CONST
       cmPosDown                                      = 356;
CONST
       cmSetCurTable                                  = 357;
CONST
       cmResetFields                                  = 358;
CONST
       cmSetCurField                                  = 359;
CONST
       cmVerifyModify                                 = 360;
CONST
       cmReturnView                                   = 361;
CONST
       cmDelete                                       = 362;
CONST
       cmSwitchFormat                                 = 363;
CONST
       cmSetStatus                                    = 364;
CONST
       cmDoInsert                                     = 365;
CONST
       cmDeleteRecord                                 = 366;
CONST
       cmUpDateRecord                                 = 367;
CONST
       cmSetPanel                                     = 368;
CONST
       cmSetDefault                                   = 369;
CONST
       cmAbortModification                            = 370;
CONST
       cmReturnTable                                  = 371;
CONST
       cmPositionChanged                              = 372;
CONST
       cmSelectPanel                                  = 373;
CONST
       cmInit                                         = 374;
CONST
       cmDone                                         = 375;
CONST
       cmRunInterface                                 = 376;
CONST
       cmReturnField                                  = 377;
CONST
       cmHidePanel                                    = 378;
CONST
       cmInsertRecord                                 = 379;
CONST
       cmReceiveParameters                            = 380;
CONST
       cmCheckField                                   = 381;
CONST
       cmFormatError                                  = 382;
CONST
       cmGetFocus                                     = 383;
CONST
       cmQueryHigherTable                             = 384;
CONST
       cmGetInserted                                  = 385;
CONST
       cmSetFieldState                                = 386;
CONST
       cmClearFieldState                              = 387;
CONST
       cmSelectField                                  = 388;
CONST
       cmLockedModification                           = 389;
CONST
       cmListRecordsInTable                           = 390;
CONST
       cmMoveInTable                                  = 391;
CONST
       cmSwitchFromContainer                          = 392;
CONST
       cmSwitchToContainer                            = 393;
CONST
       cmRunEveryInterface                            = 394;


CONST
       cmCalculator                                   = 400;
CONST
       cmViewFile                                     = 401;
CONST
       cmExecView                                     = 402;
CONST
       cmInsertView                                   = 403;
CONST
       cmChDir                                        = 404;
CONST
       cmModeColor                                    = 405;
CONST
       cmModeBW                                       = 406;
CONST
       cmModeMono                                     = 407;
CONST
       cmToggleFonts                                  = 408;
CONST
       cmEvaluateAndModify                            = 409;
CONST
       cmToggleClock                                  = 410;
CONST
       cmToggleHeap                                   = 411;
CONST
       cmLines25                                      = 412;
CONST
       cmLines43                                      = 413;
CONST
       cmToggleLines                                  = 414;
CONST
       cmRunProcess                                   = 415;
CONST
       cmDosShell                                     = 416;
CONST
       cmSelectIdent                                  = 417;
CONST
       cmSendValue                                    = 418;

CONST
       cmLastHelp                                     = 419;
CONST
       cmFindTopic                                    = 420;
CONST
       cmSetTopic                                     = 421;
CONST
       cmCallIndex                                    = 422;
CONST
       cmIndexEntry                                   = 423;
CONST
       cmAmIHelp                                      = 424;
CONST
       cmCallTopic                                    = 425;

CONST
       cmChangeColors                                 = 426;
CONST
       cmStoreDesktop                                 = 427;
CONST
       cmLoadDesktop                                  = 428;
CONST
       cmLockConsoleMessage                           = 429;

CONST
       cmOnlyEvaluate                                 = 430;
CONST
       cmFileFind                                     = 431;

CONST
       cmAbout                                        = 432;
CONST
       cmUserScreen                                   = 433;
CONST
       cmEditFile                                     = 434;
CONST
       cmProcessText                                  = 435;
CONST
       cmCanIHandle                                   = 436;
CONST
       cmChangeMonitorOptions                         = 437;
CONST
       cmCloseAll                                     = 438;
CONST
       cmSaveAll                                      = 439;
CONST
       cmRun                                          = 440;
CONST
       cmTrace                                        = 441;

CONST
       cmFocusTopic                                   = 442;
CONST
       cmRunUserInterface                             = 443;
CONST
       cmFirstModification                            = 444;
CONST
       cmWindowNotExposed                             = 445;
CONST
       cmWindowActive                                 = 446;
CONST
       cmSetPassiveString                             = 447;

CONST
       cmRunFilter                                    = 450;
CONST
       cmDiscardFilter                                = 451;
CONST
       cmNewFilter                                    = 452;
CONST
       cmEditFilter                                   = 453;
CONST
       cmDeleteFilter                                 = 454;

CONST
       cmFilterInsert                                 = 455;
CONST
       cmFilterDelete                                 = 456;
CONST
       cmUniversePick                                 = 457;
CONST
       cmFilterUnionByAnd                             = 458;
CONST
       cmFilterUnionByOr                              = 459;
CONST
       cmFilterSelectField                            = 460;
CONST
       cmFilterSelectOper                             = 461;
CONST
       cmFilterSelectFunction                         = 462;
CONST
       cmFilterInsertStandard                         = 463;
CONST
       cmFilterInsertLine                             = 464;

CONST
       cmFilterConstantPart                           = 468;
CONST
       cmFilterQueryFields                            = 469;

CONST
       cmFilterAllFields                              = 470;

CONST
       cmFilterStartDialog                            = 471;
CONST
       cmFilterAddAllFields                           = 472;
CONST
       cmFilterDelAllFields                           = 474;
CONST
       cmUniverseUnderList                            = 475;

CONST
       cmFilterSelectOper_Nop                         = 476;
CONST
       cmFilterSelectOper_Equal                       = 477;
CONST
       cmFilterSelectOper_NotEqual                    = 478;
CONST
       cmFilterSelectOper_Less                        = 479;
CONST
       cmFilterSelectOper_Great                       = 480;
CONST
       cmFilterSelectOper_LessEqual                   = 481;
CONST
       cmFilterSelectOper_GreatEqual                  = 482;
CONST
       cmFilterSelectOper_Between                     = 483;
CONST
       cmFilterSelectOper_InRange                     = 484;
CONST
       cmFilterSelectOper_Like                        = 485;
CONST
       cmFilterSelectOper_Blank                       = 486;
CONST
       cmFilterSelectOper_InOut                       = 487;
CONST
       cmFilterSelectOper_OutIn                       = 488;

CONST
       cmEditorPlaceOnly                              = 498;

CONST
       cmSeeProto                                     = 499;
CONST
       cmGotAMessage                                  = 500;
CONST
       cmUserConflict                                 = 501;
CONST
       cmLockError                                    = 502;
CONST
       cmOpenSearch                                   = 503;
CONST
       cmDelOnProtect                                 = 504;
CONST
       cmProtectedInput                               = 505;
CONST
       cmSearchSubstr                                 = 506;
CONST
       cmInsertHandlers                               = 507;
CONST
       cmGotoSymbol                                   = 508;

CONST
       cmCloseInterface                               = 509;
CONST
       cmAbortInsert                                  = 510;
CONST
       cmQueryWindow                                  = 511;
CONST
       cmInsertYourSelf                               = 512;
CONST
       cmReturnString                                 = 513;
CONST
       cmReceiveString                                = 514;
CONST
       cmGetProgramID                                 = 515;
CONST
       cmInstantCloseInterface                        = 516;
CONST
       cmEditReport                                   = 517;
CONST
       cmClusterChanged                               = 518;
CONST
       cmCanSearch                                    = 519;

CONST
       cmAquireFieldTables                            = 520;

CONST
       cmToDependedWindows                            = 521;
CONST
       cmQCSetPlacement                               = 522;
CONST
       cmQCGetLines                                   = 523;
CONST
       cmQCSetLines                                   = 524;
CONST
       cmQCSetDelay                                   = 525;
CONST
       cmQCCloseQC                                    = 526;
CONST
       cmQCCloseHistory                               = 527;
CONST
       cmQCRunQC                                      = 528;
CONST
       cmQCRunHistory                                 = 529;
CONST
       cmQCError                                      = 530;
CONST
       cmQCGetNumberOfRecords                         = 531;
CONST
       cmQCPerformAction                              = 532;
CONST
       cmQCTimer                                      = 533;

CONST
       cmQCGetParameter                               = 534;
CONST
       cmQCSetParameter                               = 535;
CONST
       cmChangeViewDef                                = 536;

CONST
       cmQCSetPalette                                 = 537;
CONST
       cmQCPanelSwitch                                = 538;

CONST
       cmQCGetColumnWidths                            = 539;
CONST
       cmQCSetColumnWidths                            = 540;

CONST
       cmBrowserSlideControl                          = 541;

CONST
       cmGetStatusDef                                 = 542;
CONST
       cmPostRButtonDown                              = 543;
CONST
       cmQuickSearchGetSource                         = 544;

CONST
       cmQCParameters                                 = 549;
CONST
       cmPickPreprocess                               = 550;
CONST
       cmInLineGetMaxLen                              = 551;
CONST
       cmInLineSetMaxLen                              = 552;
CONST
       cmInLineGetSALock                              = 553;
CONST
       cmInLineSetSALock                              = 554;
CONST
       cmQuerySampleWidth                             = 579;

CONST
       cmRdSetCtrlH                                   = 600;
CONST
       cmRdSetCtrlK                                   = 601;
CONST
       cmRdSetCtrlM                                   = 602;
CONST
       cmRdSetCtrlQ                                   = 603;
CONST
       cmRdSetCtrlF                                   = 604;

CONST
       cmRdLineDown                                   = 605;
CONST
       cmRdLineUp                                     = 606;
CONST
       cmRdPageDown                                   = 607;
CONST
       cmRdPageUp                                     = 608;
CONST
       cmRdCharLeft                                   = 609;
CONST
       cmRdCharRight                                  = 610;
CONST
       cmRdHome                                       = 611;
CONST
       cmRdEnd                                        = 612;
CONST
       cmRdCtrlPgDn                                   = 613;
CONST
       cmRdCtrlPgUp                                   = 614;
CONST
       cmRdDisplay                                    = 615;

CONST
       cmRdCtrlHH                                     = 616;
CONST
       cmRdCtrlHR                                     = 617;
CONST
       cmRdHideBlock                                  = 618;
CONST
       cmRdSBBeg                                      = 619;
CONST
       cmRdSBEnd                                      = 620;
CONST
       cmRdGotoXY                                     = 621;
CONST
       cmRdGotoLine                                   = 622;
CONST
       cmRdFormula                                    = 623;
CONST
       cmRdToCBoard                                   = 624;
CONST
       cmRdPrintBlock                                 = 625;
CONST
       cmRdMBBeg                                      = 626;
CONST
       cmRdMBEnd                                      = 627;
CONST
       cmRdLocalMenu                                  = 628;
CONST
       cmRdPrint                                      = 629;
CONST
       cmRdPrintIntoFile                              = 630;
CONST
       cmRdTabulator                                  = 631;
CONST
       cmRdSearchDialog                               = 632;
CONST
       cmRdSearchAgain                                = 633;
CONST
       cmRdSumMatrix                                  = 634;
CONST
       cmRdPlaceDialog                                = 635;
CONST
       cmRdWordLeft                                   = 636;
CONST
       cmRdWordRight                                  = 637;
CONST
       cmRdCtrlHome                                   = 638;
CONST
       cmRdCtrlEnd                                    = 639;
CONST
       cmRdGotoBlockBegin                             = 640;
CONST
       cmRdGotoBlockEnd                               = 641;
CONST
       cmRdMarkLine                                   = 642;
CONST
       cmRdTogViewPage                                = 643;
CONST
       cmRdPageBegin                                  = 644;
CONST
       cmRdPageEnd                                    = 645;

CONST
       cmRdDel                                        = 646;
CONST
       cmRdEnter                                      = 647;
CONST
       cmRdBackSp                                     = 648;
CONST
       cmRdDelLn                                      = 649;
CONST
       cmRdCopyBlock                                  = 650;
CONST
       cmRdCutBlock                                   = 651;
CONST
       cmRdFromCBoard                                 = 652;
CONST
       cmRdDelBlock                                   = 653;
CONST
       cmRdMoveBlock                                  = 654;
CONST
       cmRdDelEndOL                                   = 655;
CONST
       cmRdClearStyles                                = 656;
CONST
       cmRdReplaceDialog                              = 657;
CONST
       cmRdFormatPara                                 = 658;
CONST
       cmRdFormatDialog                               = 659;
CONST
       cmRdFormatBlock                                = 680;
CONST
       cmRdInsert                                     = 681;
CONST
       cmRdDelWord                                    = 682;
CONST
       cmRdCtrlKI                                     = 683;
CONST
       cmRdCtrlKU                                     = 684;
CONST
       cmRdSave                                       = 685;
CONST
       cmRdSetStyle                                   = 686;
CONST
       cmRdNewLine                                    = 687;
CONST
       cmRdUpCaseLine                                 = 688;
CONST
       cmRdLoCaseLine                                 = 689;
CONST
       cmRdUpCaseBlock                                = 690;
CONST
       cmRdLoCaseBlock                                = 691;
CONST
       cmRdReadBlock                                  = 692;
CONST
       cmRdWriteBlock                                 = 693;
CONST
       cmRdAppendBlock                                = 694;
CONST
       cmRdMarkWord                                   = 695;
CONST
       cmRdUpCaseChar                                 = 696;
CONST
       cmRdASCIITable                                 = 697;
CONST
       cmRdDocumentDialog                             = 698;
CONST
       cmRdTogglePsGr                                 = 699;
CONST
       cmRdPSDelUp                                    = 700;
CONST
       cmRdPSDelDown                                  = 701;
CONST
       cmRdPSDelLeft                                  = 702;
CONST
       cmRdPSDelRight                                 = 703;
CONST
       cmRdPSBack                                     = 704;
CONST
       cmRdToggleAuto                                 = 705;
CONST
       cmRdSetAsLeftM                                 = 706;
CONST
       cmRdSetAsRightM                                = 707;
CONST
       cmRdSetAsIndent                                = 708;
CONST
       cmRdSortDialog                                 = 709;
CONST
       cmRdSortBlockInc                               = 710;
CONST
       cmRdSortBlockDec                               = 711;
CONST
       cmRdCenterLine                                 = 712;
CONST
       cmGetCurrentFileName                           = 713;
CONST
       cmRdCopyFile                                   = 714;
CONST
       cmRdCapitalLine                                = 715;
CONST
       cmRdToggleMode                                 = 716;
CONST
       cmRdPrintDefault                               = 717;
CONST
       cmDeskMenuBookmark                             = 749;
CONST
       cmDesk                                         = 750;
CONST
       cmExitMenu                                     = 751;
CONST
       cmMenuFirst                                    = 752;
CONST
       cmRunMenu                                      = 753;
CONST
       cmRunNotAtlantis                               = 754;
CONST
       cmExecInWindow                                 = 755;
CONST
       cmExitToDesk                                   = 756;

CONST
       cmQueryClipBoard                               = 757;
CONST
       cmQueryFullName                                = 758;
CONST
       cmPutYourSelf                                  = 759;
CONST
       cmRdPrinterDialog                              = 760;
CONST
       cmRdPrintOptDialog                             = 761;
CONST
       cmRdShowClipboard                              = 762;
CONST
       cmRdCollapse                                   = 763;
CONST
       cmRdSetSum                                     = 764;
CONST
       cmRdSetMax                                     = 765;
CONST
       cmRdSetMin                                     = 766;
CONST
       cmRdSetCount                                   = 767;
CONST
       cmRdSetAverage                                 = 768;
CONST
       cmRdReplaceAll                                 = 769;
CONST
       cmRdSkip                                       = 770;
CONST
       cmRdListFiles                                  = 771;
CONST
       cmRdGetDefault                                 = 772;
CONST
       cmRdMakeDefault                                = 773;
CONST
       cmEditorSetILine                               = 774;
CONST
       cmEditorGetILine                               = 775;
CONST
       cmEditorSetIPos                                = 776;
CONST
       cmEditorGetIPos                                = 777;
CONST
       cmEditorSetFlagerI                             = 778;
CONST
       cmEditorGetFlagerI                             = 779;
CONST
       cmEditorSetIPage                               = 780;
CONST
       cmEditorGetIPage                               = 781;
CONST
       cmEditorSetIPageLine                           = 782;
CONST
       cmEditorGetIPageLine                           = 783;

CONST
       cmSwitchBackground                             = 784;
CONST
       cmDeletePrinter                                = 785;
CONST
       cmPrinterHardwareSetup                         = 786;


CONST
       cmCalendar                                     = 787;
CONST
       cmPuzzle                                       = 788;
CONST
       cmMouseTuneUp                                  = 789;

CONST
       cmMenuLovelyPrograms                           = 790;
CONST
       cmTuneLovelyPrograms                           = 790;

CONST
       cmRunReport                                    = 794;

CONST
       cmExtViewers                                   = 795;

CONST
       cmEvaluate                                     = 796;
CONST
       cmModify                                       = 797;
CONST
       cmMemoExport                                   = 798;
CONST
       cmMemoImport                                   = 799;
CONST
       cmPrefix                                       = 800;

CONST
       cmSetCompPath                                  = 801;
CONST
       cmSetCompOpt                                   = 802;
CONST
       cmAboutRegNumber                               = 803;

CONST
       cmRunAllFunctionsList                          = 804;
CONST
       cmRunUsersFunctionsList                        = 805;
CONST
       cmRunHistoryCallsList                          = 806;

CONST
       cmButilPath                                    = 807;
CONST
       cmDefaultDoctorConfig                          = 808;

CONST
       cmDict                                         = 809;

CONST
       cmAQABeforeRestoreDatabase                     = 810;    
CONST
       cmInittiateMyKeyEvent                          = 811;
CONST
       cmInternalRun                                  = 812;
CONST
       cmInternalGo                                   = 813;
CONST
       cmInternalFilter                               = 814;

CONST
       cmWindowCreated                                = 824;

CONST
       cmCopyToClipboard                              = 825;
CONST
       cmPasteFromClipboard                           = 826;


CONST
       cmNotificationStart                            = 827;

CONST
       cmGetCurrentTick                               = 828;
CONST
       cmIdleNotification                             = 829;
CONST
       cmCheckIllegalSymbol                           = 830;
CONST
       cmIdle                                         = 831;
CONST
       cmCommandSetChanged                            = 832;
CONST
       cmCheckCommands                                = 833;
CONST
       cmPostInit                                     = 834;
CONST
       cmFieldModified                                = 835;
CONST
       cmCheckProtected                               = 836;

CONST
       cmNotificationEnd                              = 837;
CONST
       cmWhoIamForToolbar                             = 838;
CONST
       cmGetUserFunctions                             = 839;
CONST
       cmGetAllFunctions                              = 840;
CONST
       cmSetApplicationTitle                          = 841;

CONST
       cmReturnIniRect                                = 842;
CONST
       cmSaveScreen                                   = 843;
CONST
       cmCheckPosition                                = 844;
CONST
       cmVisibleFields                                = 845;
CONST
       cmInsertYourField                              = 846;

CONST
       cmGetValueRow                                  = 847;
CONST
       cmMove                                         = 848;
CONST
       cmCheckVerticalMove                            = 849;
CONST
       cmSetWindowHeader                              = 850;
CONST
       cmGetRowsNum                                   = 851;
CONST
       cmSetCurRow                                    = 852;
CONST
       cmGetVerticalPgStep                            = 853;
CONST
       cmResetLimit                                   = 854;
CONST
       cmFollowByParentLine                           = 855;
CONST
       cmCheckHorisontalMove                          = 856;
CONST
       cmExistSubstr                                  = 857;
CONST
       cmUpdateAbstractRowsNum                        = 858;
CONST
       cmSwapViews                                    = 859;

CONST
       cmGlobalUpdateTable                            = 860;
CONST
       cmFindViewRecords                              = 861;
CONST
       cmSetPosNetUpdate                              = 862;
CONST
       cmUpdateIniRect                                = 863;
CONST
       cmRepairIniRect                                = 864;
CONST
       cmSaveInterfaceLayOut                          = 865;
CONST
       cmCalcClientRect                               = 866;
CONST
       cmSaveToDesk                                   = 867;
CONST
       cmLoadFromDesk                                 = 868;

CONST
       cmInLineGetIPos                                = 869;
CONST
       cmTotalRecall                                  = 870;
CONST
       cmSetSelectable                                = 871;
CONST
       cmClearSelectable                              = 872;
CONST
       cmChangePassword                               = 873;
CONST
       cmShowGalaGrafFile                             = 874;
CONST
       cmInLineSetIPos                                = 875;
CONST
       cmInLineGetSel                                 = 876;
CONST
       cmInLineSetSel                                 = 877;
CONST
       cmSetWindowIcon                                = 878;

CONST
       cmFLeaveOutAllContours                         = 888;
CONST
       cmRedFoxDictOpen                               = 889;
CONST
       cmCAStartMonitoring                            = 891;
CONST
       cmViewLicFile                                  = 892;
CONST
       cmAlignViews                                   = 895;
CONST
       cmClearEmbIniRect                              = 896;
CONST
       cmSaveEmbToDesk                                = 897;
CONST
       cmLoadEmbFromDesk                              = 898;

CONST
       cmTreeCheckPosition                           = 899;
CONST
       cmTreeTop                                     = 900;
CONST
       cmTreeDown                                    = 901;
CONST
       cmTreeUp                                      = 902;
CONST
       cmTreeNodeType                                = 903;
CONST
       cmTreeOpenNode                                = 904;
CONST
       cmTreeCloseNode                               = 905;

CONST
       cmRdInitHighlited                             = 906;
CONST
       cmSaveConfiguration                           = 907;
CONST
       cmProcessFile                                 = 908;
CONST
       cmAuInterface                                 = 909;
CONST
       cmArdCom                                      = 910;
CONST
       cmBas1                                        = 911;
CONST
       cmBas2                                        = 912;
CONST
       cmCBlock                                      = 913;
CONST
       cmDesChange                                   = 914;
CONST
       cmDesDel                                      = 915;
CONST
       cmDesMode                                     = 916;
CONST
       cmDesOption                                   = 917;
CONST
       cmDesPrint                                    = 918;
CONST
       cmDesTable                                    = 919;
CONST
       cmDesVar                                      = 920;
CONST
       cmDesView                                     = 921;
CONST
       cmEcsport                                     = 922;
CONST
       cmFindField                                   = 923;
//CONST
//       cmGlobalRes                                   = 924;
CONST
       cmiBlock                                      = 925;
CONST
       cmiField                                      = 926;
CONST
       cmiFooter                                     = 927;
CONST
       cmiHeader                                     = 928;
CONST
       cmiLoop1                                      = 929;
CONST
       cmiLoop2                                      = 930;
CONST
       cmiLoop3                                      = 931;
CONST
       cmImport                                      = 932;
CONST
       cmiTable                                      = 933;
CONST
       cmiVar                                        = 934;
//CONST
//       cmOpt1                                        = 935;
//CONST
//       cmOpt2                                        = 936;
CONST
       cmOpt3                                        = 937;
//CONST
//       cmPrivateRes                                  = 940;
CONST
       cmResLib                                      = 941;
CONST
       cmResLoad                                     = 942;
CONST
       cmResNew                                      = 943;
CONST
       cmResSave                                     = 944;
CONST
       cmResSaveAs                                   = 945;
CONST
       cmRTF                                         = 947;
CONST
       cmRunFCom                                     = 948;
CONST
       cmRunService                                  = 949;
CONST
       cmSetFrmRes                                   = 950;
CONST
       cmSetLoop                                     = 951;
CONST
       cmTinst                                       = 952;
CONST
       cmSetFCEnvOpt                                 = 953;
CONST
       cmLoadFormSource                              = 954;
CONST
       cmFCMarkAll                                   = 956;
CONST
       cmFCUnMarkAll                                 = 957;
CONST
       cmFCMarkUno                                   = 958;
CONST
       cmFCUnMarkUno                                 = 959;
CONST
       cmFCExpandNode                                = 960;
CONST
       cmFCCollapseNode                              = 961;
CONST
       cmFCExpandAll                                 = 962;
CONST
       cmFCCollapseAll                               = 963;
CONST
       cmFCSwitchOrder                               = 964;
CONST
       cmfRun                                        = 965;
CONST
       cmfDesigner                                   = 966;
CONST
       cmfFilter                                     = 967;
CONST
       cmXDesigner                                   = 968;
CONST
       cmSetButtonState                              = 970;
CONST
       cmClearButtonState                            = 971;
CONST
       cmChangePalette                               = 972;
CONST
       cmIRunner                                     = 973;
CONST
       cmfTune                                       = 974;
CONST
       cmClusterFieldEnabled                         = 975;
CONST
       cmOpenHistoryWindow                           = 976;
CONST
       cmSetfSem                                     = 978;
CONST
       cmfSaveWindow                                 = 979;
CONST
       cmfStep                                       = 980;
CONST
       cmffRun                                       = 981;
CONST
       cmfBreak                                      = 982;
CONST
       cmfVariables                                  = 983;
CONST
       cmfBack                                       = 984;
CONST
       cmfReport                                     = 985;
CONST
       cmSetDebuger                                  = 986;
CONST
       cmGetMemoStream                               = 996;
CONST
        cmNeedRescanMemo                             = 997;
CONST
       cmFilterPick                                  = 998;
CONST
       cmRotateList                                  = 999;
CONST
       cmIsMyField                                   = 1000;
CONST
       cmSetColumnHeader                             = 1001;
CONST
       cmTreeNeedOwner                               = 1002;
CONST
       cmChangeViewerData                            = 1003;
CONST
       cmAddStringIntoList                           = 1004;
CONST
       cmGetVisionNextPrev                           = 1005;
CONST
       cmHere                                        = 1006;
CONST
       cmModules                                     = 1007;
//CONST
//       cmOrigin                                      = 1008;
CONST
       cmReload                                      = 1009;
CONST
       cmSetBreakPoint                               = 1010;
CONST
       cmStep                                        = 1011;
CONST
       cmIsInterface                                 = 1012;
CONST
       cmClearBPoint                                 = 1014;
CONST
       cmChangeTabbedSheetFormat                      = 1013;
CONST
       cmSetTabbedSheetFormat                         = 1014;
CONST
       cmGetTabbedSheetList                           = 1015;
CONST
       cmExprFieldChanged                             = 1016;
CONST
       cmSetBrowserScrollBarPosition                  = 1017;
CONST
       cmAqaRunPlan                                   = 1018;
CONST
       cmAqaDebugPlan                                 = 1019;
CONST
       cmAqaItemViewScript                            = 1020;
CONST
       cmAqaCheckPlan                                 = 1021;
CONST
       cmAqaItemMoveUp                                = 1022;
CONST
       cmAqaItemMoveDown                              = 1023;
CONST
       cmAqaItemMoveTop                               = 1024;
CONST
       cmAqaItemMoveBottom                            = 1025;
CONST
       cmAqaInsertItemPlan                            = 1026;
CONST
       cmAqaInsertItemTest                            = 1027;
CONST
       cmAqaInsertItemPlanBottom                      = 1028;
CONST
       cmAqaInsertItemTestBottom                      = 1029;
CONST
       cmAqaRegenCP                                   = 1030;
CONST
       cmChangeExtAttr                                = 1031;
CONST
       cmSwitchToComponent                            = 1032;
CONST
       cmActivateDesk                                 = 1033;
CONST
       cmApplicationStarted                           = 1034;
CONST
       cmGetDeskMenu                                  = 1035;
CONST
       cmActivateDeskMenu                             = 1036;
CONST
       cmOnVipLoad                                    = 1037;
CONST
       cmOnVipUnLoad                                  = 1038;
CONST
       cmOnVipUse                                     = 1039;
CONST
       cmOnVipFree                                    = 1040;
CONST
       cmSaveDeskOptions                              = 1041;
CONST
       cmReadDeskOptions                              = 1042;
CONST
       cmDoGetFirst                                   = 1043;
CONST
       cmDoGetLast                                    = 1044;
CONST
       cmDoGetNext                                    = 1045;
CONST
       cmDoGetPrev                                    = 1046;
CONST
       cmDoFind                                       = 1047;
CONST
       cmGetAddr                                      = 1048;
CONST
       cmGetDirect                                    = 1049;
CONST
       cmAqaRegenScript                               = 1050;
CONST
       cmCacheInit                                    = 1051;
CONST
       cmCacheDone                                    = 1052;
CONST
       cmColumnClicked                                = 1053;
CONST
       cmChangeSortMode                               = 1054;
CONST
       cmCloseSearch                                  = 1055;
CONST
       cmAqaSelectStage                               = 1056;
CONST
       cmRedundantWindowsMessage                      = 1057;
CONST
       cmCalendarPick                                 = 1058;
CONST
       cmGetTabbedSheetOptions                        = 1059;
CONST
       cmRescanTabbedSheet                            = 1060;
CONST
       cmTuneArmResource                              = 1061;
CONST
       cmCheckSkip                                    = 1062;
CONST
       cmWindowsSelectPage                            = 1063;
CONST
       cmAqaStartReRecordScript                       = 1064;
CONST
       cmAqaStopReRecordScript                        = 1065;
CONST
       cmAqaStartRePlaySegment                        = 1066;
CONST
       cmRedrawField                                  = 1067;
CONST
       cmSelectRootTable                              = 1068;
CONST
       cmRedrawNow                                    = 1069;
CONST
       cmTreeIconClick                                = 1070;

CONST
       cmConfigureObject                              = 1073;
CONST
       cmStoreObjectConfig                            = 1074;
CONST
       cmObjInspectorStarted                          = 1075;
CONST
       cmObjInspectorClosed                           = 1076;
CONST
       cmRefreshMenuBar                               = 1077;
CONST
       cmEditMenuBar                                  = 1078;
CONST
       cmGetUserConfResource                          = 1079;
CONST
       cmRedrawEditRect                               = 1080;
CONST
       cmSetNewInspectorObject                        = 1081;
CONST
       cmRestoreObjectConfig                          = 1082;
CONST
       cmConfRunInterface                             = 1083;
CONST
       cmConfNotification                             = 1084;
CONST
       cmConfDelete                                   = 1085;
CONST
       cmConfInsert                                   = 1086;
CONST
       cmConfPickObj                                  = 1087;
CONST
       cmConfThisBySelf                               = 1088;
CONST
       cmSetHistory                                   = 1089;
CONST
       cmDataPathChanging                             = 1090;
CONST
       cmArmInsertCurrent                             = 1091;
CONST
       cmArmInsertItem                                = 1092;
CONST
       cmArmInsertSubMenu                             = 1093;
CONST
       cmArmInsertOther                               = 1094;
CONST
       cmArmInsertDelimiter                           = 1095;
CONST
       cmArmDeleteAll                                 = 1096;
CONST
       cmArmMoveUp                                    = 1097;
CONST
       cmArmMoveDown                                  = 1098;
CONST
       cmArmGetList                                   = 1099;
CONST
       cmArmEdit                                      = 1100;
CONST
       cmShowVisionWindow                             = 1101;
CONST
       cmConfNotificationEx                           = 1102;
CONST
       cmIsSearchOpen                                 = 1103;
CONST
       cmArmExport                                    = 1106;
CONST
       cmArmImport                                    = 1107;
CONST
       cmCompileDefaultValue                          = 1108;
CONST
       cmSetClipboardInfo                             = 1109;
CONST
       cmSetDefaultValue                              = 1110;
CONST
       cmQConfHide                                    = 1111;
CONST
       cmQConfTitle                                   = 1112;
CONST
       cmQConfHelp                                    = 1113;
CONST
       cmQConfCopyField                               = 1114;
CONST
       cmBeginLabelLightening                         = 1115;
CONST
       cmEndLabelLightening                           = 1116;
CONST
       cmQConfHideList                                = 1117;
CONST
       cmQConfDelete                                  = 1118;
CONST
       cmGetInputLineByField                          = 1119;
CONST
       cmQConfSaveCursorPos                           = 1120;
CONST
       cmAtlCalcClear                                 = 1121;
CONST
       cmAtlCalcMClear                                = 1122;
CONST
       cmAtlCalcB7                                    = 1123;
CONST
       cmAtlCalcB8                                    = 1124;
CONST
       cmAtlCalcB9                                    = 1125;
CONST
       cmAtlCalcDiv                                   = 1126;
CONST
       cmAtlCalcPercents                              = 1127;
CONST
       cmAtlCalcMRestore                              = 1128;
CONST
       cmAtlCalcB4                                    = 1129;
CONST
       cmAtlCalcB5                                    = 1130;
CONST
       cmAtlCalcB6                                    = 1131;
CONST
       cmAtlCalcMul                                   = 1132;
CONST
       cmAtlCalcInv                                   = 1133;
CONST
       cmAtlCalcM                                     = 1134;
CONST
       cmAtlCalcB1                                    = 1135;
CONST
       cmAtlCalcB2                                    = 1136;
CONST
       cmAtlCalcB3                                    = 1137;
CONST
       cmAtlCalcSub                                   = 1138;
CONST
       cmAtlCalcResult                                = 1139;
CONST
       cmAtlCalcMAdd                                  = 1140;
CONST
       cmAtlCalcB0                                    = 1141;
CONST
       cmAtlCalcDelim                                 = 1142;
CONST
       cmAtlCalcSign                                  = 1143;
CONST
       cmAtlCalcAdd                                   = 1144;
CONST
       cmAtlCalcDelete                                = 1145;
CONST
       cmAtlCalcBackSpace                             = 1146;
CONST
       cmStartNextSegment                             = 1147;
CONST
       cmAQAShowCF                  = 1148;
CONST
       cmAQAShowCFStop                                = 1149;
CONST
       cmAqaShowCFRun                                 = 1150;
CONST
       cmConfSetWndMode                               = 1151;
CONST
       cmQConfDefVal                                  = 1152;
CONST
       cmCanModifyField                               = 1153;
CONST
       cmQConfAddLabel                                = 1154;
CONST
       cmSetViewColumnIndex                           = 1155;
CONST
       cmAddToZOrderCollection                        = 1156;
CONST
       cmConfFlushExtFields                           = 1157;
CONST
       cmAQAregenPlanOrderss                          = 1158;
CONST
       cmAqaPlanMoveDown                              = 1159;
CONST
       cmAqaPlanMoveUp                                = 1160;
CONST
       cmAQAViewOneItem                               = 1161;
CONST
       cmCheckSelfTopWindow                           = 1162;
CONST
       cmOleEmbed                                     = 1164;
CONST
       cmOleDestroy                                   = 1165;
CONST
       cmSHShowLastTopic                              = 1166;
CONST
       cmfADesigner                                   = 1167;
CONST
       cmSpinPick                                     = 1168;
CONST
       cmSetKillMessage                               = 1169;
CONST
       cmRdBlockSetStyle                              = 1170;
CONST
       cmiProcedure                                   = 1171;
CONST
       cmiFunction                                    = 1172;
CONST
       cmShowLabel                                    = 1173;
CONST
       cmHideLabel                                    = 1174;
CONST
       cmDeleteRelation                               = 1175;
CONST
       cmGetStatusLineCommand                         = 1176;
CONST
       cmSetAlign                                     = 1177;
CONST
       cmRdUndo                                       = 1178;
CONST
       cmRdRedo                                       = 1179;
CONST
       cmRdSetModified                                = 1181;
CONST
       cmRdTuneDefDialog                              = 1182;
CONST
       cmEditorOpening                                = 1183;
CONST
       cmEditorClosing                                = 1184;
CONST
       cmAltRelease                                   = 1185;
CONST
       cmRdReinit                                     = 1186;
CONST
       cmUpdateMemoView                               = 1187;
CONST
       cmChildNeedCommand                             = 1188;
CONST
       cmProcessExtViewer                             = 1189;
CONST
       cmRdXorStyle                                   = 1190;
CONST
       cmAqaStartExecNext                             = 1191;
CONST
       cmAqaSwitchOptions                             = 1192;
CONST
       cmSearchRes                                    = 1194;
CONST
       cmAddToFix                                     = 1195;
CONST
       cmDelFromFix                                   = 1196;
CONST
       cmAddToRemove                                  = 1197;
CONST
       cmDelFromRemove                                = 1198;
CONST
       cmRdSetDoubleKeyMode                           = 1199;
CONST
       cmGetAlign                                     = 1200;
CONST
       cmRectChanged                                  = 1201;
CONST
       cmFreeVipInterface                             = 1202;
CONST
       cmIsArdWindow                                  = 1203;
CONST
       cmQueryStartDrag                               = 1204;
CONST
       cmEndDrag                                      = 1205;
CONST
       cmAfterEndDrag                                 = 1206;
CONST
       cmDragEnter                                    = 1207;
CONST
       cmDragOver                                     = 1208;
CONST
       cmDragLeave                                    = 1209;
CONST
       cmDrop                                         = 1210;
CONST
       cmActivateWindow                               = 1211;
CONST
       cmDeActivateWindow                             = 1212;
CONST
       cmAQAAddControlPointField                      = 1213;
CONST
       cmAQARemControlPointField                      = 1214;
CONST
       cmAQASelectControlPointField                   = 1215;
CONST
       cmAQAinputControlPointField                    = 1216;
CONST
       cmDoRecordExists                               = 1217;
CONST
       cmGetMColorInfo                                = 1218;
CONST
       cmSelAll                                       = 1219;
CONST
       cmUnSelAll                                     = 1220;
CONST
       cmDoMarkUnMark                                 = 1221;
CONST
       cmDoInvertMark                                 = 1222;
CONST
       cmNoColumnInfo                                 = 1223;
CONST
       cmAQARestoreScripts                            = 1224;
CONST
       cmAQAStoreScripts                              = 1225;
CONST
       cmAQAUpDownloadScript                          = 1226;
CONST
       cmCollectSymbols                               = 1227;
CONST
       cmSetUpSymbols                                 = 1228;
CONST
       cmAQACallToDO                                  = 1229;
CONST
       cmAppInit                                      = 1230;
CONST
       cmAppDone                                      = 1231;
CONST
       cmAppQueryDone                                 = 1232;
CONST
       cmAQAViewJournal                               = 1233;
CONST
       cmAQACloseInterface                            = 1234;

CONST
       cmStepInto                                     = 1235;
CONST
       cmBreakProgram                                 = 1236;
CONST
       cmEditBreakpoint                               = 1237;
CONST
       cmShowDebuggerOptionsWindow                    = 1238;
CONST
       cmIsVipDebuggerWindow                          = 1239;
CONST
       cmReturnFromFunction                           = 1240;
CONST
       cmAQALetsGo                                    = 1241;
CONST
       cmAQASetJump                                   = 1242;
CONST
       cmTreeCloseCustom                              = 1243;
CONST
       cmAQAAddSuitableFields                         = 1243;
CONST
       cmAQAAddAllCPFields                            = 1244;
CONST
       cmAQARemAllCPFields                            = 1245;
CONST
       cmAQAClose                                     = 1246;
CONST
       cmGetInfoGeather                               = 1247;
CONST
       cmRemoveDefaultButton                          = 1248;
CONST
       cmRestoreDefaultButton                         = 1249;
CONST
       cmGetHintString                                = 1250;
CONST
       cmGetCommandEnable                             = 1251;
CONST
       cmPrepareDefault                               = 1252;
CONST
       cmHideDebuggerWindow                           = 1253;
CONST
       cmGetNewFilesFrom                              = 1254;
CONST
       cmFetchServerQueue                             = 1255;
CONST
       cmExecute                                      = 1256;

CONST
       cmQConfAddObj                                  = 1257;
CONST
       cmQConfSwitchWindow                            = 1258;
CONST
       cmAOwindow                                     = 1259;
CONST
       cmAOscreen                                     = 1260;
CONST
       cmAObrowse                                     = 1261;
CONST
       cmAOtree                                       = 1262;
CONST
       cmAOmemo                                       = 1263;
CONST
       cmAOField                                      = 1264;
CONST
       cmAOEmbed                                      = 1265;
CONST
       cmAOButton                                     = 1266;
CONST
       cmAOText                                       = 1267;
CONST
       cmAOBevel                                      = 1268;
CONST                                                 
       cmQOHide                                       = 1269;
CONST                                                       
       cmQOHideList                                   = 1270;
CONST                                                       
       cmQOAddLabel                                   = 1271;
CONST                                                       
       cmQODelete                                     = 1272;
CONST                                                       
       cmQODefVal                                     = 1273;       
CONST                                                       
       cmGetStringFromMouse                           = 1274;
CONST
       cmManualHScrollPrev                            = 1275;
CONST                                                 
       cmManualHScrollNext                            = 1276;
CONST
       cmManualHScrollFirst                           = 1277;
CONST
       cmManualHScrollLast                            = 1278;
CONST
       cmNavigateConf                                 = 1279;
CONST
       cmManualHScrollPagePrev                        = 1280;
CONST
       cmManualHScrollPageNext                        = 1281;
CONST
       cmToggleStretch                                = 1282;
CONST
       cmAQAEndQuickSeach                             = 1283;
CONST
       cmMemoNotify                                   = 1284;
CONST
       cmAutoMark                                     = 1285;
CONST
       cmAutoUnMark                                   = 1286;
CONST
       cmMarkExport                                   = 1287;
CONST
       cmMarkImport                                   = 1288;
CONST
       cmGetMarkCount                                 = 1289;
CONST
       cmWhoIamMarkCommand                            = 1290;
CONST
       cmGetMarkCountLoc                              = 1291;
CONST
       cmMarkDisable                                  = 1292;
CONST
       cmTopWindowIsVisual                            = 1293; 
CONST
       cmMarkDelete                                   = 1294;
CONST
       cmClearSymInterface                            = 1294; 
CONST
       cmClearSymAll                                  = 1295; 
CONST
       cmAQAOnOffSegment                              = 1296;
CONST
       cmAQADelJump                                   = 1297;
CONST
       cmAQAInsertItemOffPlan                         = 1298;
CONST
       cmAQAInsertItemOffPlanBottom                   = 1299;
CONST
       cmMarkUnMarkFromMouse                          = 1300;
CONST
       cmMarkUnMarkRec                                = 1301;
CONST
       cmGetComponentVersionInfo                      = 1302;

CONST
       cmEnableDisableBreakpoint                      = 2100;
CONST
       cmEnableBreakpointsGroup                       = 2101;
CONST
       cmDisableBreakpointsGroup                      = 2102;
CONST
       cmEnableAllBreakpoints                         = 2103;
CONST
       cmDisableAllBreakpoints                        = 2104;
CONST
       cmRefreshDebuggerWindow                        = 2105;
CONST
       cmGotoSource                                   = 2106;
CONST
       cmOpenCloseStructure                           = 2107;
CONST
       cmOpenDebugLog                                 = 2108;
CONST
       cmCloseDebugLog                                = 2109;
CONST
       cmToggleDebugLog                               = 2110;
CONST
       cmAddToDebugLog                                = 2111;
CONST
       cmEraseDebugLog                                = 2112;
CONST
       cmEditMessagesFilter                           = 2113;
CONST
       cmApply                                        = 2114;
CONST
       cmModifyField                                  = 2115;
CONST
       cmSendFocusToInterface                         = 2116;
CONST
       cmShowLogWindow                                = 2117;
CONST
       cmShowDatabaseWindow                           = 2118;
CONST
       cmShowWatchesWindow                            = 2119;
CONST
       cmShowLocalsWindow                             = 2120;
CONST
       cmShowStackWindow                              = 2121;
CONST
       cmShowBreakpointsWindow                        = 2122;
CONST
       cmGotoPrevInstance                             = 2123;
CONST
       cmGotoNextInstance                             = 2124;
CONST
       cmDbgMarkRec                                   = 2125;
CONST
       cmDbgMarkAll                                   = 2126;
CONST
       cmDbgUnMarkAll                                 = 2127;
CONST
       cmDbgInvertMark                                = 2128;
CONST
       cmTestParams                                   = 2129;
CONST
       cmActivateApp                                  = 2130;

CONST        
       cmMarkRec                                      = 2132;
CONST
       cmMarkAll                                      = 2133;
CONST
       cmUnMarkAll                                    = 2134;
CONST
       cmInvertMark                                   = 2135;
CONST
       cmTreeInsLevel                                 = 2136;
CONST
       cmShowProfilerWindow                           = 2137;
CONST
       cmSetProfOperator                              = 2138;
CONST
       cmSetProfCall                                  = 2139;
CONST
       cmSetProfRegion                                = 2140;
CONST
       cmSetProfOperatorBlock                         = 2141;
CONST
       cmSetProfOperatorAll                           = 2142;
CONST
       cmSetProfRegionBlock                           = 2143;
CONST
       cmSetProfRegionAll                             = 2144;
CONST
       cmProfilerNew                                  = 2145;
CONST
       cmProfileItemsClear                            = 2146;
CONST                                                      
       cmProfilerReport                               = 2147;
CONST
       cmProfilerLoad                                 = 2148;
CONST
       cmProfilerSave                                 = 2149;
CONST
       cmDeleteAllBreakpoints                         = 2150;
CONST
       cmSaveDbgConfiguration                         = 2151;
CONST
       cmDebugAll                                     = 2152;
CONST
       cmDetachAllDebuggers                           = 2153;
CONST
       cmGotoProfRegion                               = 2154;
CONST
       cmEditBreakpointEx                             = 2155;
CONST
       cmCheckRegions                                 = 2156;
CONST
       cmOrigin                                       = 2157;

CONST
       cmGetHelpCtx                                   = 2159;
CONST
       cmNotifyDialogDone                             = 2160;
CONST
       cmUpdateHelpLinks                              = 2161;
CONST
       cmHelpLinksManager                             = 2162;
CONST
       cmSetHelpLinkBlank                             = 2163;
CONST
       cmSetMyFieldsIsValid                           = 2164;
CONST
       cmExtAttr                                      = 2165;
CONST
       cmExtAttrDel                                   = 2166;

CONST
       cmFrFormChange                                 = 2200;
CONST
       cmFrFormClose                                  = 2201;
CONST
       cmViewPopupMemu                                = 2202;
CONST
       cmSetInfoPass                                  = 2203;
CONST
       cmSetInfoCurSource                             = 2204;
CONST
       cmRunProgram                                   = 2205;
CONST
       cmReinitMenu                                   = 2206;
CONST
       fcTMPSave                                      = 1;
CONST
       fcTMPKill                                      = 2;


CONST
       scAllContexts                                  = 65535;
CONST
       scNoContext                                    = 0;
CONST
       scDragging                                     = 1;
CONST
       scMegaView                                     = 2;
CONST
       scReportWindow                                 = 3;
CONST
       scCalculator                                   = 5;
CONST
       scInterface                                    = 6;
CONST
       scHelp                                         = 7;
CONST
       scEvaluate                                     = 8;
CONST
       scMessage                                      = 9;
CONST
       scFileFind                                     = 10;
CONST
       scExtViewersDial                               = 11;
CONST
       scAtlTreeMark                                  = 12;
CONST
       scScreenSaver                                  = 13;
CONST
       scCalendar                                     = 14;
CONST
       scIface                                        = 15;
CONST
       scIfaceSelect                                  = 16;
CONST
       scFindDialog                                   = 17;
CONST
       scAtlTree                                      = 18;

CONST
       scMenuCtx                                      = 110;

CONST
       scMemoView                                     = 120;

CONST
       scLovelySelect                                 = 126;
CONST
       scLovelyRun                                    = 127;
CONST
       scLovelyUserList                               = 128;
CONST
       scLovelyUserPick                               = 129;

CONST
       scFilterListViewer                             = 130;
CONST
       scFilterMainDialog                             = 131;
CONST
       scFilterConditionsDialog                       = 133;
CONST
       scFilterHelpOnly                               = 134;

CONST
       scGrum_Query                                   = 135;
CONST
       scGrum_QueryBezF3                              = 136;
CONST
       scGrum_GraphWindow                             = 137;
CONST
       scFCPickNodeDialog                             = 140;
CONST
       scCheckFRDialog                                = 144;
CONST
       scExtAttrStr                                   = 145;
CONST
       scExtAttrDbl                                   = 146;
CONST
       scExtAttrTime                                  = 147;
CONST
       scExtAttrDate                                  = 148;
CONST
       scExtAttrMemo                                  = 149;
CONST
       scExtAttrComp                                  = 150;

CONST
       sciAqaViewOneSegment                           = 296;
CONST
       sciAqaViewOneTest                              = 297;
CONST
       sciAqaViewOneTestItems                         = 298;
CONST
       sciAqaViewOnePlan                              = 299;
CONST
       sciAqaViewOnePlanItems                         = 300;

CONST
       sciAQAEnEsc18                                  = 301;
CONST
       sciAQAEnEsc178                                 = 302;
CONST
       scQuickChoice                                  = 303;
CONST
       sciAQAEnEsc1                                   = 304;
CONST
       sciAQAOkCancel1                                = 305;
CONST
       sciAQACancel1                                  = 307;
CONST
       sciAQAEsc178                                   = 308;
CONST
       sciAQAEsc1Select                               = 309;
CONST
       sciAQA1EscSpcA7                                = 310;
CONST
       sciAQA1EscSpcA8                                = 311;
CONST
       scDebuger                                      = 312;
CONST
       sciAqaPlans                                    = 313;
CONST
       sciAqaPlan                                     = 314;
CONST
       sciAqaPlanTitle                                = 315;
CONST
       sciAqaPlanChoice                               = 316;
CONST
       sciAqaPlanItems                                = 317;
CONST
       sciAqaSelectPlan                               = 318;
CONST
       sciAqaSelectPlan2                              = 319;
CONST
       sciAqaSelectTest                               = 320;
CONST
       sciAqaSelectTest2                              = 321;
CONST
       scFcomMain                                     = 322;
CONST
       scArdMain                                      = 323;
CONST
       scAqaSetTimingStage                            = 324;
CONST
       scAqaSelectTimingStage                         = 325;
CONST
       scCfgObjects                                   = 326;
CONST
       scCfgObjectInspector                           = 327;
CONST
       scCfgObjectCreator                             = 328;
CONST
       scCfgReports                                   = 329;
CONST
       scCfgMenu                                      = 330;
CONST
       scCfgMenuWithPick                              = 331;
CONST
       scCfgPropValues                                = 332;
CONST
       scArmConfigName                                = 333;
CONST
       scArmConfigProcess                             = 334;
CONST
       scArmEditItem                                  = 335;
CONST
       scCfgServiceFunctions                          = 336;
CONST
       scCfgShowHidden                                = 337;
CONST
       scAtlCalcMain                                  = 338;
CONST
       scAtlCalcField                                 = 339;
CONST
       scAtlCalcProtocol                              = 340;
CONST
       scCfgSelAttr1                                  = 341;
CONST
       scCfgSelAttr2                                  = 342;
CONST
       scCfgSelAttr3                                  = 343;
CONST
       scCfgSelAttr4                                  = 344;
CONST
       scCfgClassifier                                = 345;
CONST
       scCfgClassifierTree                            = 346;
CONST
       scCfgSelAttr2Tree                              = 347;
CONST
       scCfgSelAttr5                                  = 348;
CONST
       scCfgParamStringEdit                           = 349;
CONST
       scCfgParamPathEdit                             = 350;
CONST
       scCfgParamTree                                 = 351;
CONST
       scCfgParamTreePick                             = 352;
CONST
       scCfgAbsObjects                                = 353;
CONST
       scCfgAbsObjectInspector                        = 354;
CONST
       scCfgClassifier2                               = 355;
CONST
       scCfgObjInspectorEditList                      = 356;
CONST
       scCfgServiceFunctionsTypesFilter               = 357;

CONST
       scTreeReport                                   = 360;
CONST
       scTreeReportOptions                            = 361;
CONST
       scEditReportFileName                           = 362;
CONST
       scEditReportOptions                            = 363;
CONST
       scHelpEsc                                      = 364;
CONST
       scHelpEscF3                                    = 365;
CONST
       scMemoEdit                                     = 366;
CONST
       sciAqaPlanItemsF3                              = 368;
CONST
       sciAqaViewOnePlanItemsF3                       = 369;
CONST
       sciAqaSwitchItemName                           = 370;
CONST
       sciAqaInterControlPoint                        = 371;
CONST
       sciAqaInterControlPointAdd                     = 372;

CONST
       scInterface_VDEBUG_WatchesWindow               = 373;
CONST
       scInterface_VDEBUG_LocalsWindow                = 374;
CONST
       scInterface_VDEBUG_BreakpointsWindow           = 375;
CONST
       scInterface_VDEBUG_FilesWindow                 = 376;
CONST
       scInterface_VDEBUG_StackWindow                 = 377;
CONST
       scInterface_VDEBUG_LogWindow                   = 378;
CONST
       scInterface_VDEBUG_OptionsWindow               = 379;
CONST
       scInterface_VDEBUG_DatabaseWindow              = 380;
CONST
       sc_VDEBUG_StdView                              = 381;
CONST
       sc_VDEBUG_Std                                  = 382;
CONST
       sc_VDEBUG_SelectOne                            = 383;
CONST
       sc_VDEBUG_Markers                              = 384;
CONST
       scAQADebuger                                   = 385;
CONST
       scInterface_VDEBUG_ProfilerWindow              = 387;
CONST
       scHelpLinks                                    = 388;
CONST
       scHelpLinkCatch                                = 389;
CONST
       scInterface_VDEBUG_ProfilerImportCodeWindow    = 390;
CONST
       kbEqual                                        = 3389;
CONST
       kbMinus                                        = 3117;
CONST
       kbPlus                                         = 3371;
CONST
       kbMul                                          = 2346;
CONST
       kbDiv                                          = 13615;
CONST
       kbDivRus                                       = 11055;

CONST
       kbAlt0                                         = 33024;
CONST
       kbAlt1                                         = 30720;
CONST
       kbAlt2                                         = 30976;
CONST
       kbAlt3                                         = 31232;
CONST
       kbAlt4                                         = 31488;
CONST
       kbAlt5                                         = 31744;
CONST
       kbAlt6                                         = 32000;
CONST
       kbAlt7                                         = 32256;
CONST
       kbAlt8                                         = 32512;
CONST
       kbAlt9                                         = 32768;
CONST
       kbAltA                                         = 7680;
CONST
       kbAltB                                         = 12288;
CONST
       kbAltC                                         = 11776;
CONST
       kbAltD                                         = 8192;
CONST
       kbAltDown                                      = 3328;
CONST
       kbAltE                                         = 4608;
CONST
       kbAltEqual                                     = 33536;
CONST
       kbAltF                                         = 8448;
CONST
       kbAltF1                                        = 26624;
CONST
       kbAltF10                                       = 28928;
CONST
       kbAltF11                                       = 35584;
CONST
       kbAltF12                                       = 35840;
CONST
       kbAltF2                                        = 26880;
CONST
       kbAltF3                                        = 27136;
CONST
       kbAltF4                                        = 27392;
CONST
       kbAltF5                                        = 27648;
CONST
       kbAltF6                                        = 27904;
CONST
       kbAltF7                                        = 28160;
CONST
       kbAltF8                                        = 28416;
CONST
       kbAltF9                                        = 28672;
CONST
       kbAltG                                         = 8704;
CONST
       kbAltH                                         = 8960;
CONST
       kbAltI                                         = 5888;
CONST
       kbAltJ                                         = 9216;
CONST
       kbAltK                                         = 9472;
CONST
       kbAltL                                         = 9728;
CONST
       kbAltLeft                                      = 2560;
CONST
       kbAltM                                         = 12800;
CONST
       kbAltMinus                                     = 33280;
CONST
       kbAltN                                         = 12544;
CONST
       kbAltO                                         = 6144;
CONST
       kbAltP                                         = 6400;
CONST
       kbAltQ                                         = 4096;
CONST
       kbAltR                                         = 4864;
CONST
       kbAltRight                                     = 2816;
CONST
       kbAltS                                         = 7936;
CONST
       kbAltSpace                                     = 512;
CONST
       kbAltT                                         = 5120;
CONST
       kbAltU                                         = 5632;
CONST
       kbAltUp                                        = 3072;
CONST
       kbAltV                                         = 12032;
CONST
       kbAltW                                         = 4352;
CONST
       kbAltX                                         = 11520;
CONST
       kbAltY                                         = 5376;
CONST
       kbAltZ                                         = 11264;
CONST
       kbAltBackSpace                                 = 4661;
CONST
       kbAltLSqBr                                     = 6656;
CONST
       kbAltRSqBr                                     = 6912;
CONST
       kbAltBkSlsh                                    = 11008;

CONST
       kbBack                                         = 3592;
CONST
       kbCtrlBack                                     = 3711;
CONST
       kbCtrlDel                                      = 1536;
CONST
       kbCtrlDown                                     = 37120;
CONST
       kbCtrlEnd                                      = 29952;
CONST
       kbCtrlEnter                                    = 7178;
CONST
       kbCtrlF1                                       = 24064;
CONST
       kbCtrlF10                                      = 26368;
CONST
       kbCtrlF11                                      = 35072;
CONST
       kbCtrlF12                                      = 35328;
CONST
       kbCtrlF2                                       = 24320;
CONST
       kbCtrlF3                                       = 24576;
CONST
       kbCtrlF4                                       = 24832;
CONST
       kbCtrlF5                                       = 25088;
CONST
       kbCtrlF6                                       = 25344;
CONST
       kbCtrlF7                                       = 25600;
CONST
       kbCtrlF8                                       = 25856;
CONST
       kbCtrlF9                                       = 26112;
CONST
       kbCtrlHome                                     = 30464;
CONST
       kbCtrlIns                                      = 1024;
CONST
       kbCtrlLeft                                     = 29440;
CONST
       kbCtrlPgDn                                     = 30208;
CONST
       kbCtrlPgUp                                     = 33792;
CONST
       kbCtrlPrtSc                                    = 29184;
CONST
       kbCtrlRight                                    = 29696;
CONST
       kbCtrlEqual                                    = 1037;
CONST
       kbCtrlUp                                       = 36096;

CONST
       kbCtrlA                                        = 7681;
CONST
       kbCtrlB                                        = 12290;
CONST
       kbCtrlC                                        = 11779;
CONST
       kbCtrlD                                        = 8196;
CONST
       kbCtrlE                                        = 4613;
CONST
       kbCtrlF                                        = 8454;
CONST
       kbCtrlG                                        = 8711;
CONST
       kbCtrlH                                        = 8968;
CONST
       kbCtrlI                                        = 5897;
CONST
       kbCtrlJ                                        = 9226;
CONST
       kbCtrlK                                        = 9483;
CONST
       kbCtrlL                                        = 9740;
CONST
       kbCtrlM                                        = 12813;
CONST
       kbCtrlN                                        = 12558;
CONST
       kbCtrlO                                        = 6175;
CONST
       kbCtrlP                                        = 6416;
CONST
       kbCtrlQ                                        = 4113;
CONST
       kbCtrlR                                        = 4882;
CONST
       kbCtrlS                                        = 7955;
CONST
       kbCtrlT                                        = 5140;
CONST
       kbCtrlU                                        = 5653;
CONST
       kbCtrlV                                        = 12054;
CONST
       kbCtrlW                                        = 4375;
CONST
       kbCtrlX                                        = 11544;
CONST
       kbCtrlY                                        = 5401;
CONST
       kbCtrlZ                                        = 11290;
CONST
       kbCtrlLSqBr                                    = 51712;
CONST
       kbCtrlRSqBr                                    = 51968;
CONST
       kbCtrlBkSlsh                                   = 52224;

CONST
       kbDel                                          = 21248;
CONST
       kbDown                                         = 20480;
CONST
       kbEnd                                          = 20224;
CONST
       kbEnter                                        = 7181;
CONST
       kbEsc                                          = 283;
CONST
       kbF1                                           = 15104;
CONST
       kbF10                                          = 17408;
CONST
       kbF11                                          = 34048;
CONST
       kbF12                                          = 34304;
CONST
       kbF2                                           = 15360;
CONST
       kbF3                                           = 15616;
CONST
       kbF4                                           = 15872;
CONST
       kbF5                                           = 16128;
CONST
       kbF6                                           = 16384;
CONST
       kbF7                                           = 16640;
CONST
       kbF8                                           = 16896;
CONST
       kbF9                                           = 17152;
CONST
       kbGrayMinus                                    = 18989;
CONST
       kbGrayPlus                                     = 20011;
CONST
       kbCtrlGrayPlus                                 = 1102;
CONST
       kbCtrlGrayMinus                                = 36352;
CONST
       kbAltGrayPlus                                  = 19968;
CONST
       kbAltGrayMinus                                 = 18944;
CONST
       kbCtrlMinus                                    = 3103;
CONST
       kbGrayMul                                      = 14122;
CONST
       kbCtrlGrayMul                                  = 38400;
CONST
       kbAltGrayMul                                   = 14080;
CONST
       kbGrayDiv                                      = 57391;
CONST
       kbCtrlGrayDiv                                  = 38144;
CONST
       kbAltGrayDiv                                   = 41984;

CONST
       kbHome                                         = 18176;
CONST
       kbIns                                          = 20992;
CONST
       kbLeft                                         = 19200;
CONST
       kbNoKey                                        = 0;
CONST
       kbPgDn                                         = 20736;
CONST
       kbPgUp                                         = 18688;
CONST
       kbRight                                        = 19712;
CONST
       kbShiftDel                                     = 1792;
CONST
       kbShiftF1                                      = 21504;
CONST
       kbShiftF10                                     = 23808;
CONST
       kbShiftF11                                     = 34560;
CONST
       kbShiftF12                                     = 34816;
CONST
       kbShiftF2                                      = 21760;
CONST
       kbShiftF3                                      = 22016;
CONST
       kbShiftF4                                      = 22272;
CONST
       kbShiftF5                                      = 22528;
CONST
       kbShiftF6                                      = 22784;
CONST
       kbShiftF7                                      = 23040;
CONST
       kbShiftF8                                      = 23296;
CONST
       kbShiftF9                                      = 23552;
CONST
       kbShiftIns                                     = 1280;
CONST
       kbShiftTab                                     = 3840;
CONST
       kbTab                                          = 3849;
CONST
       kbUp                                           = 18432;
CONST
       kbSpace                                        = 14624;
CONST
       kbAltHome                                      = 3584;
CONST
       kbAltEnd                                       = 4660;
CONST
       kbCtrlTab                                      = 2304;
CONST
       kbAltNum0                                      = 38656;
CONST
       kbAltNum1                                      = 38912;
CONST
       kbAltNum2                                      = 39168;
CONST
       kbAltNum3                                      = 39424;
CONST
       kbAltNum4                                      = 39680;
CONST
       kbAltNum5                                      = 39936;
CONST
       kbAltNum6                                      = 40192;
CONST
       kbAltNum7                                      = 40448;
CONST
       kbAltNum8                                      = 40704;
CONST
       kbAltNum9                                      = 40960;
CONST
       kbAltEnter                                     = 41216;
CONST
       kbAltSemicolon                                 = 47616;
CONST
       kbAltComma                                     = 48128;
CONST
       kbAltDot                                       = 48640;
CONST
       kbAltSlash                                     = 48896;
CONST
       kbAltLBracket                                  = 56064;
CONST
       kbAltRBracket                                  = 56576;
CONST
       kbAltApostrophe                                = 56832;
CONST
       kbAltIns                                       = 57088;

CONST
       ftVoid       =  0;
CONST
       ftBoolean    =  1;
CONST
       ftChar       =  2;
CONST
       ftByte       =  3;
CONST
       ftWord       =  4;
CONST
       ftInteger    =  5;
CONST
       ftLongInt    =  6;
CONST
       ftDate       =  7;
CONST
       ftTime       =  8;
CONST
       ftPointer    =  9;
CONST
       ftSingle     = 10;
CONST
       ftDouble     = 11;
CONST
       ftString     = 12;
CONST
       ftZString    = 13;
CONST
       ftLVar       = 14;
CONST
       ftBuffer     = 15;
CONST
       ftAutoInc    = 16;
CONST
       ftComp       = 17;
CONST
       ftDateTime   = 18;
CONST
       ftArray      = 19;
CONST
       ftTabArray   = 20;
CONST
       ftRecord     = 21;
CONST
       ftReference  = 22;
CONST
       ftAnyArray   = 23;
CONST
       ftPositionHandle = 24;
CONST
       ftVariant = 25;
CONST
       ftDataStream = 26;

CONST
       hisLovelyFunctions_Input = 175;
CONST
       hiRdGotoLine             = 218;
CONST
       hiRdSearch               = 219;
CONST
       hiRdReplace              = 220;
CONST
       hiOpenFileDialog         = 221;
CONST
       hiChangeDirDialog        = 222;
CONST
       hiAQASetTimingStage      = 223;
CONST
       hiCfgScriptFile          = 224;
CONST
       hiCfgHelpLine            = 225;
CONST
       hiCfgTitle               = 226;
CONST
       hiCfgFieldExpression     = 227;
CONST
       hiEMExpression           = 228;
CONST
       hiEMValue                = 229;
CONST
       hiCfgReportFile          = 230;
CONST
       hiEnum                   = 256;
CONST
       hiCfgBoolean             = 257;
CONST
       hiCfgPropList            = 258;
CONST
       hiConfMenu_Name          = 259;
CONST
       hiConfMenu_HelpLine      = 260;
CONST
       hiConfMenu_CallLine      = 261;
CONST 
       hiFindExpression         = 262;


CONST
       mfWarning      = 0;
CONST
       mfError        = 1;
CONST
       mfInformation  = 2;
CONST
       mfConfirmation = 3;

CONST
       mfYesButton    = 256;
CONST
       mfNoButton     = 512;
CONST
       mfOKButton     = 1024;
CONST
       mfCancelButton = 2048;
CONST
       mfYesNoCancel  = 2816;
CONST
       mfOKCancel     = 3072;
CONST
       mfSwapButtons  = 4096;
CONST
       mfNotLogMessage = 8192;
CONST
       mfIgnoreBatch = 16384;
CONST
       mfHelpButton  = 32768;

CONST
       mfBatch       = 1;
CONST
       mfAppend      = 2;
CONST
       mfNoTimeStamp = 4;
CONST
       mfLog2Screen  = 8;
CONST
       mfLog2Stream  = 16;
CONST
       mfModal       = 32;
CONST
       mfInsertInApp = 64;
CONST
       mfNoHeader    = 128;
CONST
       mfFullScreen     = 0;
CONST
       mfUpScreenDiv2   = 256;
CONST
       mfDownScreenDiv2 = 512;
CONST
       mfUpScreenDiv3   = 1024;
CONST
       mfDownScreenDiv3 = 2048;
CONST
       mfStandart       = 2074;

CONST
       fdOkButton      = 1;
CONST
       fdOpenButton    = 2;
CONST
       fdReplaceButton = 4;
CONST
       fdClearButton   = 8;
CONST
       fdHelpButton    = 16;
CONST
       fdSaveButton    = 32;

CONST
       cdNormal     = 0;
CONST
       cdNoLoadDir  = 1;
CONST
       cdHelpButton = 2;

CONST
       pfSilent             =  32768;
CONST
       pfFullScreen         = 0;
CONST
       pfUpScreenDiv2       = 1;
CONST
       pfDownScreenDiv2     = 2;
CONST
       pfUpScreenDiv3       = 4;
CONST
       pfDownScreenDiv3     = 8;
CONST
       pfKeepWindow         = 16;
CONST
       pfDontRedrawScreen   = 32;
CONST
       pfExistentWindow     = 64;
CONST
       pfWaitForTermination = 128;
CONST
       pfExcelAndGalagraf   = 256;
CONST
       pfShellCommand       = 512;
CONST
       pfDontWait           = 4096;
CONST
       pfWaitKey            = 8192;
CONST
       pfSetHandleCount     = 16384;
CONST
       opDoAccept           = 1;
CONST
       opEscClose           = 2;
CONST
       opF6Close            = 4;
CONST
       opInheritCommands      = 4;
CONST
       opCyanInterface      = 16;
CONST
       opDialog             = 128;
CONST
       opGrayInterface      = 256; 

CONST
    DbChar = 67;
CONST
    DbNum  = 78;
CONST
    DbLog  = 76;
CONST
    DbDate = 68;
CONST
    DbMemo = 77;

CONST
    shNoEmpty               = 1;
CONST
    shDefaultHeader         = 2;

CONST
     ntfClose  = 0;
CONST
     ntfOpen   = 1;
CONST
     ntfText   = 2;
CONST
     ntfCurrent = 3;

CONST
        tbfEnable                       = 0;
CONST
        tbfDisable                      = 1;

CONST
        bmAtlantisPickList              = 1;
CONST
        bmAtlantisTreeNodeOpen          = 2;
CONST
        bmAtlantisTreeNodeClose         = 3;
CONST
        bmAtlantisTreeNodeLeaf          = 4;
CONST
        bmAtlantisHistoryList           = 5;
CONST
        bmAtlantisArrowUp               = 6;
CONST
        bmAtlantisArrowDown             = 7;
CONST
        bmAtlantisCalendar              = 8;
CONST
        bmAtlantisCalculator            = 9;
CONST
        bmAtlantisCQS                   = 10;
CONST
        bmAtlantisCQS_NA                = 11;
CONST
        bmAtlantisSpinNormal            = 12;
CONST
        bmAtlantisSpinDown              = 13;
CONST
        bmAtlantisSpinUp                = 14;

CONST
        dbptNone                        = 0;
CONST
        dbptBtrieve                     = 1;
CONST
        dbptOracle                      = 2;
CONST
        dbptMSSQL                       = 3;

CONST
        dbpvMain                        = 0;
CONST
        dbpvMSSQL65                     = 1;
CONST
        dbpvMSSQL70                     = 2;
CONST
        dbpvOracle73                    = 3;
CONST
        dbpvOracle9                     = 4;
CONST
        wpBlueWindow = 0;
CONST
        wpCyanWindow = 1;
CONST
        wpGrayWindow = 2;

CONST
        msHidden                        = 1;
CONST
        msOriginal                      = 2;
CONST
        msSDIWindow                     = 4;
CONST
        msEmbedWindow                   = 8;
CONST
        msAlwaysOnTop                   = 16;
CONST
        msViewIsHide                    = 32;
CONST
        msHasDefValue                   = 64;
CONST
        msLoadedFromResFile             = 128;
CONST
        msHasFieldName                  = 256;
CONST
        msModifiedLT                    = 512;
CONST
        msModifiedPos                   = 1024;
CONST
        msNoResize                      = 2048;
CONST
        msNoMove                        = 4096;
CONST
        msNoResort                      = 8192;
CONST
        msConfModified                  = 16384;


CONST
        ciText                          = 1;
CONST
        ciOEMText                       = 2;
CONST
        ciUnicodeText                   = 4;
CONST
        ciAtlantisText                  = 8;

CONST
        mfProcDeleted  = 1;
CONST
        mfNormal       = 0;
CONST
        mfTransaction  = 1;
CONST
        mfFull         = 2;
CONST
        mfFilters      = 4;
CONST
        mfClear        = 8;
CONST
        mfClearFilters = 16;
CONST
        mfBulkCopy     = 32;
CONST
        mfNotModified = 0;
CONST
        mfInserted    = 1;
CONST
        mfUpdated     = 2;
CONST
        mfDeleted     = 3;

CONST
  fmNormal            = 0;
CONST
  fmReadOnly          = 512;
CONST
  fmMemory            = 1280;
CONST
  fmAutoFlush         = 1;
CONST
  fmBuild             = 2;
CONST
  fmAutoLoad          = 4;
CONST
  fmTemp              = 16;
CONST
  fmWriteThru         = 2048;
CONST
  fmSubTree           = 32768;

CONST
  dcsDefault  = 0;

CONST
  dcsInfinity = 65535;

CONST
  ocGet      = 1;
CONST
  ocPut      = 2;
CONST
  ocProc     = 3;
CONST
  ocFunc     = 4;

CONST
  fpLinesPerPage = 10;
CONST
  fpCurLineNumber = 31;

CONST
          twipsX      = 1;
CONST
          twipsY      = 2;

CONST
  bsLowered             = 0;
CONST
  bsRaised              = 1;
CONST
  bsBox                 = 0;
CONST
  bsFrame               = 1;
CONST
  bsHorizontal          = 2;
CONST
  bsVertical            = 3;

CONST
  ptfFullTable = 1;

CONST
  mk_LBUTTON           =     1;
CONST
  mk_RBUTTON           =     2;
CONST
  mk_SHIFT             =     4;
CONST
  mk_CONTROL           =     8;
CONST
  mk_MBUTTON           =    16;
CONST
  mk_BUTTON            =     7;
CONST
  mk_ALT               =    32;

CONST
  DropEFFECT_NONE      =     0;
CONST
  DropEFFECT_COPY      =     1;
CONST
  DropEFFECT_MOVE      =     2;
CONST
  DropEFFECT_LINK      =     4;
CONST
  DropEFFECT_SCROLL    = 2147483648;

CONST
  Tymed_HGLOBAL        =     1;
CONST
  Tymed_FILE           =     2;
CONST
  Tymed_ISTREAM        =     4;
CONST
  Tymed_ISTORAGE       =     8;
CONST
  Tymed_GDI            =    16;
CONST
  Tymed_MFPICT         =    32;
CONST
  Tymed_ENHMF          =    64;
CONST
  Tymed_NULL           =     0;

CONST
  s_OK                 =     0;
CONST
  e_NOTIMPL            =     1;
CONST
  e_BADTIME            =     2;
CONST
  e_BADPARAM           =     3;
CONST
  e_BADCONTAINER       =     4;
CONST
  dv_E_FORMATETC       =     2147745892;

CONST
  cf_TEXT              =     1;
CONST
  cf_BITMAP            =     2;
CONST
  cf_METAFILEPICT      =     3;
CONST
  cf_SYLK              =     4;
CONST
  cf_DIF               =     5;
CONST
  cf_TIFF              =     6;
CONST
  cf_OEMTEXT           =     7;
CONST
  cf_DIB               =     8;
CONST
  cf_PALETTE           =     9;
CONST
  cf_PENDATA           =    10;
CONST
  cf_RIFF              =    11;
CONST
  cf_WAVE              =    12;
CONST
  cf_UNICODETEXT       =    13;
CONST
  cf_ENHMETAFILE       =    14;

CONST
  taDefault = 0;
CONST
  taLeft    = 1;
CONST
  taRight   = 2;
CONST
  taCenter  = 3;
CONST
  taWidth   = 4;

CONST
  heOk      = 0;
CONST
  heStop    = 1;
CONST
  heAbort   = 2;

CONST
  ooAllowActiveDoc   = 1;
CONST
  ooAllowInPlace     = 2;
CONST
  ooAllowDirectPaint = 4;
CONST
  ooSkipAtlKeys      = 8;
CONST
  ooAtlLocalMenu     = 16;

CONST
  ocp_in    = 1;
CONST
  ocp_out   = 2;
CONST
  ocp_inout = 3;

CONST
  cp_server = 1;
CONST
  cp_client = 2;

CONST
  mbStandard         =  -1;
CONST
  mbOk               =   0;
CONST
  mbIconHand         =  16;
CONST
  mbIconQuestion     =  32;
CONST
  mbIconExclamation  =  48;
CONST
  mbIconAsterisk     =  64;

CONST
  TB_NOTIMPL         =    0;
CONST
  TB_INVALIDID       =   16;
CONST
  TB_SHOW            =   32;
CONST
  TB_ENABLE          =   64;
CONST
  TB_INCONTAINER     =  128;
CONST
  TB_DONTCARE        =  256;
CONST
  TB_INVALIDWINDOW   =  512;
CONST
  TB_GETSTATE        = 1024;
CONST
  TB_FORCONTAINER    = 2048;
CONST
  TB_MANUALENABLE    = 4096;
CONST
  TB_CHECKED         = 8192;

CONST
  TB_GETDOCK        = 0;
CONST
  TB_FLYDOCK        = 1;
CONST
  TB_LEFTDOCK       = 2;
CONST
  TB_TOPDOCK        = 3;
CONST
  TB_RIGHTDOCK      = 4;
CONST
  TB_DOWNDOCK       = 5;

CONST
  CP_DISABLE        =    0;
CONST
  CP_COMPILERS      =    1;
CONST
  CP_SYSTEM         =    2;
CONST
  CP_NORMAL         =  500;
CONST
  CP_PATCHES        = 1000;
CONST
  CP_FIXES          = 1500;
CONST
  CP_LOCALER        = 2000;
CONST
  CP_CONFIGER       = 2500;
CONST
  CP_SYSINTERNAL    = 3000;
CONST
  CP_SYSTEMREAD     = 3001;
CONST
  CP_SYSTEMWORK     = 3002;
CONST
  CP_CONFIGERWORK   = 3004;
CONST
  CP_DEMOVIP        = 3005;
CONST
  CP_FCOMWORK       = 3006;
CONST
  CP_TMPVIP         = 3007;
CONST
  CP_USER           = 3008;

CONST
  CF_GROUP          =    1;
CONST               
  CF_INVALID        =    2;
CONST
  CF_CRITICAL       =    4;
CONST
  CF_OPTIONAL       =    8;

CONST
  grNone    = 0;
CONST
  grSum     = 1;
CONST
  grAvg     = 2;
CONST
  grMax     = 3;
CONST
  grMin     = 4;
CONST
  grCount   = 5;
CONST
  grFirst   = 6;
CONST
  grLast    = 7;

CONST
  hpInterface = 1;
CONST
  hpMenu      = 2;
CONST
  hpCode      = 3;

CONST
  idForward     = 0;
CONST
  idBackward    = 1;
CONST
  pnAnyProperty = -1;

CONST
  MN_Before    = 1;
CONST
  MN_After     = 2;
CONST
  MN_Read      = 65536;
CONST
  MN_Write     = 131072;

CONST
  bifDontGoBelowDomain  = 1;
CONST
  bifEditBox            = 2;
CONST                   
  bifNoNewFolderButton  = 4;
CONST
  bifValidate           = 8;

CONST
  ccRussia              = 1;
CONST
  ccUkraine             = 2;
CONST
  ccBelarus             = 4;
CONST
  ccKazakhstan          = 8;
CONST
  ccUzbekistan          = 16;
CONST
  ccMoldavia            = 32;

CONST
  mfEnabled             = 0;
CONST  
  mfDisabled            = 1;
CONST
  mfHidden              = 2;  
CONST
  mfUnknown             = 3;

const
   ecmfServerFrom = 1;
const
   ecmfServerTo   = 2;

const
   vcEQ  = 0;
const
   vcGE  = 1;


const
   ffGetFirst = 1;
const
   ffGetNext  = 2;
const
   ffGetPrev  = 3;
const
   ffGetLast  = 4;

const
   sdNoPosition = 1;
const
   sdEmptyData  = 2;