/*
 * BagCsrManager.h
 *
 *  Created on: Jul 23, 2017
 *      Author: zeyi
 */

#ifndef BAGCSRMANAGER_H_
#define BAGCSRMANAGER_H_

#include "../../SharedUtility/DataType.h"
#include "../../SharedUtility/memVector.h"

class BagCsrManager{
public:
	static uint *pEachCsrFeaStartPos;
	static uint *pEachCsrFeaLen;
	static uint *pEachCsrNodeStartPos;
	static uint *pEachNodeSizeInCsr;
	static int *preFvalueInsId;
	static uint curNumCsr;
private:
	static uint reservedMaxNumCsr;
	static MemVector csrLen;
	static MemVector csrMarker;
	static MemVector csrKey;
	static MemVector csrDefault2Right;
	static real *pCsrFvalue;
	void reserveCsrSpace();

public:
	BagCsrManager(int numFea, int maxNumSN, uint totalNumFeaValue);
	uint *getMutableCsrLen();
	real *getMutableCsrHess();
	real *getMutableCsrFvalue();
	uint *getMutableCsrKey();
	bool *getMutableDefault2Right();

	uint *getMutableCsrStart();
	uint *getMutableCsrMarker();
	uint *getMutableCsrStartCurRound();
	unsigned char *getMutableCsrId2Pid();
	uint *getMutableCsrOldLen();
	const uint *getCsrStart();
	const uint *getCsrMarker();
	const uint *getCsrStartCurRound();
	const unsigned char *getCsrId2Pid();
	const uint *getCsrOldLen();
	const uint *getCsrLen();
	const real *getCsrHess();
	const real *getCsrFvalue();
	const uint *getCsrKey();
	const bool *getDefault2Right();
};



#endif /* BAGCSRMANAGER_H_ */
