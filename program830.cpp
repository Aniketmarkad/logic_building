#include<string.h>
#include<iostream>

using namespace std;

#define TRUE 1
#define FALSE 0

//
//		New data types
//
typedef int                 BOOL;
typedef unsigned char       BYTE;

//
// This is generic linked list of type T
//
template <typename T>
struct GEN_LIST
{
	T		Data;
	GEN_LIST	*pNext;
};

//
// This is generic doubly linked list of type T
//
template <typename T>
struct GEN_DLIST
{
	T		Data;
	GEN_DLIST	*pNext,*pPrev;
};

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Class Name			:	Singly_linkedList
//	Description			:	This class represents singly linear lined list
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
class Singly_linkedList
{
	public:
	GEN_LIST<T> *pHead;			// Pointing at start of linked list
	GEN_LIST<T> *pTail;			// Pointing at end of linked list

	Singly_linkedList();

	~Singly_linkedList();

	BOOL AddToGenListFirst (
								T *pNodeData
							);

	void DisplayGenList( );

	BOOL AddToGenListLast (
								T *pNodeData
							);

	BOOL FreeGenList( );

	int CountGenListNode ( );

	int SearchFirstOccurance(
								T data
							);

	int SearchAllOccurance(
								T data
							);

	BOOL InsertAtPosition( 
								int pos,
								T* pNodeData
							);

	BOOL DeleteFromGenListFirst( );

	BOOL DeleteAtPosition(
							int pos
						);

	BOOL DeleteFromGenListLast( );

	BOOL ReverseList( );

};

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Singly_linkedList
//	Function Date			:	07/11/2013
//	Function Author			:	Piyush Khairnar
//	Parameters:				: NONE
//	Description:
//		This is constructor of class Singly_linkedList
//
//	Returns					: NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <typename T>
Singly_linkedList<T> ::Singly_linkedList ( )
{
	pHead = NULL;
	pTail = NULL;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	~Singly_linkedList
//	Function Date			:	07/11/2013
//	Function Author			:	Piyush Khairnar
//	Parameters:				: NONE
//	Description:
//		This is destructor of class Singly_linkedList
//
//	Returns					: NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template <typename T>
Singly_linkedList<T> ::~Singly_linkedList ( )
{
	GEN_LIST<T> *pTemp;
	GEN_LIST<T> *pNavigate;

	if (NULL != pHead)
	{
		pNavigate = pHead;
		while (NULL != pNavigate)
		{
			pTemp = pNavigate->pNext;
			free(pNavigate);
			pNavigate = pTemp;
		}
	}
}
///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	AddToGenListFirst
//	Function Date			:	07/11/2013
//	Function Author		:	Piyush Khairnar
//	Parameters:
//
//		[IN] T *pNodeData.
//		Holds the entry which is to be added.
//
//	Description:
//		This function adds node to Singly Linear Linked List.
//
//	Returns:
//		BOOLEAN
//		If the function succeeds, the return value is TRUE.
//		If the function fails, the return value is FALSE.
//
///////////////////////////////////////////////////////////////////////////////////////////
template <typename T>
BOOL 
Singly_linkedList<T> ::AddToGenListFirst (
													T *pNodeData
														)
{
	GEN_LIST<T> *pNewNode;

	if ( NULL == pNodeData )
	{
		return FALSE;
	}

	//
	//	Allocate new node.
	//
	pNewNode = (GEN_LIST<T> *)malloc(sizeof(GEN_LIST<T>));
	if (NULL == pNewNode)
	{
		return FALSE;
	}

	//
	//	Fill the node with data.
	//
	memset(pNewNode, 0, sizeof(GEN_LIST<T>));
	pNewNode->pNext = NULL;
	pNewNode->Data = *pNodeData;

	//
	//	Prepend
	//
	if (NULL == pHead)
	{
		pHead = pNewNode;
		pTail = pNewNode;
	}
	else
	{
		pNewNode -> pNext = pHead;
		pHead = pNewNode;
	}

	return TRUE;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name		:	DisplayGenList
//	Function Date		:	07/11/2013
//	Function Author	:	Piyush Khairnar
//	Parameters:
//					NONE
//	Description:
//		This function displays Singly Linear Linked List.
//
//	Returns:
//		void
//
///////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
void 
Singly_linkedList<T>::DisplayGenList()
{
	GEN_LIST<T> *pTempNode;
	pTempNode = pHead;

	while(NULL != pTempNode)
	{
		cout<<pTempNode -> Data<<" -> ";
		pTempNode = pTempNode -> pNext;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name		:	AddToGenListLast
//	Function Date		:	07/11/2013
//	Function Author	:	Piyush Khairnar
//	Parameters:
//
//		[IN] GEN_LIST<T> **ppListToBeAppended.
//		List which is to be appended to an existing list.
//
//	Description:
//		This function appends node inn Singly Linear Linked List
//
//	Returns:
//		BOOLEAN
//		If the function succeeds, the return value is TRUE.
//		If the function fails, the return value is FALSE.
//
///////////////////////////////////////////////////////////////////////////////////////////

template <typename T> 
BOOL
Singly_linkedList<T>::AddToGenListLast (
														T *pNodeData
														)
{
	GEN_LIST<T> *pNewNode;

	GEN_LIST<T> *pTempNode;
	pTempNode = pHead;

	if (NULL == pNodeData)
	{
		return FALSE;
	}

	//
	//	Allocate new node.
	//
	pNewNode = (GEN_LIST<T> *)malloc(sizeof(GEN_LIST<T>));
	if (NULL == pNewNode)
	{
		return FALSE;
	}

	//
	//	Fill the node with data.
	//
	memset(pNewNode, 0, sizeof(GEN_LIST<T>));
	pNewNode -> pNext = NULL;
	pNewNode -> Data = *pNodeData;

	//
	//	Append
	//
	if (NULL == pHead)
	{
		pHead = pNewNode;
		pTail = pNewNode;
	}
	else
	{
		pTail->pNext = pNewNode;
		pTail = pNewNode;
	}

	return TRUE;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name		:	FreeGenList
//	Function Date		:	07/11/2013
//	Function Author	:	Piyush Khairnar
//	Parameters:
//					NONE
//	Description:
//		This function frees Singly Linear Linked List.
//
//	Returns:
//		BOOLEAN
//		If the function succeeds, the return value is TRUE.
//		If the function fails, the return value is FALSE.
//
///////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
BOOL 
Singly_linkedList<T>::FreeGenList( )
{
	GEN_LIST<T> *pTemp;
	GEN_LIST<T> *pNavigate;

	if (NULL == pHead)
	{
		return FALSE;
	}

	pNavigate = pHead;
	while (NULL != pNavigate)
	{
		pTemp = pNavigate->pNext;
		free(pNavigate);
		pNavigate = pTemp;
	}

	return TRUE;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name		:	CountGenListNode
//	Function Date		:	07/11/2013
//	Function Author	:	Piyush Khairnar
//	Parameters:
//					NONE
//	Description:
//		This function counts nodes in Singly Linear Linked List.
//
//	Returns:
//		int
//		Number of nodes in generic list
//
///////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
int 
Singly_linkedList<T>::CountGenListNode ( )
{
	// Variable for maintaining number of nodes
	int CountNode = 0;
	GEN_LIST<T> *pListHead = pHead;

	// Traverse the linked list till end
	while(NULL != pListHead)
	{
		CountNode++;
		pListHead = pListHead -> pNext;
	}
	return CountNode;
}

////////////////////////////////////////////////////////////////////////////
//
//	Function Name		:	SearchFirstOccurance
//	Function Date		:	07/11/2013
//	Function Author	:	Piyush Khairnar
//	Parameters:
//
//			[IN] GEN_LIST<T> data.
//			Holds head data to be searched.
//
//	Description:
//		This function search perticular data in Singly Linear Linked List.
//		and return the position at which data is found.
//
//	Returns:
//		int
//		Position at which data is found in generic list
//
///////////////////////////////////////////////////////////////////////////
template <typename T>
int 
Singly_linkedList<T>::SearchFirstOccurance(
															T data
														)
{
	int CountNode = 0;
	GEN_LIST<T> *pListHead = pHead;

	// Traverse the linked list till end
	while( pListHead != NULL )
	{
		++CountNode;

		// If data matches with the input value
		if(memcmp(&(pListHead -> Data), &data, sizeof(data) ) == 0)
		{
			// Break the loop as we get the first occurance
			return CountNode; 
		}
		pListHead = pListHead ->pNext;
	}

	return -1;
}

////////////////////////////////////////////////////////////////////////////
//
//	Function Name		:	SearchAllOccurance
//	Function Date		:	07/11/2013
//	Function Author	:	Piyush Khairnar
//	Parameters:
//
//			[IN] GEN_LIST<T> data.
//			Holds head data to be searched.
//
//	Description:
//		This function search perticular data in Singly Linear Linked List.
//		and return number of occurances of that data.
//
//	Returns:
//		int
//		Number of times data is found in generic list
//
///////////////////////////////////////////////////////////////////////////

template <typename T>
int 
Singly_linkedList<T>::SearchAllOccurance(
														T data
														)
{
	int CountNode = 0;
	GEN_LIST<T> *pListHead = pHead;

	// Traverse the linked list till end
	while( pListHead!= NULL )
	{
		// If data matches with the input value
		if(memcmp(&(pListHead -> Data), &data, sizeof(data) ) == 0)
		{ 
			++CountNode; 
		}
		pListHead = pListHead -> pNext;
	}

	return CountNode;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name		:	InsertAtPosition
//	Function Date			:	07/11/2013
//	Function Author		:	Piyush Khairnar
//	Parameters:
//
//		[IN] int pos.
//		Holds the the position.
//
//		[IN] T *pNodeData.
//		Holds the entry which is to be added.
//
//	Description:
//		This function adds node at specified position in Singly Linear Linked List.
//
//	Returns:
//		BOOLEAN
//		If the function succeeds, the return value is TRUE.
//		If the function fails, the return value is FALSE.
//
///////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
BOOL 
Singly_linkedList<T>::InsertAtPosition( 
														int pos,
														T* pNodeData
													)
{
	int i = 1;
	
	GEN_LIST<T> *temp = NULL;
	GEN_LIST<T> *pNewNode = NULL;
	
	// If linked list is empty
	if( pHead == NULL )
	{ 
		return FALSE;
	}
	
	else if( pos == 1 )
	{
		AddToGenListFirst(pNodeData ); 
	}
	else if(pos == (CountGenListNode( )) + 1)
	{
		AddToGenListLast(pNodeData ); 
	}
	else if( (pos > CountGenListNode()))
	{
		return FALSE;
	}
	else
	{
		temp = pHead;
		pNewNode = (GEN_LIST<T> *)malloc(sizeof(GEN_LIST<T> ));
		if (NULL == pNewNode)
		{
			return FALSE;
		}

		//
		//	Fill the node with data.
		//
		memset(pNewNode, 0, sizeof(GEN_LIST<T>));
		pNewNode -> pNext = NULL;
		pNewNode -> Data = *pNodeData;

		while(i < pos - 1)
		{
			temp = temp -> pNext;
			++i;
		}
		pNewNode -> pNext = temp -> pNext;
		temp -> pNext = pNewNode;
	}

	return TRUE;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name		:	DeleteFromGenListFirst
//	Function Date		:	07/11/2013
//	Function Author	:	Piyush Khairnar
//
//	Parameters:
//					NONE
//	Description:
//		This function removes first node from Singly Linear Linked List.
//
//	Returns:
//		BOOLEAN
//		If the function succeeds, the return value is TRUE.
//		If the function fails, the return value is FALSE.
//
///////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
BOOL 
Singly_linkedList<T>::DeleteFromGenListFirst( )
{
	GEN_LIST <T> *temp;
	temp = pHead;

	// If linked list is empty
	if(pHead == NULL)
	{
		return FALSE;
	}
	else
	{
		pHead = temp -> pNext;
		free(temp);
	}
	return TRUE;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name		:	DeleteFromGenListLast
//	Function Date		:	07/11/2013
//	Function Author	:	Piyush Khairnar
//	Parameters:
//					NONE
//	Description:
//		This function removes last node from Singly Linear Linked List.
//
//	Returns:
//		BOOLEAN
//		If the function succeeds, the return value is TRUE.
//		If the function fails, the return value is FALSE.
//
///////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
BOOL Singly_linkedList<T>::DeleteFromGenListLast( )
{
	GEN_LIST<T> *temp1,*temp2;
	temp1 = temp2 = pHead;

	// If linked list is empty
	if(pHead == NULL)
	{
		return FALSE;
	}
	else
	{
		while(temp1 -> pNext != NULL)
		{
			temp2 = temp2 -> pNext;
			temp1 = temp2 -> pNext;
		}
		temp2 -> pNext = NULL;
		free(temp1);
	}

	return TRUE;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name		:	DeleteAtPosition
//	Function Date			:	07/11/2013
//	Function Author		:	Piyush Khairnar
//	Parameters:
//					NONE
//		[IN] int pos.
//		Holds the the position.
//
//	Description:
//		This function deletes node from specified position in Singly Linear Linked List.
//
//	Returns:
//		BOOLEAN
//		If the function succeeds, the return value is TRUE.
//		If the function fails, the return value is FALSE.
//
///////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
BOOL 
Singly_linkedList<T>::DeleteAtPosition(
														int pos
													)
{
	if(pos > (CountGenListNode()))
	{
		return FALSE;
	}
	else if(pos == 1)
	{
		DeleteFromGenListFirst();
	}
	else if(pos == (CountGenListNode()))
	{
		DeleteFromGenListLast();
	}
	else
	{
		int i = 0;
		GEN_LIST<T> *temp = pHead,*t;

		for(i = 0; i < pos - 1; i++)
		{
			t = temp;
			temp = temp -> pNext;
		}
		t -> pNext = temp -> pNext;
		temp -> pNext = NULL;
		free( temp );
	}

	return TRUE;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name		:	ReverseList
//	Function Date			:	07/11/2013
//	Function Author		:	Piyush Khairnar
//	Parameters:
//					NONE
//	Description:
//		This function reverse Singly Linear Linked List.
//
//	Returns:
//		BOOLEAN
//		If the function succeeds, the return value is TRUE.
//		If the function fails, the return value is FALSE.
//
///////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
BOOL Singly_linkedList<T>::ReverseList( )
{
	GEN_LIST<T> *prev = NULL;
	GEN_LIST<T> *current = pHead;
	GEN_LIST<T> *next = NULL;

	// If linked list is empty
	if(pHead == NULL)
	{
		return FALSE;
	}

	while(current != NULL)
	{
		next = current -> pNext;
		current -> pNext = prev;
		prev = current;
		current = next;
	}
	pHead = prev;

	return TRUE;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Entry point function
//	Function Date			:	07/11/2013
//	Function Author		:	Piyush Khairnar
//	Brief Description	:	
//
///////////////////////////////////////////////////////////////////////////////////////////

int main()
{
BOOL bRet;

cout<<endl<<"-------------------------------------------------------------"<<endl;
cout<<"\t\tLinear Singly Linked List";
cout<<endl<<"-------------------------------------------------------------"<<endl;

Singly_linkedList <int>sobj;
int no=10;
sobj.AddToGenListFirst(&no);
no++;
sobj.AddToGenListFirst(&no);
no++;
sobj.AddToGenListFirst(&no);
no++;
sobj.AddToGenListFirst(&no);

no = 25;
sobj.AddToGenListLast(&no);
sobj.DisplayGenList();

no = 11;
cout<<endl<<"Element 11 is fount at position "<<sobj.SearchFirstOccurance(no)<<endl;

sobj.InsertAtPosition(4,&no);
sobj.DisplayGenList();
printf("\n");

sobj.DeleteFromGenListFirst();
sobj.DisplayGenList();
printf("\n");

sobj.DeleteFromGenListLast();
sobj.DisplayGenList();
printf("\n");

sobj.DeleteAtPosition(2);
sobj.DisplayGenList();
printf("\n");

sobj.ReverseList();
sobj.DisplayGenList();
printf("\n");

return 0;
}

// To do list
// 1 . Resume preparation
// 2 . Github repo finalisation
// 3 . Linkedin finalisation
// 4 . Project code finalisation (source code + readme file + Interview questions + Documentation)
// 5 . Interview questions of project
// 6 . Assignments gothrough
// 7 . Industrial code modifications (Comments , Variable name, Documentation)

// Submission : Friday 19th September 5 PM
