#include <avr/pgmspace.h>

const int tamanhoTotal = 8000;
const int tamanhoParte = 500;

//vetor global como PROGMEM
const char texto[tamanhoTotal] PROGMEM = {"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec ullamcorper tristique elit, condimentum accumsan nisi interdum non. Suspendisse hendrerit nisi id augue vestibulum feugiat. Cras lectus tellus, fringilla ut malesuada at, tincidunt ac turpis. Donec ligula est, maximus at egestas vel, eleifend ultricies nulla. Mauris nec nisi quam. Vivamus pulvinar mattis urna, non viverra lacus laoreet quis. Phasellus iaculis luctus est, vel porta turpis consectetur et. Duis pellentesque nisl eget varius viverra. Fusce in orci id massa consectetur euismod ac nec felis. Duis vel lorem elit. Integer nisi enim, ultrices pretium imperdiet sed, mattis et est. Pellentesque enim tortor, vulputate sit amet faucibus eu, ultrices at orci. Sed tristique eget quam in feugiat. Integer vitae sem venenatis, ullamcorper lacus in, porttitor enim. Curabitur libero lacus, lobortis fermentum aliquet in, sollicitudin sed leo. Morbi congue nulla leo, vel facilisis sem lacinia a. Ut commodo vulputate odio, vitae commodo sapien ornare nec. Suspendisse non diam libero. Sed posuere erat at nisl suscipit ornare. Suspendisse dignissim mollis nunc, eu imperdiet lorem congue quis. Nulla id metus id justo mattis suscipit. Fusce vitae lacinia felis. Integer dapibus sagittis ante, eget rutrum enim. Morbi luctus, nunc ut bibendum condimentum, purus augue sodales dolor, ut consectetur felis odio id nibh. Vestibulum consectetur augue ex, at pretium risus placerat vel. Proin tempor risus sit amet gravida viverra. Sed quis dui mollis, porta est eu, auctor nisl. Duis sagittis at est sed venenatis. Nullam auctor elit sed turpis fringilla tincidunt. Sed eget aliquet lectus. In sollicitudin commodo porttitor. Integer velit ante, faucibus id ipsum quis, lobortis consectetur leo. Duis eget semper orci, ac ultrices tortor. Phasellus viverra at eros vel lacinia. Maecenas gravida ligula sed congue pulvinar. Morbi mattis finibus ornare. Etiam quis turpis vitae nunc pulvinar congue vel in lectus. Donec convallis venenatis est in tincidunt. Nam finibus malesuada mauris, vitae commodo lacus tempor id. Donec eget vestibulum magna. Nulla ultricies ligula massa, eget tempus turpis eleifend eget. Etiam dignissim accumsan enim, in pretium nisi tincidunt in. Aliquam pharetra arcu non accumsan gravida. Nulla facilisi. Curabitur in tempor lorem. Phasellus efficitur vel neque maximus blandit. Maecenas pellentesque eget enim in imperdiet. Sed laoreet enim sollicitudin vulputate condimentum. Donec tempor sodales mauris, at feugiat felis. Fusce cursus eleifend auctor. Cras laoreet, nisl nec malesuada gravida, lectus ipsum sodales leo, quis sodales lacus dui id orci. Etiam vulputate maximus enim, a volutpat magna gravida eu. Aenean sit amet rutrum ante. Aenean posuere fermentum tempus. Suspendisse potenti. Nulla mauris erat, aliquet ac venenatis pharetra, semper sed sem. Duis tempor a orci vitae tempor. Duis pellentesque neque et accumsan volutpat. Vestibulum vitae consectetur libero. Quisque vehicula ullamcorper commodo. Mauris sodales sodales bibendum. Nam congue nibh iaculis, feugiat augue ac, facilisis urna. Donec ornare velit mauris, quis vulputate eros accumsan ac. Curabitur porta erat vel nisi dignissim, in gravida orci commodo. Ut non nulla in nisi iaculis volutpat quis et magna. Nullam varius enim eget nibh commodo vehicula. Suspendisse placerat mattis magna id eleifend. In hac habitasse platea dictumst. Orci varius natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Aenean condimentum, nunc id scelerisque condimentum, purus turpis varius augue, eget elementum orci eros nec tellus. Vestibulum at ligula quis nibh ultrices sodales. Integer bibendum libero purus, nec elementum felis aliquet id. Morbi porta elementum vestibulum. Aenean ut erat laoreet, mattis purus eu, semper erat. Morbi dapibus eu neque ac dapibus. Donec interdum non ex non fermentum. Phasellus sed ipsum pulvinar, ultrices libero in, commodo neque. Vivamus sed pretium purus, non viverra dui. Fusce mattis lobortis quam, quis mollis metus consectetur vel. Proin at congue erat. Curabitur porttitor lectus ut magna fermentum tincidunt. Morbi porttitor mattis dolor, at eleifend purus. Nam nec magna et sapien varius hendrerit efficitur a tellus. Orci varius natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Fusce et magna sed tellus malesuada efficitur id sit amet dolor. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed tincidunt, ligula at ultrices sollicitudin, purus tortor euismod eros, vel imperdiet risus enim placerat nisl. In et nulla et lacus porta eleifend in non eros. Duis vel euismod lacus, vitae posuere urna. Maecenas et risus eros. Praesent sit amet fringilla nulla. Suspendisse potenti. Proin nec sagittis metus, vitae pellentesque nisl. Nunc lacus augue, maximus quis neque vitae, eleifend commodo nisl. Phasellus nec molestie dui, vel porttitor ex. In nec diam ac nisi varius pretium vitae et leo. Integer vel ex quis dui auctor placerat. Proin quis turpis nisi. Nulla diam ex, accumsan vitae tincidunt sit amet, molestie fringilla sapien. Sed commodo magna nec diam congue dapibus. Praesent et sem ante. Quisque eget mattis risus. Curabitur pellentesque felis in velit auctor, ut pharetra massa congue.Nunc non eros aliquam, condimentum sapien dapibus, ornare nisl. Aliquam a velit a purus condimentum vulputate non semper tellus. Sed convallis, magna quis ultrices dictum, risus arcu tempus tellus, vitae ultricies orci sem ac lorem. Pellentesque ultricies leo sed elit consectetur, ac malesuada elit blandit. Sed et porta enim. Suspendisse accumsan magna dolor, semper semper velit volutpat id. Quisque fringilla mauris erat, feugiat ultricies lorem auctor congue. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nam id accumsan risus. Aliquam eu volutpat leo, nec faucibus sapien. Sed rhoncus in neque at varius. Aliquam erat volutpat. Aliquam erat volutpat. Maecenas imperdiet est at purus fermentum, vitae sodales libero tristique. Pellentesque lobortis, lorem quis consectetur luctus, massa nisl congue odio, sed convallis nisi sapien consequat turpis. Duis sit amet nisl ac massa iaculis maximus. Vestibulum euismod, magna laoreet consectetur vulputate, elit mauris tincidunt est, eu porta risus neque eu sapien. In placerat consectetur luctus. Morbi faucibus, lectus eget bibendum volutpat, nulla nisi iaculis eros, sit amet dignissim quam dolor euismod mauris. Cras sed risus erat. Duis finibus tempor ligula et ullamcorper. Phasellus id tellus mi. Donec aliquam quis ante sed euismod. In sit amet bibendum justo. Curabitur convallis aliquam purus nec ultricies. Nunc feugiat cursus faucibus. Pellentesque non eros sed nulla ultrices gravida. Ut sollicitudin posuere urna, aliquam scelerisque felis tristique eu. Mauris interdum metus eros, nec imperdiet sem fringilla quis. Nunc a magna fringilla, porta turpis nec, tincidunt magna. Phasellus sem odio, rutrum vitae malesuada ut, ullamcorper quis neque. Quisque ultrices ac est vitae vehicula. Proin vitae metus aliquam, consequat urna in, malesuada nibh. Etiam nec est malesuada, congue neque eget, maximus orci. Quisque volutpat tortor sem, sit amet varius lectus pretium eget. Vestibulum id massa ut mauris accumsan congue ultrices a quam. Praesent ante velit, ullamcorper non maximus sit amet, semper vel dui. Etiam pulvinar velit vel pharetra rhoncus. Nam sed libero sit amet massa commodo vulputate. Ut facilisis interdum tortor nec aliquet. Fusce diam magna, varius sit amet rhoncus ac, iaculis vel massa. Nunc ultrices nisi ac blandit commodo. Nam et dictum justo, vitae tempus nibh. In hac habitasse platea dictumst. Vestibulum a nisl pretium, suscipit orci quis, vulputate turpis. Donec lectus dolor, auctor non eros ac, tempus accumsan orci. Vivamus ullamcorper condimentum nulla quis aliquam. Morbi dictum dictum ex pharetra egestas. Ut efficitur mollis eleifend. Interdum et malesuada fames ac ante ipsum primis in fauci me."}; 
const char chave[20] = "PIZZA";

const char textoDes[tamanhoTotal] PROGMEM = {"AWQDM QORUB CNLDZ RII ZLEI, BOCADBTTBTQ PLHOIHKHMG MKHT. CNNTK TLAILBOGXDQ IZHRTXYTD TTHS, KNMDXUDMTJU ZCRCLRAC MHSX HMTTZCTM VNM. ATRPTVCHSHM GECLQDRXB MIHQ HD ITFUT UDSIQATLJU EEJOHZT. BQAH KDCICR TTTKTS, EQICOHKLP TS BIKDSJICZ PB, TXVBHDJVS AR STREQR. SWMDC THFUAI DSI, LAMQLTS IS EVMRSAH UDL, DKEXNDMD CKSRXKHDS VTKLP. LAJZHR CMB NXAH QJIL. KQUZMJA OUADHMAG LZTIQR UGVZ, CWM VXDDQRP KZCJA KADZDDT YTHS. OGAHMKKUH HZCJTHR ACBSUH DRT, UDL XNQTP STREQR CDVRDCIMSTR MS. SCHR EMKKECBDRQJM MIHT DGTB UAGQTR KQUDRGI. FJABD XV NRRQ HD UZRSP BNNHMBSEICQ EJQRLOS ZB CMB FTTHR. LTHS DDK AWQDM MKHT. HMTTODQ CQRH TVHL, CKSRXKDR EZDSIJU HMEMQCITB RES, LAIBHR TB DSI. OEATDMTTAPTE MMHM BNQTDZ, VJTOTTPBD SXB ZMTB EAJKHAUH DT, CKSRXKDR PB NRRQ. STL SRXASHQJM DGTB PUPU HN NDTGXIS. XVSDGTZ UIIID STU UECMMZTXA, UATZLCDZODR TZBUH HM, XNQTIQSNR MMHM. BTRPJHSUG KHBTZN LPKTR, TNAOGBHR UMQLECBTL PTHPUTB HN, RNLAQBHTJLHM HMC LTW. MDZAH RWMFUT MTLAI KED, UEA EZCXTHRIH RDM TZBICQZ A. TS RWLLOSW UUAXTSAIM NDXW, VXBZD RWLLOSW RAEQDM DZMZRT MDC. RTSEMMCIHAD NDV CIPU KIQMQN. ADC EWRTEGM DRPB ZT VHRL ATRCXXHS DZMZRT. RUHXDMDXARD SQFMIHAHL BWKKIH MTNR, DU QLOEGLHDT TNQEB BNNVCD QJQR. CCKKA QC MTBTR XL IUHBN MPBSHS ATRCXXHS. NTRCT UHTPM KARQMHA NDKIH. HNIMFDR LZOIQCR SPOHSTXA ZNIM, EVMS RJBQTM MMHM. LNRQQ KURBTR, VTMC CS BXJDMDJU BOCLHLECBTL, XTQUH ZTGJM ROSIKDS LNKOG, TT KNMSTKSDTJZ EEAQR OSQN IS MHBW. UEHBHAUACL CDVRDCIMSTR ITFUT DW, IS PGMSHUB QHSJA OLPKDQAI UDL. OQOXV SEBXNQ GQRTS AHS PUDS VZZUISI UIKMQQA. RDD YTHS LTH BWKKIH, OOGBZ EHB DU, ZTCIWQ NXAK. SCHR HIFHTIQR AI DRT ADC KMMDNPBHR. VTKLPU ZURBNQ TTHS HMC TJZOHS NQHNVQKKA BHMCXLTMT. RDD MFDT IKHQJMS LTKSTS. HM HWKKIRQSTDXV BOBUNCO XNQTIQSNR. HMTTODQ KMKHT IMSE, EZURQATS QC IEATL FCHR, TNAOGBHR RWMRERBDSUG KDO. CTIH DFEI RDMEMQ OGKH, PK TLIZHBEH SNRIWQ. EPZREATTR KQUDRGI ZT MQNS DDK AIBHNXI. MPMBDNPA FRPDHCA THFUAI RES BNNVCD PJTUHNPZ. MDZAH BISSIH EHNXJTR DZMZRT. DTXIL QJQR TJZOHS DHSAT MTNR OTLKQMZR KNMGJM UEA HM AMBSUH. COCMB CDVUZLAQR VTVDMAIQR EHB HN BHMCXLTMT. MZM NHMIQCR MPTDRUPLZ MPCQHS, UHTPM BOBUNCO TZBUH SDMEWQ IS. COCMB EVMS VTASHBJTTL BIFMA. MTLAI TLIZHBITA KIVCKZ BIRRA, DFEI SDMECR TJZOHS MKDIUMMC TODS. MSHAB CHGCQRRIB ZBCJURZN MMHM, HM EZDSIJU MIHQ SICKHCUCB HN. ZKIFCZL EPZQEIZZ AGKT NDV ZCRCLRAC FQAKQCZ. VTKLP EZCXTHRI. BTRPJHSUG HM IMLOOG KNRTU. PWIRDLACR EUNHBIICQ VTT MEFCD MPFHLUH AKACLHS. UZDCTVZR EMKKECBDRQJM DGTB DNXU HN QLOEGLHDT. RDD TZNRTMS ECQL SDTKHCXBTCIC UTLECSZTT BNNSQLDNICL. SWMDC BDLPDZ ROSIKDS UZTRXA, AI EDUVQZS UMKHS. ETSRM BUGATR TTDHFTVC AJKSNR. BQAH KZOGMDS, VHRL VDB BIKDSJICZ VZZUISI, LTKSTS QORUB RNDPTDR AMN, FCHR HWCZLTA KARCR DJQ HD WQBI. DSIPU UUAXTSAIM LAMQLTS MMHM, Z VDTTSPPB LAVVZ GGIUHDP DT. IDMEPV RII ZLEI QTTGCL ACBD. PMMDAC ONSJMQD UMQLECBTL IMLOUH. RUHXDMDXARD EWSDNIQ. NJTKZ BITQIH DQAI, ZLXYTDT IB VTVDMAIQR PWIQDTGI, STUODR ADC HML. SCHR IMLOOG Z OGKH VXBZD IMLOOG. CUXA OEATDMTTAPTE VDPUT DS PKBTMHIM VDTTSPPB. VTASHBJTTL KQSZE KNMSTKSDTJZ KIQMQN. YTHSFCD VTPHBUAI TLAILBOGXDQ RWLLOSW. MPCQHS ANCAAMR SDLZKEH AHBTVCTM. MZM KNMGJM MIQP HARCKHS, EDUVQZS PCFTE IB, UIBHLXAHR JZMZ. LNMER NQNPZD VTTHS BITQIH, PUXA UUAXTSAIM DRDA ZCRCLRAC ZB. KTQAQQSTR XNQTP DQAI UDL VHRI LHFNXARHM, HM VZZUISI NRRQ BOBUNCO. TS CWM NJTKZ XV MIHQ HARCKHS DNKUIXZS FCHR TB LAVVZ. CCKKAB UZRXCR ECQL EVMS NXJG CDULNDD UDHXKTKA. RTSEMMCIHAD PAIBDRPB LAIBHR BIFMA QC EAMHEECL. IC GZC PZAIIIRRE XKZTTI CIRBTLSI. NRRQ UAGQTR CISNQJM OECISHBJA DT UZFNXA CIH OZRICQHECB LOCBDR, VZRCTBTQ GQCHCJTTR BCR. PMMDAC BNNSQLDNICL, CCMB XL RCTTDQIHYTD RWMCIBMMSUB, OUGCR TJZOHS DZQIJA ZUVCD, TODS TTDLECBTL DZBH TZNR CMB TTTKTS. UDSIQATLJU ZT THFUAI PUXA MIQP TLIZHBEH RNDPTDR. QMSEVMQ BXJDMDJU KIQMQN ECQTS, MDC MKDMTVSTM NDKIH ZKIFCDS XL. MDZAH EWQSA MKDMTVSTM DDRTXJTKUB. ZECMZM JB DRPB KADZDDT, LZTIQR PJZTR TC, STUODR MQZT. LNRQQ CAEQATS MT NTYTD PK CAEQATS. CNNTK HNIMQCUB MNN MW NDV EEGUDMTJU. PWIRDLACR STL HPHCL PJTUHNPZ, UABQHCTA KIQMQN XV, CDULNDD MDQJM. VXDZLUH RDD XQDTXCL PJZTR, VNM KQUDRGI CUX. EUHKD MPBSHS TNAOGBHR FCZL, YTHS UNKLXA LEICR CDVRDCIMSTR DDK. XQNIC ZS RWMFUT DQAI. BUGIAHTJZ OOGBSHTDZ KERBTR JB LAVVZ FTZLDNICL TXVBHDJVS. BWQAI XNQTIQSNR UZSTXA COAWQ, PB DLTQEDNS OTRJA. NPU MER LZGCI DT AZOITV UAGQTR WMMCRTZHS TNEHCXBTQ P SDLACR. DZBH KIQHUH MZTDYTD EMMZTXJTR TB LAVVHR SQR PPZSTRXMMS BWMSEH, MAHKDSUG QHDXKTKUH LTS. ETSRM DT UZFNP RDD BDKLJA LAAMRTASI DFUQBHTJZ HD AHS PUDS SWKNR. KNRTU HPHCL DDTNQ HQS ABMS, RWMRERBDSUG ZCIEQRBICO DLXB. STL SICKHCUCB, LXOTKA IS UABQHCTA ROATHBIICCHN, OTRJA SOGBNQ TCHRMDL DRDA, VTT HMEMQCITB QIHCR ECQL PAIBDRPB MIHT. IC DS CCKKA MS LPKTR EWQSA MKDIUMMC XV MOC DQOH. CUXA UEA DTIHUNC AIBTS, UHTPM OOHCDQE CQMA. LZERMMZS MS RXATR TZNR. XQZEHMMS HQS ABMS FGQMFIATZ NJTKZ. ATRPTVCHSHM OOIMMSI. OQOXV MER RZGXBSHS UDSUH, UIIID PTTKDNIMRPUT MHSA. MUCK KARCR AJOTD, UZWIBCR QJQR NTYTD KQSZE, DKEXNDMD KNLMDLN NXAK. EPZREATTR CMB MDTDRTXM CUX, UEA ONRIBHSOG DW. QM NTK CIPU ZC VHRI DZQIJA ORTBHTM DHSAT DS AMN. XVSDGTZ UEA DW FCHR SCH AJKSNR XKZCTZZS. XQNIC PTIH STREQR NXAH. CCKKA LHZM MW, PKBTMHIM VXBZD IQMBISCMS HQS ABMS, BWKDSIQD FGQMFIATZ SPXHDN. RDD KNLMDLN MPOMZ CMB DXIL CDVFTE LZOIQCR. EZZDSTVS EI RDM IMSE. PTIHYTD TODS BISSIH QHSJA. CJZZAIICQ PTTKDNIMRPUT EDLXA HN DDKII ZTCIWQ, JB OHPZDSRP LZSHI BOCOTD.CCMB CWM EGWR AAQPTAB, BOCLHLECBTL HIOHEC CZPXJTR, WQMAGM MIHT. AAQPTAB Z VTTHS P OTRJA BOCLHLECBTL KCKOUIISD CWM STUODR BDKLJA. STL BOCDZKLXA, MPOMZ FCHR JTSQIRMR DXKSTM, QHSJA ZRRC SEBXTR IMKKUH, UIIID UABQHCXMR OGKH STU ZC TNQEB. OEATDMTTAPTE CKSRXKHDS TDN HMC EAQS CDVRDCIMSTR, ZB BIKDSJICZ TTHS QTZMDXB. STL DT XNQTP DMIB. RUHXDMDXARD PKBTMHIM MPOMZ SWKNR, RDMEMQ STUODR DDKII UNLJBOZT QC. FCHRQJM ERXVFHLAI LAJZHR TZZS, NDTGXIS UABQHCXMR LDZDL PCBSOG BNNVCD. RTZRS IOSECB SARQSH HWBHOHYT AS KHTDZZ TDZPTECB OEG BNNJJHZ CWRSRP, OEG HMCTXSNS PHLECIDNS. MZM QC ARKTLSPV QIHCR. PTHPUPU DU DNKUIXZS AMN, CMB FPCBHBJA RAEQDM. ADC GPNMCJA HN VDPUT ZS KIQHUH. ZLXYTZM MQZT DNKUIXZS. IKHQJIL EGIS VDTTSPPB. MPMBDNPA HMEMQCITB DSI ZS ECQTS NDQMTVSTM, UHTPM ROSIKDS THAEGW SRXASHQJM. PTTKDNIMRPUT KNBDZSHS, KNRTU PUXA BOCADBTTBTQ ACBSUH, LAHAZ NXAK CDVFTE WCHO, RDD KNMVPTKHS VHRI AZOITV BOCADPUPB SUGXHR. LTHS AHS PUDS CQRK PK LAHAZ IPKTKIH LZXXUTR. DDRTXJTKUB DTIHUNC, UZFNP KZOGMDS RWMRERBDSUG UTLECSZTT, DLXB LAJZHR IQMBISCMS TAS, TC OOGBZ RXATR CMPTE MT SPXHDN. HM ETZBEGIS CDVRDCIMSTR TTBTJA. MDZAH UITBIQCR, AMBSUH DFEI AHBTVCTM DNKUIXZS, VTKLP MHSX HZCJTHR TZNR, AHS PUDS SQFMIHAHL FCZL SWKNR MTHSBWC MPCQHS. BQAH RDD ZHRUH DQAI. CUXA EICQATS BDLPDZ KIVCKZ TB TLAILBOGXDQ. XGZSTTKTS QC TTTKTS UH. SWMDC IKHQJIL QJQR ACBD STL DUXALND. HM HQS ABMS BXJDMDJU IUHBN. RCQZBXBTQ RWMUAATHR PTHPUPU OUGCR NTK TLIZHBITA. NJVB FTCFHAI BTRHCR FPCBHBJA. PTTKDNIMRPUT MNN MQNS ADC CCKKA CKSRXKDR VZZUISI. UI RNLAQBHTJLHM EWRTEGM TRCI, AAQPTAB RBEAMQHSFCD FTTHR IZHRTXYTD TC. MPCQHS QMSEGLTL BMSTS MQNS, MDC QLOEGLHDT ADL UZHMGXTKZ FCHR. VTMC I LAVVZ FGQMFIATZ, EWQSA BTQPXA MER, SICKHCUCB LAVVZ. EPZREATTR HML OSQN, GCSQUB UHTPM LAAMRTASI TT, TKLPUBNREMQ QJQR NTYTD. YTHSFCD UABQHCTA ZC MRS KQSZE DDGIRCKZ. XQNIC UHTPM LEICR AAQPTAB, BOCADPUPB TRCI HN, LZLTATZDP MHBW. DTXIL NTK DSI LZLTATZDP, BOCOTD CMPTE MFDT, LZXXUTR DZBH. YTHSFCD VDTTSPPB SOGBNQ HML, HQS ABMS VPZHTS TDBTJA ORTBHTM MFDT. UDSIQATLJU HD UZRSP TS BITQIH ZBCJURZN KNMGJM TLIZHBEH Z QJIL. EZZDSTVS ACBD VTTHS, CKKABKNQPTZ MOC LZXXUTR HQS ABMS, HMLOEG UDL LTH. MSHAB OTLKQMZR DDKII UDL XGZRTBQZ GPNMCJA. NPU RES KHBTZN SXB ZMTB LAHAZ CDULNDD UTLECSZTT. TT NZBIAQRHS QMSEGLTL IWQSOG MDC IKHQJMS. UCRBE LHZM UZFNP, UAGQTR HQS ABMS RWWMBUH ZB, QZBUAQR VTT LAHAZ. CCMB JTSQIRMR NXAH AR AKACLHS RWLLOSW. NPU DT LHBTJU IUHBN, KQSZE BDLPJA MIQP. IC GZC PZAIIIRRE XKZTTI CIRBTLSI. UEHBHAUACL A VHRL XQDTXCL, HCRBIEQS OGKH QJQR, KCKOUIISD ICQOIH. COCMB LTKSTS LNKOG, ZURBNQ CWM EGWR AR, SEBXTR PKBTMHIM OGKH. KQUZMJA TLAILBOGXDQ RWMCIBMMSUB MTLAI PUXA ZLXYTZM. LNRQQ CIRBTL SQBSUB DW EPZQEIZZ EVMRSAH. TT MEEIRQSTR UNKLXA DLTQEDNS. HNIMQCUB DS BIKDSJICZ UILDS IB ACBD IEATL EZHLIH HM UITBI UD."};


void encriptar(char *chave, char* texto){
  int chaveLength = strlen(chave);
  int textoLength = strlen(texto);
  
  for (int i = 0; i < textoLength; i++) {
    char letraChave = chave[i % chaveLength];
    texto[i] = texto[i] > 64 ? (texto[i] + letraChave) % 26 + 65 : texto[i];
  }
}


void desencriptar(char *chave, char *texto){
  int chaveLength = strlen(chave);
  int textoLength = strlen(texto);
  
  for (int i = 0; i < textoLength; i++) {
    char letraChave = chave[i % chaveLength];
    texto[i] = texto[i] > 64 ? (texto[i] - letraChave + 26) % 26 + 65 : texto[i];
  }
}


void wrapEncriptar(int inicio, char *buffer){

  while (inicio < tamanhoTotal) {
    for (int i = 0; i < tamanhoParte; i++) {
      char c = pgm_read_byte_near(texto + inicio + i);
      if (c == '\0') {
        break; // Fim do vetor
      }
      buffer[i] = toupper(c);
    }

    encriptar(chave, buffer);
    
    Serial.print(buffer); // Imprimir parte na porta serial

    inicio += tamanhoParte; //Incrementa o inicio da parte
  }

}

void wrapDesencriptar(int inicio, char *buffer){

  while (inicio < tamanhoTotal) {
    for (int i = 0; i < tamanhoParte; i++) {
      char c = pgm_read_byte_near(textoDes + inicio + i);
      if (c == '\0') {
        break; // Fim do vetor
      }
      buffer[i] = toupper(c);
    }

    desencriptar(chave, buffer);
    
    Serial.print(buffer); // Imprimir parte na porta serial

    inicio += tamanhoParte; //Incrementa o inicio da parte
  }

}

void setup() {
  Serial.begin(9600); 

  int inicio = 0; // da parte
  char buffer[tamanhoParte + 1]; // +1 para o caractere nulo
  buffer[tamanhoParte] = '\0'; // Garanta que a string seja terminada corretamente

  Serial.print("Texto encriptado: \n");
  wrapEncriptar(inicio, buffer);

  Serial.print("\n");

  Serial.print("Texto desencriptado: \n");
  wrapDesencriptar(inicio, buffer);
  
}

void loop() {
  // Se você tiver algum código para o loop, coloque aqui
}
