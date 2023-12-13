
/*
#define DEFINE_UNICODE		FALSE
#define CUR_PATH_SEPARATOR_CHR	'\\'
#define PATH_CCH_ADD_SEPARATOR	PathCchAddBackslashA
*/

#if DEFINE_UNICODE

HRESULT PATH_CCH_ADD_SEPARATOR(PWSTR pszPath, size_t cchPath)
{
	size_t pszPathLength;

	if (!pszPath)
		return E_INVALIDARG;

	pszPathLength = _wcslen(pszPath);

	if (pszPath[pszPathLength - 1] == CUR_PATH_SEPARATOR_CHR)
		return S_FALSE;

	if (cchPath > (pszPathLength + 1))
	{
		pszPath[pszPathLength] = CUR_PATH_SEPARATOR_CHR;
		pszPath[pszPathLength + 1] = '\0';

		return S_OK;
	}

	return HRESULT_FROM_WIN32(ERROR_INSUFFICIENT_BUFFER);
}

#else

HRESULT PATH_CCH_ADD_SEPARATOR(PSTR pszPath, size_t cchPath)
{
	size_t pszPathLength;

	if (!pszPath)
		return E_INVALIDARG;

	pszPathLength = strlen(pszPath);

	if (pszPath[pszPathLength - 1] == CUR_PATH_SEPARATOR_CHR)
		return S_FALSE;

	if (cchPath > (pszPathLength + 1))
	{
		pszPath[pszPathLength] = CUR_PATH_SEPARATOR_CHR;
		pszPath[pszPathLength + 1] = '\0';

		return S_OK;
	}

	return HRESULT_FROM_WIN32(ERROR_INSUFFICIENT_BUFFER);
}

#endif

/*
#undef DEFINE_UNICODE
#undef CUR_PATH_SEPARATOR_CHR
#undef PATH_CCH_ADD_SEPARATOR
*/
