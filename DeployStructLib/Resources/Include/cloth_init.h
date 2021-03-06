/*
COPYRIGHT (C) 2018
BY ATA ENGINEERING, INC.
ALL RIGHTS RESERVED
*/

  void Cloth_NatQuad_Init(int M,int N,double E,double G,double nu,double thickness,double* P1,double* P2,double* P3,double* P4,double* P1_loc,double* ref_angles,double* P1_start,double* P2_start,double* P3_start,double* P4_start,int debug,double* Kq);



  void Cloth_MassLoc_Flat_Init(int M,int N,double* P1_start,double* P2_start,double* P3_start,double* P4_start,int M_act,int isEdge,int isEdgeB,int debug,double* A);



  void Cloth_Mass_Init(double* P1,double* P2,double* P3,double* P4,int M,int N,double density,int M_act,int debug,int isEdge,int isEdgeB,double* A);



void Cloth_MassLoc_zFold_Init(int M, int N, double* P1_start, double* P2_start, double* P3_start, double* P4_start, double L, int folds, int isEdge, int isEdgeB, int dir_pos, int debug, double* A);



  void Cloth_NatTri_Init(int M, int N, double E, double G, double nu, double thickness, int index, double* P1, double* P2, double* P3, double* P4, double* P1_loc, double* ref_angles, int* axes_sequence, int debug, double* Kq);



  void Cloth_MassLoc_Init(double* P1, double* P2, double* P3, double* P4, int M, int N, double start_angle, double* P_ref, double* P_R_T, double* P_R_w, double* A, int debug);



  void Cloth_G1_bend_Init(double* P1, double* P2, double* P3, double* P4, int M, int N, int* M_ind, int size_M_ind, int* N_ind, int size_N_ind, double D, int debug, double* k);



  void Cloth_G1_Init(double* P1, double* P2, double* P3, double* P4, int M, int N, double G_xy, double thickness, int debug, double* A);



void Cloth_G1s0_Init(double* P1, double* P2, double* P3, double* P4, int M, int N, int debug, double* A);
