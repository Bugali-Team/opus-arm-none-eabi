#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "mlp.h"

/* RMS error was 0.307058, seed was 1479787111 */
/* 0.006588 0.033188 (0.307072 0.307058) 3.61895e-07 6271 10 */

static const float weights[450] = {

/* hidden layer */
0.346452f, -0.000986403f, 0.0238469f, 0.00787237f, -0.00327841f, 
-0.00144448f, -0.00834152f, 0.00662626f, 0.00827114f, -0.00625709f, 
-0.0111221f, -0.0101708f, -0.0220237f, -0.00579342f, 0.0148173f, 
-0.0502682f, 0.0129419f, -0.0202994f, -0.039075f, 0.0529568f, 
0.00938264f, -0.667579f, 0.817718f, 0.212861f, -0.592366f, 
0.182686f, 0.104437f, 0.0418449f, 0.0561753f, 0.186168f, 
0.0837228f, -0.0311366f, 0.00600564f, -0.0454366f, -0.0530324f, 
-0.0216303f, -0.0526483f, -0.0203131f, 0.0659832f, 0.0568102f, 
0.00508217f, -0.0504551f, -0.109038f, -0.0575989f, -0.0545253f, 
-0.499059f, -0.00813707f, 4.57328f, 0.565364f, -2.05258f, 
7.44677f, -1.00112f, -0.438463f, -0.0253055f, -0.0719549f, 
-0.0384969f, -0.0320396f, 0.0327494f, 0.0315827f, 0.0106198f, 
0.00800117f, 0.0197368f, 0.042733f, 0.0292928f, 0.00690012f, 
-0.0710759f, -0.00229299f, 0.123645f, -0.0151665f, 0.113013f, 
0.109826f, 0.20492f, 0.0322878f, 0.50752f, -0.767495f, 
-0.182978f, -0.288763f, -0.340734f, 0.0473468f, 0.0397243f, 
0.0974594f, 0.0526624f, 0.0725072f, -0.0974313f, -0.21646f, 
-0.134403f, -0.0713687f, 0.0559797f, 0.0945215f, -0.037486f, 
0.170421f, -0.299144f, 0.119146f, -0.0586984f, -0.0649505f, 
0.147221f, 0.213973f, -0.370208f, 0.0286924f, 2.32318f, 
-1.11646f, -1.33634f, -1.3209f, -1.33462f, 0.851591f, 
-0.0387395f, 0.00394112f, 0.0538956f, 0.0142521f, 0.0826941f, 
-0.00891185f, 0.031608f, -0.0519062f, 0.0840755f, 0.00711923f, 
0.0553999f, -0.0140473f, 0.289961f, 0.0159519f, 0.408393f, 
0.0706347f, -0.0821191f, 0.094304f, 0.258852f, -0.0872749f, 
-1.31161f, 1.76215f, 1.1734f, -0.218017f, 0.200685f, 
0.113221f, 0.0438638f, -0.11757f, -0.00730474f, -0.034559f, 
-0.0527583f, 0.124873f, -0.0630957f, 0.0199118f, 0.0204139f, 
-0.072775f, 0.0698309f, 0.109033f, 0.418322f, 0.0581625f, 
0.445942f, -0.0967659f, -0.475703f, -0.0364438f, -0.25813f, 
-0.0526156f, 1.95193f, -1.89237f, -0.2298f, 0.484577f, 
-0.70406f, -3.37848f, 0.037487f, 0.0842667f, 0.0862521f, 
0.0203154f, -0.0523732f, -0.120697f, -0.0424331f, -0.0358556f, 
-0.0237288f, -0.0563953f, 0.0413413f, 0.0725612f, 0.484948f, 
-0.0337245f, 0.0919432f, -0.0418379f, -0.289835f, 0.108197f, 
-0.731154f, 0.046635f, -0.0115669f, 1.96781f, 0.22253f, 
-1.44544f, -70.1674f, 1.56784f, -0.0231552f, 0.0226579f, 
0.0368208f, -0.182944f, -0.0664526f, -0.0419537f, -0.0599649f, 
0.177215f, -0.032529f, 0.0417212f, -0.020503f, -0.169923f, 
-0.00776405f, -0.0282886f, 0.582991f, 0.0255885f, -0.0161892f, 
0.0409108f, 1.13725f, 0.149326f, -3.03502f, 4.07061f, 
-1.22442f, -0.955553f, -0.652578f, -0.442688f, -0.0290697f, 
-0.246261f, -0.0545186f, -0.211004f, 0.0218397f, 0.0645374f, 
-0.0239089f, 0.0607779f, -0.00397812f, 0.103708f, 0.0654522f, 
0.0402445f, -0.161771f, -0.119996f, 0.0662066f, -0.0221619f, 
0.156356f, 0.158121f, -0.453376f, 0.100038f, -0.0380598f, 
-0.655184f, -0.874463f, 0.441085f, -0.0189581f, -1.64911f, 
0.116019f, 0.0778868f, 0.022377f, 0.0567152f, -0.0536254f, 
-0.0525457f, -0.0163194f, -0.023485f, -0.0900654f, -0.042401f, 
-0.0452115f, -0.0980355f, -0.30054f, -0.0340618f, -0.315325f, 
-0.0454255f, 0.0550435f, -0.117775f, 0.745518f, -0.111094f, 
-4.59615f, -2.11679f, 0.377472f, -0.398044f, 0.100191f, 
0.987546f, -0.105993f, 0.211353f, 0.0199354f, -0.110528f, 
0.0587012f, -0.146575f, 0.0240706f, 0.0808704f, 0.0662973f, 
-0.133194f, 0.063903f, -0.0663394f, 0.0840598f, -0.157854f, 
-0.0208042f, -0.0415707f, 0.0616584f, 0.134096f, 0.0971693f, 
0.0607324f, 2.18513f, 0.424779f, 1.18391f, 0.800226f, 
4.50274f, -1.97694f, -0.0996252f, 0.00959504f, -0.0687779f, 
0.0108385f, 0.0209571f, -0.0232143f, 0.0324491f, -0.0284241f, 
0.0349509f, 0.00658307f, 0.0670332f, 0.0135798f, -0.0242892f, 
0.114423f, 0.0906438f, -0.00625305f, 0.0991216f, 0.0018775f, 
-0.0631878f, 0.00596324f, 1.98581f, -0.35355f, 0.000361734f, 
1.20065f, 0.845175f, -0.812598f, -0.0566753f, 0.2034f, 
0.108179f, -0.0565119f, 0.0033704f, -0.138371f, -0.0822029f, 
-0.0330501f, -0.0454151f, -0.0938773f, -0.0865522f, 0.296783f, 
0.51366f, -0.138525f, 0.138197f, -0.280676f, 0.00719433f, 
0.368148f, 0.78515f, -0.0206407f, 0.501422f, 4.04115f, 
3.22981f, 1.79516f, 18.177f, -0.764188f, -0.0305839f, 
-0.0102731f, -0.0188846f, -0.0703807f, 0.0311089f, 0.000158915f, 
-0.0778763f, 0.0275067f, -0.00954754f, 0.0199833f, 0.0500232f, 
0.0661436f, 0.469303f, 0.50695f, -0.218825f, 0.00533274f, 
-0.512075f, -1.9125f, 0.639009f, -0.148785f, 1.4833f, 
0.852433f, 1.34851f, -0.734623f, 0.210932f, -0.789634f, 
-0.0114672f, 0.150499f, 0.0381371f, 0.0691792f, -8.753e-06f, 
0.0263655f, 0.0247899f, 0.0172167f, 0.00014426f, -0.00153884f, 
0.0203275f, -0.0194041f, -0.0110974f, 0.108975f, -0.0697057f, 
0.0964956f, -0.10174f, -0.0626501f, 0.0680276f, 0.0215191f, 
-1.26794f, 3.33681f, 0.366054f, -3.0353f, -1.45105f, 
-1.05225f, 0.0302715f, 0.0330566f, 0.0275157f, 0.0161609f, 
-0.10335f, -0.144689f, -0.052541f, -0.024565f, -0.169548f, 
-0.215189f, -0.0575187f, 0.00427752f, -0.0549234f, 0.103446f, 
-0.0833558f, 0.0133471f, -0.0620358f, -0.134324f, -0.291327f, 
-0.043899f, 0.135107f, -0.0220095f, 0.302584f, -1.94763f, 
-0.32957f, 
/* output layer */
-0.138449, 23.1555, 2.02078, 4.63684, 1.63151, 
-2.36045, 1.80583, 0.923012, -1.55375, 1.01092, 
-0.215321, -0.642902, 2.25817, -0.491944, 2.25117, 
-2.19328, -1.98994, 5.62795, 0.957799, 0.472934, 
3.45822, 0.248562, -0.117404, -0.274879, 0.683224, 
0.199083, -1.49602, -2.40808, -2.27289, -1.6856, 
0.325958, 1.21798, 3.14007, 1.50236, };

static const int topo[3] = {25, 16, 2};

const MLP net = {
	3,
	topo,
	weights
};
