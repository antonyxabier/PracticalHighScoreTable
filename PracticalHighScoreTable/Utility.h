#pragma once
class Utility
{
public:

	static bool mGoodRead;

	/// <summary>
	/// The success of the last Read call.
	/// False if last Read failed, True otherwise. 
	/// </summary>
	static bool IsReadGood();

	/// <summary>
	/// Attempts to read an Int32 (int) from the console.
	/// The integer input, if the read succeeded, is returned.
	/// This function will prevent any program crashes.
	/// If Exceptions occur, they are caught, ignored and 0 is returned.
	/// </summary>
	static int ReadInt();
};

